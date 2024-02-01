#ifndef org_orekit_propagation_events_FieldEventEnablingPredicateFilter_H
#define org_orekit_propagation_events_FieldEventEnablingPredicateFilter_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class FieldEnablingPredicate;
      }
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
            mid_init$_b1d11f9c2ad251c4,
            mid_g_ac6fccc69d1b2d9e,
            mid_getDetector_3146cd1129cf853c,
            mid_init_357211ab77703f3f,
            mid_create_b8a21e6c1bd745e4,
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
