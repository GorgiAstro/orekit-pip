#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitElementsType_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitElementsType_H

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
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      namespace units {
        class Unit;
      }
      class TimeStampedPVCoordinates;
    }
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
    namespace time {
      class AbsoluteDate;
    }
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
                  mid_getUnits_a6156df500549a58,
                  mid_toCartesian_781fc76aa33e540d,
                  mid_toRawElements_e9dc92a44502f1bd,
                  mid_toString_0090f7797e403f43,
                  mid_valueOf_b3f28ee9a0b59461,
                  mid_values_de46ed1799e12590,
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
