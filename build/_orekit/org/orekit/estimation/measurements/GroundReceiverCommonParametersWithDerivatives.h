#ifndef org_orekit_estimation_measurements_GroundReceiverCommonParametersWithDerivatives_H
#define org_orekit_estimation_measurements_GroundReceiverCommonParametersWithDerivatives_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Integer;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class FieldTransform;
    }
    namespace utils {
      class TimeStampedFieldPVCoordinates;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class GroundReceiverCommonParametersWithDerivatives : public ::java::lang::Object {
         public:
          enum {
            mid_init$_91ed10f57cb0bfb7,
            mid_getIndices_dbcb8bbac6b35e0d,
            mid_getOffsetToInertialDownlink_c58e1d0e1f3afd7d,
            mid_getState_8fbfa58855031235,
            mid_getStationDownlink_be698fa91827b9b2,
            mid_getTauD_9d89382e9667f8f2,
            mid_getTransitPV_be698fa91827b9b2,
            mid_getTransitState_8fbfa58855031235,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit GroundReceiverCommonParametersWithDerivatives(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          GroundReceiverCommonParametersWithDerivatives(const GroundReceiverCommonParametersWithDerivatives& obj) : ::java::lang::Object(obj) {}

          GroundReceiverCommonParametersWithDerivatives(const ::org::orekit::propagation::SpacecraftState &, const ::java::util::Map &, const ::org::orekit::frames::FieldTransform &, const ::org::orekit::utils::TimeStampedFieldPVCoordinates &, const ::org::hipparchus::analysis::differentiation::Gradient &, const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::utils::TimeStampedFieldPVCoordinates &);

          ::java::util::Map getIndices() const;
          ::org::orekit::frames::FieldTransform getOffsetToInertialDownlink() const;
          ::org::orekit::propagation::SpacecraftState getState() const;
          ::org::orekit::utils::TimeStampedFieldPVCoordinates getStationDownlink() const;
          ::org::hipparchus::analysis::differentiation::Gradient getTauD() const;
          ::org::orekit::utils::TimeStampedFieldPVCoordinates getTransitPV() const;
          ::org::orekit::propagation::SpacecraftState getTransitState() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        extern PyType_Def PY_TYPE_DEF(GroundReceiverCommonParametersWithDerivatives);
        extern PyTypeObject *PY_TYPE(GroundReceiverCommonParametersWithDerivatives);

        class t_GroundReceiverCommonParametersWithDerivatives {
        public:
          PyObject_HEAD
          GroundReceiverCommonParametersWithDerivatives object;
          static PyObject *wrap_Object(const GroundReceiverCommonParametersWithDerivatives&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
