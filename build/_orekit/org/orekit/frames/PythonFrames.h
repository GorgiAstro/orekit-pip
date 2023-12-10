#ifndef org_orekit_frames_PythonFrames_H
#define org_orekit_frames_PythonFrames_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
      class Frames;
      class FactoryManagedFrame;
      class Predefined;
      class VersionedITRF;
      class ITRFVersion;
      class EOPHistory;
    }
    namespace time {
      class UT1Scale;
    }
    namespace utils {
      class IERSConventions;
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
          mid_init$_7ae3461a92a43152,
          mid_buildUncachedITRF_d03d9d841d2585cb,
          mid_finalize_7ae3461a92a43152,
          mid_getCIRF_7a43fbb334938fb6,
          mid_getEME2000_238e1a1a48ce9b9b,
          mid_getEOPHistory_7544a283da003d74,
          mid_getEcliptic_951ab15b750ec500,
          mid_getFrame_1d8cb946d8760b58,
          mid_getGCRF_c8fe21bcdac65bf6,
          mid_getGTOD_e0bf161d9af50163,
          mid_getGTOD_7a43fbb334938fb6,
          mid_getICRF_c8fe21bcdac65bf6,
          mid_getITRF_7a43fbb334938fb6,
          mid_getITRF_604147dabe0b6681,
          mid_getITRFEquinox_7a43fbb334938fb6,
          mid_getMOD_f41281a5e34c0279,
          mid_getMOD_e0bf161d9af50163,
          mid_getPZ9011_7a43fbb334938fb6,
          mid_getTEME_238e1a1a48ce9b9b,
          mid_getTIRF_f41281a5e34c0279,
          mid_getTIRF_7a43fbb334938fb6,
          mid_getTOD_e0bf161d9af50163,
          mid_getTOD_7a43fbb334938fb6,
          mid_getVeis1950_238e1a1a48ce9b9b,
          mid_pythonDecRef_7ae3461a92a43152,
          mid_pythonExtension_a27fc9afd27e559d,
          mid_pythonExtension_fefb08975c10f0a1,
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
