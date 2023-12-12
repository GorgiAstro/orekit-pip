#ifndef org_orekit_files_ccsds_ndm_CommonPhysicalProperties_H
#define org_orekit_files_ccsds_ndm_CommonPhysicalProperties_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace hipparchus {
    namespace complex {
      class Quaternion;
    }
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          class CommonPhysicalProperties : public ::org::orekit::files::ccsds::section::CommentsContainer {
           public:
            enum {
              mid_init$_0640e6acf969ed28,
              mid_getMaxRcs_557b8123390d8d0c,
              mid_getMinRcs_557b8123390d8d0c,
              mid_getOebAreaAlongIntermediate_557b8123390d8d0c,
              mid_getOebAreaAlongMax_557b8123390d8d0c,
              mid_getOebAreaAlongMin_557b8123390d8d0c,
              mid_getOebIntermediate_557b8123390d8d0c,
              mid_getOebMax_557b8123390d8d0c,
              mid_getOebMin_557b8123390d8d0c,
              mid_getOebParentFrame_98f5fcaff3e3f9d2,
              mid_getOebParentFrameEpoch_7a97f7e149e79afb,
              mid_getOebQ_ed563d4dda2b9f62,
              mid_getRcs_557b8123390d8d0c,
              mid_getReflectance_557b8123390d8d0c,
              mid_getVmAbsolute_557b8123390d8d0c,
              mid_getVmApparent_557b8123390d8d0c,
              mid_getVmApparentMax_557b8123390d8d0c,
              mid_getVmApparentMin_557b8123390d8d0c,
              mid_setMaxRcs_10f281d777284cea,
              mid_setMinRcs_10f281d777284cea,
              mid_setOebAreaAlongIntermediate_10f281d777284cea,
              mid_setOebAreaAlongMax_10f281d777284cea,
              mid_setOebAreaAlongMin_10f281d777284cea,
              mid_setOebIntermediate_10f281d777284cea,
              mid_setOebMax_10f281d777284cea,
              mid_setOebMin_10f281d777284cea,
              mid_setOebParentFrame_f55eee1236275bb1,
              mid_setOebParentFrameEpoch_20affcbd28542333,
              mid_setOebQ_89aad365fb0ed8da,
              mid_setRcs_10f281d777284cea,
              mid_setReflectance_10f281d777284cea,
              mid_setVmAbsolute_10f281d777284cea,
              mid_setVmApparent_10f281d777284cea,
              mid_setVmApparentMax_10f281d777284cea,
              mid_setVmApparentMin_10f281d777284cea,
              mid_validate_10f281d777284cea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CommonPhysicalProperties(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CommonPhysicalProperties(const CommonPhysicalProperties& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

            CommonPhysicalProperties();

            jdouble getMaxRcs() const;
            jdouble getMinRcs() const;
            jdouble getOebAreaAlongIntermediate() const;
            jdouble getOebAreaAlongMax() const;
            jdouble getOebAreaAlongMin() const;
            jdouble getOebIntermediate() const;
            jdouble getOebMax() const;
            jdouble getOebMin() const;
            ::org::orekit::files::ccsds::definitions::FrameFacade getOebParentFrame() const;
            ::org::orekit::time::AbsoluteDate getOebParentFrameEpoch() const;
            ::org::hipparchus::complex::Quaternion getOebQ() const;
            jdouble getRcs() const;
            jdouble getReflectance() const;
            jdouble getVmAbsolute() const;
            jdouble getVmApparent() const;
            jdouble getVmApparentMax() const;
            jdouble getVmApparentMin() const;
            void setMaxRcs(jdouble) const;
            void setMinRcs(jdouble) const;
            void setOebAreaAlongIntermediate(jdouble) const;
            void setOebAreaAlongMax(jdouble) const;
            void setOebAreaAlongMin(jdouble) const;
            void setOebIntermediate(jdouble) const;
            void setOebMax(jdouble) const;
            void setOebMin(jdouble) const;
            void setOebParentFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
            void setOebParentFrameEpoch(const ::org::orekit::time::AbsoluteDate &) const;
            void setOebQ(jint, jdouble) const;
            void setRcs(jdouble) const;
            void setReflectance(jdouble) const;
            void setVmAbsolute(jdouble) const;
            void setVmApparent(jdouble) const;
            void setVmApparentMax(jdouble) const;
            void setVmApparentMin(jdouble) const;
            void validate(jdouble) const;
          };
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
          extern PyType_Def PY_TYPE_DEF(CommonPhysicalProperties);
          extern PyTypeObject *PY_TYPE(CommonPhysicalProperties);

          class t_CommonPhysicalProperties {
          public:
            PyObject_HEAD
            CommonPhysicalProperties object;
            static PyObject *wrap_Object(const CommonPhysicalProperties&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
