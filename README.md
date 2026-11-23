# Data Structures in C++

A collection of standalone C++ implementations of classic data structures and probabilistic data structures.

The examples focus on core operations and basic implementation concepts. Each source file contains its own `main()` function and can be compiled separately.

## Implementations

| File | Data structure | Main operations |
|---|---|---|
| `bst.cpp` | Binary Search Tree (BST) | Insertion, search, deletion, inorder / preorder / postorder traversal |
| `btree.cpp` | B-tree | Insertion, search, deletion, inorder traversal |
| `hashtable.cpp` | Hash Table | Insertion, search, removal, collision handling with separate chaining |
| `trie.cpp` | Trie (prefix tree) | String insertion, exact-key search, removal |
| `bloom_filter.cpp` | Bloom Filter | Probabilistic membership testing with multiple hash functions |
| `count-min_sketch.cpp` | Count-Min Sketch | Approximate frequency estimation |

## Build and run

Compile each implementation separately with a C++17-compatible compiler.

For example, to compile and run the Binary Search Tree implementation with `g++`:

```bash
g++ -std=c++17 bst.cpp -o bst
./bst
```

To run another implementation, replace `bst.cpp` with the corresponding source file name and choose an executable name.

## Notes

- The examples use the C++ standard library and do not require external dependencies.
- The Bloom Filter is a probabilistic data structure: it may report false positives, but a correctly configured filter does not produce false negatives for elements that have been added.
- Count-Min Sketch estimates element frequencies and may overestimate counts because of hash collisions.
- These are educational implementations intended to demonstrate data structure concepts and their core operations.
