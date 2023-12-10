#ifndef org_orekit_propagation_events_FieldEventSlopeFilter_H
#define org_orekit_propagation_events_FieldEventSlopeFilter_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      namespace events {
        class FilterType;
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

        class FieldEventSlopeFilter : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_init$_47727962149965b7,
            mid_g_41a008afe53da855,
            mid_getDetector_4fe06ecc019ea51d,
            mid_init_8e8de2be1664674a,
            mid_create_442fd2ba5cb06b9d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldEventSlopeFilter(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldEventSlopeFilter(const FieldEventSlopeFilter& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          FieldEventSlopeFilter(const ::org::orekit::propagation::events::FieldEventDetector &, const ::org::orekit::propagation::events::FilterType &);

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
        extern PyType_Def PY_TYPE_DEF(FieldEventSlopeFilter);
        extern PyTypeObject *PY_TYPE(FieldEventSlopeFilter);

        class t_FieldEventSlopeFilter {
        public:
          PyObject_HEAD
          FieldEventSlopeFilter object;
          PyTypeObject *parameters[2];
          static PyTypeObject **parameters_(t_FieldEventSlopeFilter *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldEventSlopeFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldEventSlopeFilter&, PyTypeObject *, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
