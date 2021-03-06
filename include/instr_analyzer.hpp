#ifndef ANALYZER_H
#define ANALYZER_H

#include <string>
#include <llvm/IR/Module.h>
#include <llvm/IR/Value.h>
#include "instr_plugin.hpp"

class Analyzer {

  public:
	static std::unique_ptr<InstrPlugin> analyze(const std::string &path, llvm::Module* module);
	static bool shouldInstrument(InstrPlugin* plugin, const std::string &condition, llvm::Value* a, llvm::Value* b = NULL);

  private:
	 Analyzer() {}
};

#endif
