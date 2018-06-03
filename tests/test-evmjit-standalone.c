#include <stdio.h>
#include <evmjit.h>

int main()
{
    struct evm_instance* instance = evmjit_create();
    if (EVM_ABI_VERSION != instance->abi_version)
    {
        printf("Error: expected ABI version %u!\n", EVM_ABI_VERSION);
        return 1;
    }
    printf("EVMJIT ABI version %u\n", instance->abi_version);
    return 0;
}
