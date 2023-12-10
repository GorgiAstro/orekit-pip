#ifndef org_orekit_models_AtmosphericRefractionModel_H
#define org_orekit_models_AtmosphericRefractionModel_H

#include "java/io/Serializable.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace models {

      class AtmosphericRefractionModel : public ::java::io::Serializable {
       public:
        enum {
          mid_getRefraction_dcbc7ce2902fa136,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AtmosphericRefractionModel(jobject obj) : ::java::io::Serializable(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AtmosphericRefractionModel(const AtmosphericRefractionModel& obj) : ::java::io::Serializable(obj) {}

        jdouble getRefraction(jdouble) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace models {
      extern PyType_Def PY_TYPE_DEF(AtmosphericRefractionModel);
      extern PyTypeObject *PY_TYPE(AtmosphericRefractionModel);

      class t_AtmosphericRefractionModel {
      public:
        PyObject_HEAD
        AtmosphericRefractionModel object;
        static PyObject *wrap_Object(const AtmosphericRefractionModel&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
