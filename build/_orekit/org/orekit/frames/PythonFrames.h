#ifndef org_orekit_frames_PythonFrames_H
#define org_orekit_frames_PythonFrames_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frames;
      class VersionedITRF;
      class Predefined;
      class EOPHistory;
      class Frame;
      class FactoryManagedFrame;
      class ITRFVersion;
    }
    namespace utils {
      class IERSConventions;
    }
    namespace time {
      class UT1Scale;
    }
  }
}
namespace java {
  namespace lang {
    class Throwable;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class PythonFrames : public ::java::lang::Object {
       public:
        enum {
          mid_init$_a1fa5dae97ea5ed2,
          mid_buildUncachedITRF_de25c2adba5180fc,
          mid_finalize_a1fa5dae97ea5ed2,
          mid_getCIRF_b8f4087626aff39a,
          mid_getEME2000_38d89ffeb32a6f21,
          mid_getEOPHistory_a77e9d6bc0da2439,
          mid_getEcliptic_15d291dcc172f59b,
          mid_getFrame_acd75386f33c2984,
          mid_getGCRF_2c51111cc6894ba1,
          mid_getGTOD_816956b542562f07,
          mid_getGTOD_b8f4087626aff39a,
          mid_getICRF_2c51111cc6894ba1,
          mid_getITRF_b8f4087626aff39a,
          mid_getITRF_2e00eadcfbf4fef8,
          mid_getITRFEquinox_b8f4087626aff39a,
          mid_getMOD_5e99e4a3c4469bb0,
          mid_getMOD_816956b542562f07,
          mid_getPZ9011_b8f4087626aff39a,
          mid_getTEME_38d89ffeb32a6f21,
          mid_getTIRF_5e99e4a3c4469bb0,
          mid_getTIRF_b8f4087626aff39a,
          mid_getTOD_816956b542562f07,
          mid_getTOD_b8f4087626aff39a,
          mid_getVeis1950_38d89ffeb32a6f21,
          mid_pythonDecRef_a1fa5dae97ea5ed2,
          mid_pythonExtension_6c0ce7e438e5ded4,
          mid_pythonExtension_3d7dd2314a0dd456,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonFrames(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonFrames(const PythonFrames& obj) : ::java::lang::Object(obj) {}

        PythonFrames();

        ::org::orekit::frames::Frame buildUncachedITRF(const ::org::orekit::time::UT1Scale &) const;
        void finalize() const;
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
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(PythonFrames);
      extern PyTypeObject *PY_TYPE(PythonFrames);

      class t_PythonFrames {
      public:
        PyObject_HEAD
        PythonFrames object;
        static PyObject *wrap_Object(const PythonFrames&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
