#ifndef org_orekit_files_ilrs_CPF_H
#define org_orekit_files_ilrs_CPF_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CPF$CPFCoordinate;
        class CPFHeader;
        class CPF$CPFEphemeris;
      }
      namespace general {
        class EphemerisFile;
      }
    }
    namespace utils {
      class CartesianDerivativesFilter;
    }
    namespace time {
      class TimeScale;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
    class Map;
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
      namespace ilrs {

        class CPF : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0640e6acf969ed28,
            mid_addSatelliteCoordinate_a156272b8409e571,
            mid_addSatelliteCoordinates_013b264b441f07a2,
            mid_addSatelliteVelocityToCPFCoordinate_e74a95e87acc49f8,
            mid_getComments_0d9551367f7ecdef,
            mid_getHeader_c18325609dc27f44,
            mid_getSatellites_1e62c2f73fbdd1c4,
            mid_getTimeScale_527ee9dde1a96470,
            mid_setFilter_fd4d3944a3fb1083,
            mid_setInterpolationSample_a3da1a935cb37f7b,
            mid_setMu_10f281d777284cea,
            mid_setTimeScale_3e3301925c0131d4,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CPF(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CPF(const CPF& obj) : ::java::lang::Object(obj) {}

          static ::java::lang::String *DEFAULT_ID;

          CPF();

          void addSatelliteCoordinate(const ::java::lang::String &, const ::org::orekit::files::ilrs::CPF$CPFCoordinate &) const;
          void addSatelliteCoordinates(const ::java::lang::String &, const ::java::util::List &) const;
          void addSatelliteVelocityToCPFCoordinate(const ::java::lang::String &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
          ::java::util::List getComments() const;
          ::org::orekit::files::ilrs::CPFHeader getHeader() const;
          ::java::util::Map getSatellites() const;
          ::org::orekit::time::TimeScale getTimeScale() const;
          void setFilter(const ::org::orekit::utils::CartesianDerivativesFilter &) const;
          void setInterpolationSample(jint) const;
          void setMu(jdouble) const;
          void setTimeScale(const ::org::orekit::time::TimeScale &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        extern PyType_Def PY_TYPE_DEF(CPF);
        extern PyTypeObject *PY_TYPE(CPF);

        class t_CPF {
        public:
          PyObject_HEAD
          CPF object;
          static PyObject *wrap_Object(const CPF&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
