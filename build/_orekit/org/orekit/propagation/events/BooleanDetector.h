#ifndef org_orekit_propagation_events_BooleanDetector_H
#define org_orekit_propagation_events_BooleanDetector_H

#include "org/orekit/propagation/events/AbstractDetector.h"

namespace java {
  namespace util {
    class List;
    class Collection;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        class NegateDetector;
        class EventDetector;
        class BooleanDetector;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
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
            mid_andCombine_8625f04dc0369264,
            mid_andCombine_b628a3dc9e91fa01,
            mid_g_a17ea857ce74d258,
            mid_getDetectors_e62d3bb06d56d7e3,
            mid_init_2d7f9a496c7e9781,
            mid_notCombine_0119b0d604ebe1fb,
            mid_orCombine_8625f04dc0369264,
            mid_orCombine_b628a3dc9e91fa01,
            mid_create_9018219b512ae905,
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
