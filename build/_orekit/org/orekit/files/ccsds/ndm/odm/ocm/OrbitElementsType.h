#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitElementsType_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitElementsType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OrbitElementsType;
            }
          }
        }
      }
    }
    namespace utils {
      namespace units {
        class Unit;
      }
      class TimeStampedPVCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace time {
      class AbsoluteDate;
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
          namespace odm {
            namespace ocm {

              class OrbitElementsType : public ::java::lang::Enum {
               public:
                enum {
                  mid_getUnits_2afa36052df4765d,
                  mid_toCartesian_910cf50ef81151a8,
                  mid_toRawElements_042e474a2c7ec9fd,
                  mid_toString_11b109bd155ca898,
                  mid_valueOf_e9ec553865d4f63b,
                  mid_values_69abff7315b78dd7,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OrbitElementsType(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OrbitElementsType(const OrbitElementsType& obj) : ::java::lang::Enum(obj) {}

                static OrbitElementsType *ADBARV;
                static OrbitElementsType *CARTP;
                static OrbitElementsType *CARTPV;
                static OrbitElementsType *CARTPVA;
                static OrbitElementsType *DELAUNAY;
                static OrbitElementsType *DELAUNAYMOD;
                static OrbitElementsType *EIGVAL3EIGVEC3;
                static OrbitElementsType *EQUINOCTIAL;
                static OrbitElementsType *EQUINOCTIALMOD;
                static OrbitElementsType *GEODETIC;
                static OrbitElementsType *KEPLERIAN;
                static OrbitElementsType *KEPLERIANMEAN;
                static OrbitElementsType *LDBARV;
                static OrbitElementsType *ONSTATION;
                static OrbitElementsType *POINCARE;

                ::java::util::List getUnits() const;
                ::org::orekit::utils::TimeStampedPVCoordinates toCartesian(const ::org::orekit::time::AbsoluteDate &, const JArray< jdouble > &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble) const;
                JArray< jdouble > toRawElements(const ::org::orekit::utils::TimeStampedPVCoordinates &, const ::org::orekit::frames::Frame &, const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble) const;
                ::java::lang::String toString() const;
                static OrbitElementsType valueOf(const ::java::lang::String &);
                static JArray< OrbitElementsType > values();
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
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(OrbitElementsType);
              extern PyTypeObject *PY_TYPE(OrbitElementsType);

              class t_OrbitElementsType {
              public:
                PyObject_HEAD
                OrbitElementsType object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_OrbitElementsType *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OrbitElementsType&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OrbitElementsType&, PyTypeObject *);
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
