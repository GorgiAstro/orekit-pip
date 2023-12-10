#ifndef org_orekit_frames_Frames_H
#define org_orekit_frames_Frames_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class Supplier;
    }
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class EOPHistory;
      class FactoryManagedFrame;
      class Frame;
      class ITRFVersion;
      class Frames;
      class VersionedITRF;
      class Predefined;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class TimeScales;
      class UT1Scale;
    }
    namespace bodies {
      class CelestialBodies;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class Frames : public ::java::lang::Object {
       public:
        enum {
          mid_buildUncachedITRF_f52b182126778ef0,
          mid_getCIRF_0567c110431f823b,
          mid_getEME2000_5337b4e40b3fd7b7,
          mid_getEOPHistory_f7b9f8d7c24d861d,
          mid_getEcliptic_18c303577f427d2c,
          mid_getFrame_a045cc44324e9b37,
          mid_getGCRF_b86f9f61d97a7244,
          mid_getGTOD_af0cfaf732e2f76f,
          mid_getGTOD_0567c110431f823b,
          mid_getICRF_b86f9f61d97a7244,
          mid_getITRF_0567c110431f823b,
          mid_getITRF_ebe8ec05e13e16d0,
          mid_getITRFEquinox_0567c110431f823b,
          mid_getMOD_ab9f051c99cfdab5,
          mid_getMOD_af0cfaf732e2f76f,
          mid_getPZ9011_0567c110431f823b,
          mid_getTEME_5337b4e40b3fd7b7,
          mid_getTIRF_ab9f051c99cfdab5,
          mid_getTIRF_0567c110431f823b,
          mid_getTOD_af0cfaf732e2f76f,
          mid_getTOD_0567c110431f823b,
          mid_getVeis1950_5337b4e40b3fd7b7,
          mid_of_204da4b92db127d6,
          mid_of_a585aed55484f0ef,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Frames(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Frames(const Frames& obj) : ::java::lang::Object(obj) {}

        ::org::orekit::frames::Frame buildUncachedITRF(const ::org::orekit::time::UT1Scale &) const;
        ::org::orekit::frames::FactoryManagedFrame getCIRF(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getEME2000() const;
        ::org::orekit::frames::EOPHistory getEOPHistory(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::Frame getEcliptic(const ::org::orekit::utils::IERSConventions &) const;
        ::org::orekit::frames::Frame getFrame(const ::org::orekit::frames::Predefined &) const;
        ::org::orekit::frames::Frame getGCRF() const;
        ::org::orekit::frames::FactoryManagedFrame getGTOD(jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getGTOD(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::Frame getICRF() const;
        ::org::orekit::frames::FactoryManagedFrame getITRF(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::VersionedITRF getITRF(const ::org::orekit::frames::ITRFVersion &, const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getITRFEquinox(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getMOD(const ::org::orekit::utils::IERSConventions &) const;
        ::org::orekit::frames::FactoryManagedFrame getMOD(jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getPZ9011(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getTEME() const;
        ::org::orekit::frames::FactoryManagedFrame getTIRF(const ::org::orekit::utils::IERSConventions &) const;
        ::org::orekit::frames::FactoryManagedFrame getTIRF(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getTOD(jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getTOD(const ::org::orekit::utils::IERSConventions &, jboolean) const;
        ::org::orekit::frames::FactoryManagedFrame getVeis1950() const;
        static Frames of(const ::org::orekit::time::TimeScales &, const ::java::util::function::Supplier &);
        static Frames of(const ::org::orekit::time::TimeScales &, const ::org::orekit::bodies::CelestialBodies &);
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(Frames);
      extern PyTypeObject *PY_TYPE(Frames);

      class t_Frames {
      public:
        PyObject_HEAD
        Frames object;
        static PyObject *wrap_Object(const Frames&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
