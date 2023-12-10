#ifndef org_orekit_propagation_events_VisibilityTrigger_H
#define org_orekit_propagation_events_VisibilityTrigger_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class VisibilityTrigger;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class VisibilityTrigger : public ::java::lang::Enum {
         public:
          enum {
            mid_radiusCorrection_dcbc7ce2902fa136,
            mid_valueOf_ccdfdce1748a95c1,
            mid_values_7f89ad02cde9ebee,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit VisibilityTrigger(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          VisibilityTrigger(const VisibilityTrigger& obj) : ::java::lang::Enum(obj) {}

          static VisibilityTrigger *VISIBLE_AS_SOON_AS_PARTIALLY_IN_FOV;
          static VisibilityTrigger *VISIBLE_ONLY_WHEN_FULLY_IN_FOV;

          jdouble radiusCorrection(jdouble) const;
          static VisibilityTrigger valueOf(const ::java::lang::String &);
          static JArray< VisibilityTrigger > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        extern PyType_Def PY_TYPE_DEF(VisibilityTrigger);
        extern PyTypeObject *PY_TYPE(VisibilityTrigger);

        class t_VisibilityTrigger {
        public:
          PyObject_HEAD
          VisibilityTrigger object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_VisibilityTrigger *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const VisibilityTrigger&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const VisibilityTrigger&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
