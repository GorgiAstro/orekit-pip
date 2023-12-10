#ifndef org_orekit_propagation_events_FieldEventEnablingPredicateFilter_H
#define org_orekit_propagation_events_FieldEventEnablingPredicateFilter_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEnablingPredicate;
        class FieldEventDetector;
      }
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class FieldEventEnablingPredicateFilter : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_3609119c1e3b8098,
            mid_g_41a008afe53da855,
            mid_getDetector_4fe06ecc019ea51d,
            mid_init_8e8de2be1664674a,
            mid_create_239190ad6dae84e4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldEventEnablingPredicateFilter(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldEventEnablingPredicateFilter(const FieldEventEnablingPredicateFilter& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          FieldEventEnablingPredicateFilter(const ::org::orekit::propagation::events::FieldEventDetector &, const ::org::orekit::propagation::events::FieldEnablingPredicate &);

          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::org::orekit::propagation::events::FieldEventDetector getDetector() const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldEventEnablingPredicateFilter);
        extern PyTypeObject *PY_TYPE(FieldEventEnablingPredicateFilter);

        class t_FieldEventEnablingPredicateFilter {
        public:
          PyObject_HEAD
          FieldEventEnablingPredicateFilter object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldEventEnablingPredicateFilter *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldEventEnablingPredicateFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldEventEnablingPredicateFilter&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
