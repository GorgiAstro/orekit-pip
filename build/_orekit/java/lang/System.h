#ifndef java_lang_System_H
#define java_lang_System_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Properties;
    class ResourceBundle;
  }
  namespace io {
    class InputStream;
    class Console;
    class PrintStream;
  }
  namespace lang {
    class System$Logger;
    class Class;
    class String;
    class SecurityManager;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class System : public ::java::lang::Object {
     public:
      enum {
        mid_arraycopy_776a14184eee5fde,
        mid_clearProperty_92807efd57acb082,
        mid_console_32592bc3486ad27a,
        mid_currentTimeMillis_492808a339bfa35f,
        mid_exit_99803b0791f320ff,
        mid_gc_0fa09c18fee449d5,
        mid_getLogger_ed85d719bd9cdfd2,
        mid_getLogger_0f3c4ab133101be6,
        mid_getProperties_a9424c0c15e6d54c,
        mid_getProperty_92807efd57acb082,
        mid_getProperty_d3f6016a3bf93dcd,
        mid_getSecurityManager_b09eb4e415badf01,
        mid_getenv_6f5a75ccd8c04465,
        mid_getenv_92807efd57acb082,
        mid_identityHashCode_90eb61a0d5cc5e34,
        mid_lineSeparator_11b109bd155ca898,
        mid_load_d0bc48d5b00dc40c,
        mid_loadLibrary_d0bc48d5b00dc40c,
        mid_mapLibraryName_92807efd57acb082,
        mid_nanoTime_492808a339bfa35f,
        mid_runFinalization_0fa09c18fee449d5,
        mid_setErr_d7059445128d3e18,
        mid_setIn_42871fcf824ad25f,
        mid_setOut_d7059445128d3e18,
        mid_setProperties_aaefff1d1d34ac3c,
        mid_setProperty_d3f6016a3bf93dcd,
        mid_setSecurityManager_dd0d69542528ce7e,
        max_mid
      };

      static ::java::lang::Class *class$;
      static jmethodID *mids$;
      static bool live$;
      static jclass initializeClass(bool);

      explicit System(jobject obj) : ::java::lang::Object(obj) {
        if (obj != NULL && mids$ == NULL)
          env->getClass(initializeClass);
      }
      System(const System& obj) : ::java::lang::Object(obj) {}

      static ::java::io::PrintStream *err;
      static ::java::io::InputStream *in;
      static ::java::io::PrintStream *out;

      static void arraycopy(const ::java::lang::Object &, jint, const ::java::lang::Object &, jint, jint);
      static ::java::lang::String clearProperty(const ::java::lang::String &);
      static ::java::io::Console console();
      static jlong currentTimeMillis();
      static void exit(jint);
      static void gc();
      static ::java::lang::System$Logger getLogger(const ::java::lang::String &);
      static ::java::lang::System$Logger getLogger(const ::java::lang::String &, const ::java::util::ResourceBundle &);
      static ::java::util::Properties getProperties();
      static ::java::lang::String getProperty(const ::java::lang::String &);
      static ::java::lang::String getProperty(const ::java::lang::String &, const ::java::lang::String &);
      static ::java::lang::SecurityManager getSecurityManager();
      static ::java::util::Map getenv();
      static ::java::lang::String getenv(const ::java::lang::String &);
      static jint identityHashCode(const ::java::lang::Object &);
      static ::java::lang::String lineSeparator();
      static void load(const ::java::lang::String &);
      static void loadLibrary(const ::java::lang::String &);
      static ::java::lang::String mapLibraryName(const ::java::lang::String &);
      static jlong nanoTime();
      static void runFinalization();
      static void setErr(const ::java::io::PrintStream &);
      static void setIn(const ::java::io::InputStream &);
      static void setOut(const ::java::io::PrintStream &);
      static void setProperties(const ::java::util::Properties &);
      static ::java::lang::String setProperty(const ::java::lang::String &, const ::java::lang::String &);
      static void setSecurityManager(const ::java::lang::SecurityManager &);
    };
  }
}

#include <Python.h>

namespace java {
  namespace lang {
    extern PyType_Def PY_TYPE_DEF(System);
    extern PyTypeObject *PY_TYPE(System);

    class t_System {
    public:
      PyObject_HEAD
      System object;
      static PyObject *wrap_Object(const System&);
      static PyObject *wrap_jobject(const jobject&);
      static void install(PyObject *module);
      static void initialize(PyObject *module);
    };
  }
}

#endif
