#ifndef org_orekit_estimation_measurements_GroundReceiverCommonParametersWithDerivatives_H
#define org_orekit_estimation_measurements_GroundReceiverCommonParametersWithDerivatives_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
  namespace orekit {
    namespace utils {
      class TimeStampedFieldPVCoordinates;
    }
    namespace propagation {
      class SpacecraftState;
    }
    namespace frames {
      class FieldTransform;
    }
  }
}
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class GroundReceiverCommonParametersWithDerivatives : public ::java::lang::Object {
         public:
          enum {
            mid_init$_c9c35894bdb8cda2,
            mid_getIndices_d6753b7055940a54,
            mid_getOffsetToInertialDownlink_b8bdad2f73e0bf7c,
            mid_getState_dd3e4a8d51055f1f,
            mid_getStationDownlink_26447a781aafdb9e,
            mid_getTauD_4ed8e234724fadba,
            mid_getTransitPV_26447a781aafdb9e,
            mid_getTransitState_dd3e4a8d51055f1f,
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
