#ifndef org_orekit_propagation_events_FieldBooleanDetector_H
#define org_orekit_propagation_events_FieldBooleanDetector_H

#include "org/orekit/propagation/events/FieldAbstractDetector.h"

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
        class FieldNegateDetector;
        class FieldEventDetector;
        class FieldBooleanDetector;
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        class FieldBooleanDetector : public ::org::orekit::propagation::events::FieldAbstractDetector {
         public:
          enum {
            mid_andCombine_0157e0384da63662,
            mid_andCombine_8b9f98582937f428,
            mid_g_cc79c2733879de35,
            mid_getDetectors_a6156df500549a58,
            mid_init_acdd8180a5dc1a8d,
            mid_notCombine_835a5282d28930ad,
            mid_orCombine_0157e0384da63662,
            mid_orCombine_8b9f98582937f428,
            mid_create_9c0b562710a845f3,
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
