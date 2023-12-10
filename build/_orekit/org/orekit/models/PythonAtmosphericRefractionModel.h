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
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_getRefraction_dcbc7ce2902fa136,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
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
