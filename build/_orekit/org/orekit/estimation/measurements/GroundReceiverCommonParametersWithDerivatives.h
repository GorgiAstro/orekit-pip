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
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        class Gradient;
      }
    }
  }
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
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        class GroundReceiverCommonParametersWithDerivatives : public ::java::lang::Object {
         public:
          enum {
            mid_init$_cb17d21f7c118e74,
            mid_getIndices_6f5a75ccd8c04465,
            mid_getOffsetToInertialDownlink_8c35d0b6fdd377c3,
            mid_getState_c6311115fea01a34,
            mid_getStationDownlink_f89522ff77904397,
            mid_getTauD_cc2f4e0a456f51de,
            mid_getTransitPV_f89522ff77904397,
            mid_getTransitState_c6311115fea01a34,
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
