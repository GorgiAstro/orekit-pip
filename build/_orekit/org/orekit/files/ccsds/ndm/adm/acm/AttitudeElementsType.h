#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeElementsType_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeElementsType_H

#include "java/lang/Enum.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
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
  namespace orekit {
    namespace utils {
      namespace units {
        class Unit;
      }
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudeElementsType;
            }
          }
        }
      }
    }
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

              class AttitudeElementsType : public ::java::lang::Enum {
               public:
                enum {
                  mid_getUnits_d751c1a57012b438,
                  mid_toRotation_8062044b68407315,
                  mid_toString_d2c8eb4129821f0e,
                  mid_valueOf_edd7011eeed97934,
                  mid_values_250af0238b41c79c,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeElementsType(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeElementsType(const AttitudeElementsType& obj) : ::java::lang::Enum(obj) {}

                static AttitudeElementsType *DCM;
                static AttitudeElementsType *EULER_ANGLES;
                static AttitudeElementsType *QUATERNION;

                ::java::util::List getUnits() const;
                ::org::hipparchus::geometry::euclidean::threed::Rotation toRotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder &, const JArray< jdouble > &) const;
                ::java::lang::String toString() const;
                static AttitudeElementsType valueOf(const ::java::lang::String &);
                static JArray< AttitudeElementsType > values();
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
              extern PyType_Def PY_TYPE_DEF(AttitudeElementsType);
              extern PyTypeObject *PY_TYPE(AttitudeElementsType);

              class t_AttitudeElementsType {
              public:
                PyObject_HEAD
                AttitudeElementsType object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AttitudeElementsType *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AttitudeElementsType&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AttitudeElementsType&, PyTypeObject *);
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
