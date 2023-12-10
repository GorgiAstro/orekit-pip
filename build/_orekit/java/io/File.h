#ifndef java_io_File_H
#define java_io_File_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class FilenameFilter;
    class FileFilter;
    class Serializable;
    class File;
  }
  namespace lang {
    class Class;
    class String;
    class Comparable;
  }
  namespace net {
    class URL;
  }
}
template<class T> class JArray;

namespace java {
  namespace io {

    class File : public ::java::lang::Object {
     public:
      enum {
        mid_init$_e939c6558ae8d313,
        mid_init$_94be9c6310e15013,
        mid_init$_96073c87872b7a97,
        mid_canExecute_e470b6d9e0d979db,
        mid_canRead_e470b6d9e0d979db,
        mid_canWrite_e470b6d9e0d979db,
        mid_compareTo_b10a114664b0e687,
        mid_createNewFile_e470b6d9e0d979db,
        mid_createTempFile_984ce354c1ffcd33,
        mid_createTempFile_3568852b5e9a7a90,
        mid_delete_e470b6d9e0d979db,
        mid_deleteOnExit_7ae3461a92a43152,
        mid_equals_229c87223f486349,
        mid_exists_e470b6d9e0d979db,
        mid_getAbsoluteFile_f284405e82682cf7,
        mid_getAbsolutePath_0090f7797e403f43,
        mid_getCanonicalFile_f284405e82682cf7,
        mid_getCanonicalPath_0090f7797e403f43,
        mid_getFreeSpace_a27fc9afd27e559d,
        mid_getName_0090f7797e403f43,
        mid_getParent_0090f7797e403f43,
        mid_getParentFile_f284405e82682cf7,
        mid_getPath_0090f7797e403f43,
        mid_getTotalSpace_a27fc9afd27e559d,
        mid_getUsableSpace_a27fc9afd27e559d,
        mid_hashCode_f2f64475e4580546,
        mid_isAbsolute_e470b6d9e0d979db,
        mid_isDirectory_e470b6d9e0d979db,
        mid_isFile_e470b6d9e0d979db,
        mid_isHidden_e470b6d9e0d979db,
        mid_lastModified_a27fc9afd27e559d,
        mid_length_a27fc9afd27e559d,
        mid_list_0f62ccf08eef5924,
        mid_list_e0ae6ed6826da5ac,
        mid_listFiles_01e3b63ff5700cff,
        mid_listFiles_6487ff6365c5c0d5,
        mid_listFiles_022e0c648fe0eee2,
        mid_listRoots_01e3b63ff5700cff,
        mid_mkdir_e470b6d9e0d979db,
        mid_mkdirs_e470b6d9e0d979db,
        mid_renameTo_667e23095e41ed38,
        mid_setExecutable_677f083a4e44dce2,
        mid_setExecutable_100b9381d288c094,
        mid_setLastModified_9560f1672fe5dd29,
        mid_setReadOnly_e470b6d9e0d979db,
        mid_setReadable_677f083a4e44dce2,
        mid_setReadable_100b9381d288c094,
        mid_setWritable_677f083a4e44dce2,
        mid_setWritable_100b9381d288c094,
        mid_toString_0090f7797e403f43,
        mid_toURL_c1cbbd2390395b8b,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit File(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      File(const File& obj) : ::java::lang::Object(obj) {}

      static ::java::lang::String *pathSeparator;
      static jchar pathSeparatorChar;
      static ::java::lang::String *separator;
      static jchar separatorChar;

      File(const ::java::lang::String &);
      File(const File &, const ::java::lang::String &);
      File(const ::java::lang::String &, const ::java::lang::String &);

      jboolean canExecute() const;
      jboolean canRead() const;
      jboolean canWrite() const;
      jint compareTo(const File &) const;
      jboolean createNewFile() const;
      static File createTempFile(const ::java::lang::String &, const ::java::lang::String &);
      static File createTempFile(const ::java::lang::String &, const ::java::lang::String &, const File &);
      jboolean delete$() const;
      void deleteOnExit() const;
      jboolean equals(const ::java::lang::Object &) const;
      jboolean exists() const;
      File getAbsoluteFile() const;
      ::java::lang::String getAbsolutePath() const;
      File getCanonicalFile() const;
      ::java::lang::String getCanonicalPath() const;
      jlong getFreeSpace() const;
      ::java::lang::String getName() const;
      ::java::lang::String getParent() const;
      File getParentFile() const;
      ::java::lang::String getPath() const;
      jlong getTotalSpace() const;
      jlong getUsableSpace() const;
      jint hashCode() const;
      jboolean isAbsolute() const;
      jboolean isDirectory() const;
      jboolean isFile() const;
      jboolean isHidden() const;
      jlong lastModified() const;
      jlong length() const;
      JArray< ::java::lang::String > list() const;
      JArray< ::java::lang::String > list(const ::java::io::FilenameFilter &) const;
      JArray< File > listFiles() const;
      JArray< File > listFiles(const ::java::io::FileFilter &) const;
      JArray< File > listFiles(const ::java::io::FilenameFilter &) const;
      static JArray< File > listRoots();
      jboolean mkdir() const;
      jboolean mkdirs() const;
      jboolean renameTo(const File &) const;
      jboolean setExecutable(jboolean) const;
      jboolean setExecutable(jboolean, jboolean) const;
      jboolean setLastModified(jlong) const;
      jboolean setReadOnly() const;
      jboolean setReadable(jboolean) const;
      jboolean setReadable(jboolean, jboolean) const;
      jboolean setWritable(jboolean) const;
      jboolean setWritable(jboolean, jboolean) const;
      ::java::lang::String toString() const;
      ::java::net::URL toURL() const;
    };
  }
}

#include <Python.h>

namespace java {
  namespace io {
    extern PyType_Def PY_TYPE_DEF(File);
    extern PyTypeObject *PY_TYPE(File);

    class t_File {
    public:
      PyObject_HEAD
      File object;
      static PyObject *wrap_Object(const File&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
