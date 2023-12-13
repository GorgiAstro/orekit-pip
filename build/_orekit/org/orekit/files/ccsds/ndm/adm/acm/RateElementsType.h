#ifndef org_orekit_files_ccsds_ndm_adm_acm_RateElementsType_H
#define org_orekit_files_ccsds_ndm_adm_acm_RateElementsType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class RateElementsType;
            }
          }
        }
      }
    }
    namespace utils {
      namespace units {
        class Unit;
      }
      class TimeStampedAngularCoordinates;
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
          class Rotation;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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
            namespace acm {

              class RateElementsType : public ::java::lang::Enum {
               public:
                enum {
                  mid_getUnits_e62d3bb06d56d7e3,
                  mid_toAngular_6080aff118729611,
                  mid_toString_1c1fa1e935d6cdcf,
                  mid_valueOf_4c716be1c91b249f,
                  mid_values_cee5530ce2a7cda5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit RateElementsType(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                RateElementsType(const RateElementsType& obj) : ::java::lang::Enum(obj) {}

                static RateElementsType *ANGVEL;
                static RateElementsType *EULER_RATE;
                static RateElementsType *GYRO_BIAS;
                static RateElementsType *NONE;
                static RateElementsType *Q_DOT;

                ::java::util::List getUnits() const;
                ::org::orekit::utils::TimeStampedAngularCoordinates toAngular(const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &, const ::org::hipparchus::geometry::euclidean::threed::Rotation &, jint, const JArray< jdouble > &) const;
                ::java::lang::String toString() const;
                static RateElementsType valueOf(const ::java::lang::String &);
                static JArray< RateElementsType > values();
              };
            }
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
            namespace acm {
              extern PyType_Def PY_TYPE_DEF(RateElementsType);
              extern PyTypeObject *PY_TYPE(RateElementsType);

              class t_RateElementsType {
              public:
                PyObject_HEAD
                RateElementsType object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_RateElementsType *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const RateElementsType&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const RateElementsType&, PyTypeObject *);
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
}

#endif
