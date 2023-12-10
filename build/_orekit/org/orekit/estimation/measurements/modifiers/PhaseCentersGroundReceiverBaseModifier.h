#ifndef org_orekit_estimation_measurements_modifiers_PhaseCentersGroundReceiverBaseModifier_H
#define org_orekit_estimation_measurements_modifiers_PhaseCentersGroundReceiverBaseModifier_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        class EstimatedMeasurementBase;
      }
    }
    namespace gnss {
      namespace antenna {
        class FrequencyPattern;
      }
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          class PhaseCentersGroundReceiverBaseModifier : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a2ed374ecf8bf34a,
              mid_oneWayDistanceModification_b358632edcce3ae8,
              mid_twoWayDistanceModification_b358632edcce3ae8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PhaseCentersGroundReceiverBaseModifier(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PhaseCentersGroundReceiverBaseModifier(const PhaseCentersGroundReceiverBaseModifier& obj) : ::java::lang::Object(obj) {}

            PhaseCentersGroundReceiverBaseModifier(const ::org::orekit::gnss::antenna::FrequencyPattern &, const ::org::orekit::gnss::antenna::FrequencyPattern &);

            jdouble oneWayDistanceModification(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase &) const;
            jdouble twoWayDistanceModification(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          extern PyType_Def PY_TYPE_DEF(PhaseCentersGroundReceiverBaseModifier);
          extern PyTypeObject *PY_TYPE(PhaseCentersGroundReceiverBaseModifier);

          class t_PhaseCentersGroundReceiverBaseModifier {
          public:
            PyObject_HEAD
            PhaseCentersGroundReceiverBaseModifier object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PhaseCentersGroundReceiverBaseModifier *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PhaseCentersGroundReceiverBaseModifier&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PhaseCentersGroundReceiverBaseModifier&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
