#ifndef java_lang_System_H
#define java_lang_System_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class ResourceBundle;
    class Properties;
  }
  namespace io {
    class Console;
    class InputStream;
    class PrintStream;
  }
  namespace lang {
    class System$Logger;
    class SecurityManager;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace java {
  namespace lang {

    class System : public ::java::lang::Object {
     public:
      enum {
        mid_arraycopy_9e5f031fb258de0f,
        mid_clearProperty_43625fc1c3d86afe,
        mid_console_50ef7c5b776e8124,
        mid_currentTimeMillis_a27fc9afd27e559d,
        mid_exit_0a2a1ac2721c0336,
        mid_gc_7ae3461a92a43152,
        mid_getLogger_53a85389a162bd1d,
        mid_getLogger_bd29d71e74afa8fc,
        mid_getProperties_8fcd7e17991e6b9d,
        mid_getProperty_43625fc1c3d86afe,
        mid_getProperty_01d87ea922ecee51,
        mid_getSecurityManager_5389a11f25f9457f,
        mid_getenv_d6753b7055940a54,
        mid_getenv_43625fc1c3d86afe,
        mid_identityHashCode_ac8c1b6f384391ef,
        mid_lineSeparator_0090f7797e403f43,
        mid_load_e939c6558ae8d313,
        mid_loadLibrary_e939c6558ae8d313,
        mid_mapLibraryName_43625fc1c3d86afe,
        mid_nanoTime_a27fc9afd27e559d,
        mid_runFinalization_7ae3461a92a43152,
        mid_setErr_97a189d81f6ca857,
        mid_setIn_a51aa99816400fdd,
        mid_setOut_97a189d81f6ca857,
        mid_setProperties_a950b5896038ed38,
        mid_setProperty_01d87ea922ecee51,
        mid_setSecurityManager_1760ec543b03c2bb,
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
