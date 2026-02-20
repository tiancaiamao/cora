# Shebang 处理回归测试

## 测试目的

验证 `main.c` 中的 shebang 处理不会跳过文件的第一行。

## Bug 描述

原代码中的 `shebang()` 函数会读取并丢弃每一行短于 255 字符的行，
导致没有 shebang 的文件的第一行表达式丢失。

## 测试用例

1. **shebang-test-01-no-shebang.cora**: 验证没有 shebang 的文件第一行不丢失
2. **shebang-test-02-import-first.cora**: 验证第一行的 import 能正常工作
3. **shebang-test-03-with-shebang.cora**: 验证带 shebang 的文件仍然正常工作
4. **shebang-test-04-multi-import.cora**: 验证多个 import 在前几行都能工作

## 运行测试

```bash
# 通过 Makefile
make test-shebang

# 直接运行
./test/shebang/run-tests.sh
```

## 相关文件

- `main.c`: 修复的 shebang 处理逻辑
