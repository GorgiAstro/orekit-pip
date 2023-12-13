#ifndef org_orekit_files_ilrs_CPF_H
#define org_orekit_files_ilrs_CPF_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CPFHeader;
        class CPF$CPFCoordinate;
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
            mid_init$_a1fa5dae97ea5ed2,
            mid_addSatelliteCoordinate_2dc5dc28da034a2b,
            mid_addSatelliteCoordinates_9c78226ca1e428f3,
            mid_addSatelliteVelocityToCPFCoordinate_d89905a56d6347be,
            mid_getComments_e62d3bb06d56d7e3,
            mid_getHeader_2eab44e7dfda30f7,
            mid_getSatellites_810bed48fafb0b9a,
            mid_getTimeScale_34d3bda0a8989e3e,
            mid_setFilter_6ac810da33942183,
            mid_setInterpolationSample_44ed599e93e8a30c,
            mid_setMu_8ba9fe7a847cecad,
            mid_setTimeScale_cae5d0c3721eff67,
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
