#ifndef org_orekit_propagation_events_FieldBooleanDetector_H
#define org_orekit_propagation_events_FieldBooleanDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace events {
        class FieldBooleanDetector;
        class FieldNegateDetector;
        class FieldEventDetector;
      }
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

        class FieldBooleanDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_andCombine_d61c8663f0454d70,
            mid_andCombine_4626eeb861b7efcb,
            mid_g_de1c2d709eb2829c,
            mid_getDetectors_0d9551367f7ecdef,
            mid_init_811e49dad2467b67,
            mid_notCombine_d201107bb76f34db,
            mid_orCombine_d61c8663f0454d70,
            mid_orCombine_4626eeb861b7efcb,
            mid_create_44da38e4a9a9d26d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldBooleanDetector(jobject obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldBooleanDetector(const FieldBooleanDetector& obj) : ::org::orekit::propagation::events::FieldAbstractDetector(obj) {}

          static FieldBooleanDetector andCombine(const JArray< ::org::orekit::propagation::events::FieldEventDetector > &);
          static FieldBooleanDetector andCombine(const ::java::util::Collection &);
          ::org::hipparchus::CalculusFieldElement g(const ::org::orekit::propagation::FieldSpacecraftState &) const;
          ::java::util::List getDetectors() const;
          void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
          static ::org::orekit::propagation::events::FieldNegateDetector notCombine(const ::org::orekit::propagation::events::FieldEventDetector &);
          static FieldBooleanDetector orCombine(const JArray< ::org::orekit::propagation::events::FieldEventDetector > &);
          static FieldBooleanDetector orCombine(const ::java::util::Collection &);
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
        extern PyType_Def PY_TYPE_DEF(FieldBooleanDetector);
        extern PyTypeObject *PY_TYPE(FieldBooleanDetector);

        class t_FieldBooleanDetector {
        public:
          PyObject_HEAD
          FieldBooleanDetector object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_FieldBooleanDetector *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const FieldBooleanDetector&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const FieldBooleanDetector&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
