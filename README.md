# oss-fuzz-test


# Testing for oss-fuzz framework
```
git clone https://github.com/klausware/oss-fuzz-test
git clone https://github.com/google/oss-fuzz

cp -rf ./oss-fuzz-example/oss-fuzz-test oss-fuzz/projects/oss-fuzz-test
cd oss-fuzz
python3 infra/helper.py build_fuzzers oss-fuzz-test
python3 infra/helper.py run_fuzzer oss-fuzz-test convert_fuzzer
```
