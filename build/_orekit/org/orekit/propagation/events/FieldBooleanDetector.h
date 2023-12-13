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
        class FieldBooleanDetector;
        class FieldEventDetector;
        class FieldNegateDetector;
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
            mid_andCombine_0c2e20f777766260,
            mid_andCombine_40521d61e5807c2b,
            mid_g_2203631097e94c79,
            mid_getDetectors_e62d3bb06d56d7e3,
            mid_init_96d019f392abf918,
            mid_notCombine_36655fb9b3e59c37,
            mid_orCombine_0c2e20f777766260,
            mid_orCombine_40521d61e5807c2b,
            mid_create_f909254591779991,
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
