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
        class EventDetector;
        class NegateDetector;
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
            mid_andCombine_b15d84f0a93d6582,
            mid_andCombine_3ba49cb77100f442,
            mid_g_432f3d328c15ec82,
            mid_getDetectors_2afa36052df4765d,
            mid_init_826b4eda94da4e78,
            mid_notCombine_c3d38f1c3023fb5c,
            mid_orCombine_b15d84f0a93d6582,
            mid_orCombine_3ba49cb77100f442,
            mid_create_6836ef893f7e495f,
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
