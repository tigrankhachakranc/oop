#ifndef COMMAND_REGISTRY_H
#define COMMAND_REGISTRY_H

#include <string>
#include <unordered_map>
#include <functional>
#include <vector>

class CommandRegistry {
public:
    using CommandHandler = std::function<void(const std::vector<std::string>&)>;

    void registerCommand(const std::string& commandName, CommandHandler handler);
    void executeCommand(const std::string& command);

private:
    std::unordered_map<std::string, CommandHandler> commandMap;
};

#endif // COMMAND_REGISTRY_H
