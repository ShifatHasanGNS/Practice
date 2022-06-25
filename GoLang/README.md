### File Structure

- **`go`**
  - **`bin`**
    - *.exe
  - **`pkg`**
    - **`mod`**
    - **`sumdb`**
  - **`src`**
    - WorkSpaces */* Projects [**i.e:** `notes`]

---

### Common Commands | Through an Example-Project: hello

- To initialize a go module by creating a **go.mod** file:
  - **`go mod init example/hello`**
- To add new module **requirements** and **sums**:
  - **`go mod tidy`**
- To redirect **Go tools** from its **module path** (where the module isn't) to the **local directory** (where it is):
  - **`go mod edit -replace example.com/greetings=../greetings`**
  - **`go mod tidy`**
- To **run** a code (after fast-compilation in the background):
  - **`go run .`**
- To **compile** the code into an executable:
  - **`go build`**
- To confirm that the code works:
  - in linux */* mac: **`./hello`**
  - in windows: **`hello.exe`**
- To **install** the project into the `GOBIN` folder:
  - **`go install'`**
  - Now it will run just by typing the **`hello`** in the terminal or console.
- For any Help: **`go help`**