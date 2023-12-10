#ifndef java_io_File_H
#define java_io_File_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class FileFilter;
    class FilenameFilter;
    class IOException;
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
        mid_init$_d0bc48d5b00dc40c,
        mid_init$_94ced6352b9e37c8,
        mid_init$_6a2001eff0605f71,
        mid_canExecute_b108b35ef48e27bd,
        mid_canRead_b108b35ef48e27bd,
        mid_canWrite_b108b35ef48e27bd,
        mid_compareTo_2d89c7a20a7ed0cc,
        mid_createNewFile_b108b35ef48e27bd,
        mid_createTempFile_60a5214aca0ff7ec,
        mid_createTempFile_d8d960d2f4a3a8b9,
        mid_delete_b108b35ef48e27bd,
        mid_deleteOnExit_0fa09c18fee449d5,
        mid_equals_65c7d273e80d497a,
        mid_exists_b108b35ef48e27bd,
        mid_getAbsoluteFile_a570d7db18cb9fa8,
        mid_getAbsolutePath_11b109bd155ca898,
        mid_getCanonicalFile_a570d7db18cb9fa8,
        mid_getCanonicalPath_11b109bd155ca898,
        mid_getFreeSpace_492808a339bfa35f,
        mid_getName_11b109bd155ca898,
        mid_getParent_11b109bd155ca898,
        mid_getParentFile_a570d7db18cb9fa8,
        mid_getPath_11b109bd155ca898,
        mid_getTotalSpace_492808a339bfa35f,
        mid_getUsableSpace_492808a339bfa35f,
        mid_hashCode_570ce0828f81a2c1,
        mid_isAbsolute_b108b35ef48e27bd,
        mid_isDirectory_b108b35ef48e27bd,
        mid_isFile_b108b35ef48e27bd,
        mid_isHidden_b108b35ef48e27bd,
        mid_lastModified_492808a339bfa35f,
        mid_length_492808a339bfa35f,
        mid_list_692f4257baa8d3c3,
        mid_list_5ccc244df17373d4,
        mid_listFiles_65428ce8af20de24,
        mid_listFiles_622a1703373f06cf,
        mid_listFiles_efca136e870625ee,
        mid_listRoots_65428ce8af20de24,
        mid_mkdir_b108b35ef48e27bd,
        mid_mkdirs_b108b35ef48e27bd,
        mid_renameTo_473023b97fc9984d,
        mid_setExecutable_29387014c78e7f59,
        mid_setExecutable_9e431b345e2a150d,
        mid_setLastModified_31b8f662f1e63743,
        mid_setReadOnly_b108b35ef48e27bd,
        mid_setReadable_29387014c78e7f59,
        mid_setReadable_9e431b345e2a150d,
        mid_setWritable_29387014c78e7f59,
        mid_setWritable_9e431b345e2a150d,
        mid_toString_11b109bd155ca898,
        mid_toURL_70ba05b0472208bf,
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
