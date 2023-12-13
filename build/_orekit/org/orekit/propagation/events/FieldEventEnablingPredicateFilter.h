#ifndef org_orekit_propagation_events_FieldEventEnablingPredicateFilter_H
#define org_orekit_propagation_events_FieldEventEnablingPredicateFilter_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace propagation {
      namespace events {
        class FieldEventDetector;
        class FieldEnablingPredicate;
      }
      class FieldSpacecraftState;
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
            mid_init$_d4e28ddd38f6c1a8,
            mid_g_2203631097e94c79,
            mid_getDetector_e78af9d734a5fbe1,
            mid_init_96d019f392abf918,
            mid_create_ea597dbd46e47ae8,
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
