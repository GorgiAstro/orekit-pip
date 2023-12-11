#ifndef org_orekit_models_PythonAtmosphericRefractionModel_H
#define org_orekit_models_PythonAtmosphericRefractionModel_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
namespace org {
  namespace orekit {
    namespace models {
      class AtmosphericRefractionModel;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {

      class PythonAtmosphericRefractionModel : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getRefraction_7e960cd6eee376d8,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonAtmosphericRefractionModel(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonAtmosphericRefractionModel(const PythonAtmosphericRefractionModel& obj) : ::java::lang::Object(obj) {}

        PythonAtmosphericRefractionModel();

        void finalize() const;
        jdouble getRefraction(jdouble) const;
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
    namespace models {
      extern PyType_Def PY_TYPE_DEF(PythonAtmosphericRefractionModel);
      extern PyTypeObject *PY_TYPE(PythonAtmosphericRefractionModel);

      class t_PythonAtmosphericRefractionModel {
      public:
        PyObject_HEAD
        PythonAtmosphericRefractionModel object;
        static PyObject *wrap_Object(const PythonAtmosphericRefractionModel&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
