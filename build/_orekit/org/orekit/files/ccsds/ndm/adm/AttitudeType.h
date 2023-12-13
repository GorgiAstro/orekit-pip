#ifndef org_orekit_files_ccsds_ndm_adm_AttitudeType_H
#define org_orekit_files_ccsds_ndm_adm_AttitudeType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            class AttitudeType;
          }
        }
        namespace utils {
          class ContextBinding;
        }
      }
    }
    namespace utils {
      class TimeStampedAngularCoordinates;
      class AngularDerivativesFilter;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class RotationOrder;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            class AttitudeType : public ::java::lang::Enum {
             public:
              enum {
                mid_build_7b3d6c8ed92f41f2,
                mid_createDataFields_6e76615305e1bf27,
                mid_generateData_e56ec5c65fa92cc2,
                mid_getAngularDerivativesFilter_33d67d456ec94a0c,
                mid_getName_11ae2994efd15504,
                mid_parse_b6ef4ae5dfdd231d,
                mid_parseType_3abfc2fb05e5fcd5,
                mid_toString_1c1fa1e935d6cdcf,
                mid_valueOf_3abfc2fb05e5fcd5,
                mid_values_57a71570a155d664,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AttitudeType(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AttitudeType(const AttitudeType& obj) : ::java::lang::Enum(obj) {}

              static AttitudeType *EULER_ANGLE;
              static AttitudeType *EULER_ANGLE_ANGVEL;
              static AttitudeType *EULER_ANGLE_DERIVATIVE;
              static AttitudeType *QUATERNION;
              static AttitudeType *QUATERNION_ANGVEL;
              static AttitudeType *QUATERNION_DERIVATIVE;
              static AttitudeType *QUATERNION_EULER_RATES;
              static AttitudeType *SPIN;
              static AttitudeType *SPIN_NUTATION;
              static AttitudeType *SPIN_NUTATION_MOMENTUM;

              ::org::orekit::utils::TimeStampedAngularCoordinates build(jboolean, jboolean, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &, jboolean, const ::org::orekit::time::AbsoluteDate &, const JArray< jdouble > &) const;
              JArray< ::java::lang::String > createDataFields(jboolean, jboolean, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &, jboolean, const ::org::orekit::utils::TimeStampedAngularCoordinates &) const;
              JArray< jdouble > generateData(jboolean, jboolean, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &, jboolean, const ::org::orekit::utils::TimeStampedAngularCoordinates &) const;
              ::org::orekit::utils::AngularDerivativesFilter getAngularDerivativesFilter() const;
              ::java::lang::String getName(jdouble) const;
              ::org::orekit::utils::TimeStampedAngularCoordinates parse(jboolean, jboolean, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &, jboolean, const ::org::orekit::files::ccsds::utils::ContextBinding &, const JArray< ::java::lang::String > &) const;
              static AttitudeType parseType(const ::java::lang::String &);
              ::java::lang::String toString() const;
              static AttitudeType valueOf(const ::java::lang::String &);
              static JArray< AttitudeType > values();
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            extern PyType_Def PY_TYPE_DEF(AttitudeType);
            extern PyTypeObject *PY_TYPE(AttitudeType);

            class t_AttitudeType {
            public:
              PyObject_HEAD
              AttitudeType object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_AttitudeType *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const AttitudeType&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const AttitudeType&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
