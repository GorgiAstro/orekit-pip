#ifndef org_orekit_models_PythonAtmosphericRefractionModel_H
#define org_orekit_models_PythonAtmosphericRefractionModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace models {
      class AtmosphericRefractionModel;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Throwable;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {

      class PythonAtmosphericRefractionModel : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getRefraction_bf28ed64d6e8576b,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
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
