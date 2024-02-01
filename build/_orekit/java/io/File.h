#ifndef java_io_File_H
#define java_io_File_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class Serializable;
    class FilenameFilter;
    class FileFilter;
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
        mid_init$_105e1eadb709d9ac,
        mid_init$_e73c97ae824bba63,
        mid_init$_771aee6c143cc92a,
        mid_canExecute_eee3de00fe971136,
        mid_canRead_eee3de00fe971136,
        mid_canWrite_eee3de00fe971136,
        mid_compareTo_509e55f0f3677b3c,
        mid_createNewFile_eee3de00fe971136,
        mid_createTempFile_ccff254288fbd3e6,
        mid_createTempFile_d0bb7da1c2d05a8c,
        mid_delete_eee3de00fe971136,
        mid_deleteOnExit_ff7cb6c242604316,
        mid_equals_72faff9b05f5ed5e,
        mid_exists_eee3de00fe971136,
        mid_getAbsoluteFile_2f333c06ff3067c5,
        mid_getAbsolutePath_d2c8eb4129821f0e,
        mid_getCanonicalFile_2f333c06ff3067c5,
        mid_getCanonicalPath_d2c8eb4129821f0e,
        mid_getFreeSpace_42c72b98e3c2e08a,
        mid_getName_d2c8eb4129821f0e,
        mid_getParent_d2c8eb4129821f0e,
        mid_getParentFile_2f333c06ff3067c5,
        mid_getPath_d2c8eb4129821f0e,
        mid_getTotalSpace_42c72b98e3c2e08a,
        mid_getUsableSpace_42c72b98e3c2e08a,
        mid_hashCode_d6ab429752e7c267,
        mid_isAbsolute_eee3de00fe971136,
        mid_isDirectory_eee3de00fe971136,
        mid_isFile_eee3de00fe971136,
        mid_isHidden_eee3de00fe971136,
        mid_lastModified_42c72b98e3c2e08a,
        mid_length_42c72b98e3c2e08a,
        mid_list_f81c0644d57ae495,
        mid_list_97e4a3e135e76d9d,
        mid_listFiles_69aca932c4172962,
        mid_listFiles_1f4b11a0bd14c57b,
        mid_listFiles_9aeda5cf12f37a87,
        mid_listRoots_69aca932c4172962,
        mid_mkdir_eee3de00fe971136,
        mid_mkdirs_eee3de00fe971136,
        mid_renameTo_f268557c9bda463f,
        mid_setExecutable_80aaf3d99b4df682,
        mid_setExecutable_d30e0f24f88aecc2,
        mid_setLastModified_31359cc4f01092c4,
        mid_setReadOnly_eee3de00fe971136,
        mid_setReadable_80aaf3d99b4df682,
        mid_setReadable_d30e0f24f88aecc2,
        mid_setWritable_80aaf3d99b4df682,
        mid_setWritable_d30e0f24f88aecc2,
        mid_toString_d2c8eb4129821f0e,
        mid_toURL_a4c2066e9b85f63c,
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
