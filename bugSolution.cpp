int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) { 
    *ptr = 10; 
  } else {
    // Handle the null pointer case appropriately, e.g., return an error or use a default value.
    std::cerr << "Error: Null pointer encountered." << std::endl;
    return 1; 
  }
  return 0;
}