#ifndef org_orekit_files_sp3_SP3Ephemeris_H
#define org_orekit_files_sp3_SP3Ephemeris_H

#include "java/lang/Object.h"

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
    namespace files {
      namespace sp3 {
        class SP3Coordinate;
        class SP3Segment;
      }
      namespace general {
        class EphemerisFile$SatelliteEphemeris;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class CartesianDerivativesFilter;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        class SP3Ephemeris : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e9c7e5d02848b09d,
            mid_addCoordinate_cc9684087c360e7f,
            mid_getAvailableDerivatives_63bfdcc4b7a0536c,
            mid_getFrame_2c51111cc6894ba1,
            mid_getId_1c1fa1e935d6cdcf,
            mid_getInterpolationSamples_55546ef6a647f39b,
            mid_getMu_b74f83833fdad017,
            mid_getSegments_e62d3bb06d56d7e3,
            mid_getStart_c325492395d89b24,
            mid_getStop_c325492395d89b24,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SP3Ephemeris(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SP3Ephemeris(const SP3Ephemeris& obj) : ::java::lang::Object(obj) {}

          SP3Ephemeris(const ::java::lang::String &, jdouble, const ::org::orekit::frames::Frame &, jint, const ::org::orekit::utils::CartesianDerivativesFilter &);

          void addCoordinate(const ::org::orekit::files::sp3::SP3Coordinate &, jdouble) const;
          ::org::orekit::utils::CartesianDerivativesFilter getAvailableDerivatives() const;
          ::org::orekit::frames::Frame getFrame() const;
          ::java::lang::String getId() const;
          jint getInterpolationSamples() const;
          jdouble getMu() const;
          ::java::util::List getSegments() const;
          ::org::orekit::time::AbsoluteDate getStart() const;
          ::org::orekit::time::AbsoluteDate getStop() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        extern PyType_Def PY_TYPE_DEF(SP3Ephemeris);
        extern PyTypeObject *PY_TYPE(SP3Ephemeris);

        class t_SP3Ephemeris {
        public:
          PyObject_HEAD
          SP3Ephemeris object;
          static PyObject *wrap_Object(const SP3Ephemeris&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
