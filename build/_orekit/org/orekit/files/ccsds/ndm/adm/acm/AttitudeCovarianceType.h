#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovarianceType_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudeCovarianceType_H

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
              class AttitudeCovarianceType;
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

              class AttitudeCovarianceType : public ::java::lang::Enum {
               public:
                enum {
                  mid_getUnits_e62d3bb06d56d7e3,
                  mid_valueOf_ace24d354abfff27,
                  mid_values_cc7e51b05fabaec9,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudeCovarianceType(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudeCovarianceType(const AttitudeCovarianceType& obj) : ::java::lang::Enum(obj) {}

                static AttitudeCovarianceType *ANGLE;
                static AttitudeCovarianceType *ANGLE_ANGVEL;
                static AttitudeCovarianceType *ANGLE_GYROBIAS;
                static AttitudeCovarianceType *QUATERNION;
                static AttitudeCovarianceType *QUATERNION_ANGVEL;
                static AttitudeCovarianceType *QUATERNION_GYROBIAS;

                ::java::util::List getUnits() const;
                static AttitudeCovarianceType valueOf(const ::java::lang::String &);
                static JArray< AttitudeCovarianceType > values();
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
              extern PyType_Def PY_TYPE_DEF(AttitudeCovarianceType);
              extern PyTypeObject *PY_TYPE(AttitudeCovarianceType);

              class t_AttitudeCovarianceType {
              public:
                PyObject_HEAD
                AttitudeCovarianceType object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AttitudeCovarianceType *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AttitudeCovarianceType&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AttitudeCovarianceType&, PyTypeObject *);
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
