#ifndef org_orekit_propagation_events_BooleanDetector_H
#define org_orekit_propagation_events_BooleanDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class NegateDetector;
        class BooleanDetector;
        class EventDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class BooleanDetector : public ::org::orekit::propagation::events::AbstractDetector {
         public:
          enum {
            mid_andCombine_39beb87557d816ae,
            mid_andCombine_31d87b9a37beb770,
            mid_g_1bbf81d80c47ecdd,
            mid_getDetectors_0d9551367f7ecdef,
            mid_init_0472264ad6f40bc2,
            mid_notCombine_b68ec1f6b42d104e,
            mid_orCombine_39beb87557d816ae,
            mid_orCombine_31d87b9a37beb770,
            mid_create_48212894f8dc62b9,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit BooleanDetector(jobject obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          BooleanDetector(const BooleanDetector& obj) : ::org::orekit::propagation::events::AbstractDetector(obj) {}

          static BooleanDetector andCombine(const JArray< ::org::orekit::propagation::events::EventDetector > &);
          static BooleanDetector andCombine(const ::java::util::Collection &);
          jdouble g(const ::org::orekit::propagation::SpacecraftState &) const;
          ::java::util::List getDetectors() const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
          static ::org::orekit::propagation::events::NegateDetector notCombine(const ::org::orekit::propagation::events::EventDetector &);
          static BooleanDetector orCombine(const JArray< ::org::orekit::propagation::events::EventDetector > &);
          static BooleanDetector orCombine(const ::java::util::Collection &);
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
        extern PyType_Def PY_TYPE_DEF(BooleanDetector);
        extern PyTypeObject *PY_TYPE(BooleanDetector);

        class t_BooleanDetector {
        public:
          PyObject_HEAD
          BooleanDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_BooleanDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const BooleanDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const BooleanDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
