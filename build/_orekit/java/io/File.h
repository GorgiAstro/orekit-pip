#ifndef java_io_File_H
#define java_io_File_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
    class FileFilter;
    class Serializable;
    class File;
    class FilenameFilter;
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
        mid_init$_f5ffdf29129ef90a,
        mid_init$_7a5b31fafc364859,
        mid_init$_630071dd94c59169,
        mid_canExecute_89b302893bdbe1f1,
        mid_canRead_89b302893bdbe1f1,
        mid_canWrite_89b302893bdbe1f1,
        mid_compareTo_562bb2f6e6ce4c78,
        mid_createNewFile_89b302893bdbe1f1,
        mid_createTempFile_b4bb821705556510,
        mid_createTempFile_847f643c3593d002,
        mid_delete_89b302893bdbe1f1,
        mid_deleteOnExit_0640e6acf969ed28,
        mid_equals_221e8e85cb385209,
        mid_exists_89b302893bdbe1f1,
        mid_getAbsoluteFile_7fba3d9d6a9eec51,
        mid_getAbsolutePath_3cffd47377eca18a,
        mid_getCanonicalFile_7fba3d9d6a9eec51,
        mid_getCanonicalPath_3cffd47377eca18a,
        mid_getFreeSpace_9e26256fb0d384a2,
        mid_getName_3cffd47377eca18a,
        mid_getParent_3cffd47377eca18a,
        mid_getParentFile_7fba3d9d6a9eec51,
        mid_getPath_3cffd47377eca18a,
        mid_getTotalSpace_9e26256fb0d384a2,
        mid_getUsableSpace_9e26256fb0d384a2,
        mid_hashCode_412668abc8d889e9,
        mid_isAbsolute_89b302893bdbe1f1,
        mid_isDirectory_89b302893bdbe1f1,
        mid_isFile_89b302893bdbe1f1,
        mid_isHidden_89b302893bdbe1f1,
        mid_lastModified_9e26256fb0d384a2,
        mid_length_9e26256fb0d384a2,
        mid_list_5d7d8c500345981d,
        mid_list_760dff7315e46078,
        mid_listFiles_ef4a3a804b7be7b4,
        mid_listFiles_3620e2b59a7e6570,
        mid_listFiles_0c6292c299f22571,
        mid_listRoots_ef4a3a804b7be7b4,
        mid_mkdir_89b302893bdbe1f1,
        mid_mkdirs_89b302893bdbe1f1,
        mid_renameTo_af02963481b9f0fd,
        mid_setExecutable_bc7235a51f399397,
        mid_setExecutable_fb66d73e77ebbfca,
        mid_setLastModified_9848db5862ba9934,
        mid_setReadOnly_89b302893bdbe1f1,
        mid_setReadable_bc7235a51f399397,
        mid_setReadable_fb66d73e77ebbfca,
        mid_setWritable_bc7235a51f399397,
        mid_setWritable_fb66d73e77ebbfca,
        mid_toString_3cffd47377eca18a,
        mid_toURL_5f5f2413a1ee2248,
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
