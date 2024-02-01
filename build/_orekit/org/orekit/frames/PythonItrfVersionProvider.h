#ifndef org_orekit_frames_PythonItrfVersionProvider_H
#define org_orekit_frames_PythonItrfVersionProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class ItrfVersionProvider;
      class ITRFVersionLoader$ITRFVersionConfiguration;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PythonItrfVersionProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getConfiguration_2cd40ae1f6a1f844,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonItrfVersionProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonItrfVersionProvider(const PythonItrfVersionProvider& obj) : ::java::lang::Object(obj) {}

        PythonItrfVersionProvider();

        void finalize() const;
        ::org::orekit::frames::ITRFVersionLoader$ITRFVersionConfiguration getConfiguration(const ::java::lang::String &, jint) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(PythonItrfVersionProvider);
      extern PyTypeObject *PY_TYPE(PythonItrfVersionProvider);

      class t_PythonItrfVersionProvider {
      public:
        PyObject_HEAD
        PythonItrfVersionProvider object;
        static PyObject *wrap_Object(const PythonItrfVersionProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
