PROJECT_HOME=$(HOME)/workspace/Projects/reg-inspector

#Target: bebug, release
BIN_TARGET=debug

include $(PROJECT_HOME)/base.mk

REGIN_OBJ=$(REGIN_BIN_PATH)/uicontroller.o $(REGIN_BIN_PATH)/riappmgr.o
TEST_OBJ=$(REGIN_BIN_PATH)/main.o


$(REGIN_BIN_PATH)/riappmgr.o: $(REGIN_SRC_PATH)/riappmgr.cpp
	@echo
	@echo "[MAKE INFO] Compiling $?"
	@echo "   File to compile: $?"
	@echo "   Obj file      : $@"
	$(REGIN_CC) $(REGIN_CFLAG) $(REGIN_LOG_SETTING) -c $? -o $@
	@echo "[MAKE INFO] Compile $? succesfull!"
	@echo

$(REGIN_BIN_PATH)/uicontroller.o: $(REGIN_SRC_PATH)/uicontroller.cpp
	@echo
	@echo "[MAKE INFO] Compiling $?"
	@echo "   File to compile: $?"
	@echo "   Obj file      : $@"
	$(REGIN_CC) $(REGIN_CFLAG) $(REGIN_LOG_SETTING) -c $? -o $@
	@echo "[MAKE INFO] Compile $? succesfull!"
	@echo

$(REGIN_BIN_PATH)/main.o: $(REGIN_SRC_PATH)/main.cpp
	@echo
	@echo "[MAKE INFO] Compiling $?"
	@echo "   File to compile: $?"
	@echo "   Obj file      : $@"
	$(REGIN_CC) $(REGIN_CFLAG) $(REGIN_LOG_SETTING) -c $? -o $@
	@echo "[MAKE INFO] Compile $? succesfull!"
	@echo
	
test:  $(REGIN_OBJ) $(TEST_OBJ)
	@echo
	@echo "---------------------------------------------------------------------------------"
	@echo "[MAKE INFO] Linking $@"	
	$(REGIN_LPP) $(REGIN_LFLAG) -o $(REGIN_BIN_PATH)/$@ $(TEST_OBJ) $(REGIN_OBJ) -lncurses
	@echo "[MAKE INFO] Succesfull!"
	@echo "---------------------------------------------------------------------------------"
	@echo

	
.PHONY : clean_test
  
 clean_test:
	@echo
	@echo "---------------------------------------------------------------------------------"
	@echo "Clean object files: $(TEST_OBJ) $(REGIN_OBJ)"
	-rm  $(TEST_OBJ) $(REGIN_OBJ)  $(REGIN_BIN_PATH)/test
	@echo "Object file deleted"
	@echo "---------------------------------------------------------------------------------"
	@echo
	