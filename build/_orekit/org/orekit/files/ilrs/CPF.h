#ifndef org_orekit_files_ilrs_CPF_H
#define org_orekit_files_ilrs_CPF_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class EphemerisFile;
      }
      namespace ilrs {
        class CPF$CPFEphemeris;
        class CPFHeader;
        class CPF$CPFCoordinate;
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
            mid_init$_ff7cb6c242604316,
            mid_addSatelliteCoordinate_9278ccfd1e581241,
            mid_addSatelliteCoordinates_d6d7b1002c69c04a,
            mid_addSatelliteVelocityToCPFCoordinate_58dd0b995bc90543,
            mid_getComments_d751c1a57012b438,
            mid_getHeader_93ed38ea49f194fa,
            mid_getSatellites_dbcb8bbac6b35e0d,
            mid_getTimeScale_5e2cac12ab8da943,
            mid_setFilter_b30f5228e357f0be,
            mid_setInterpolationSample_8fd427ab23829bf5,
            mid_setMu_1ad26e8c8c0cd65b,
            mid_setTimeScale_7cb2659f4799e4d2,
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
