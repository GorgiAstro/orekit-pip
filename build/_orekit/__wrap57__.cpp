#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/CommonPhysicalProperties.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/complex/Quaternion.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *CommonPhysicalProperties::class$ = NULL;
          jmethodID *CommonPhysicalProperties::mids$ = NULL;
          bool CommonPhysicalProperties::live$ = false;

          jclass CommonPhysicalProperties::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/CommonPhysicalProperties");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getMaxRcs_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxRcs", "()D");
              mids$[mid_getMinRcs_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinRcs", "()D");
              mids$[mid_getOebAreaAlongIntermediate_456d9a2f64d6b28d] = env->getMethodID(cls, "getOebAreaAlongIntermediate", "()D");
              mids$[mid_getOebAreaAlongMax_456d9a2f64d6b28d] = env->getMethodID(cls, "getOebAreaAlongMax", "()D");
              mids$[mid_getOebAreaAlongMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getOebAreaAlongMin", "()D");
              mids$[mid_getOebIntermediate_456d9a2f64d6b28d] = env->getMethodID(cls, "getOebIntermediate", "()D");
              mids$[mid_getOebMax_456d9a2f64d6b28d] = env->getMethodID(cls, "getOebMax", "()D");
              mids$[mid_getOebMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getOebMin", "()D");
              mids$[mid_getOebParentFrame_aa70fdb14ae9305f] = env->getMethodID(cls, "getOebParentFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
              mids$[mid_getOebParentFrameEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getOebParentFrameEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getOebQ_db551426640930fe] = env->getMethodID(cls, "getOebQ", "()Lorg/hipparchus/complex/Quaternion;");
              mids$[mid_getRcs_456d9a2f64d6b28d] = env->getMethodID(cls, "getRcs", "()D");
              mids$[mid_getReflectance_456d9a2f64d6b28d] = env->getMethodID(cls, "getReflectance", "()D");
              mids$[mid_getVmAbsolute_456d9a2f64d6b28d] = env->getMethodID(cls, "getVmAbsolute", "()D");
              mids$[mid_getVmApparent_456d9a2f64d6b28d] = env->getMethodID(cls, "getVmApparent", "()D");
              mids$[mid_getVmApparentMax_456d9a2f64d6b28d] = env->getMethodID(cls, "getVmApparentMax", "()D");
              mids$[mid_getVmApparentMin_456d9a2f64d6b28d] = env->getMethodID(cls, "getVmApparentMin", "()D");
              mids$[mid_setMaxRcs_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMaxRcs", "(D)V");
              mids$[mid_setMinRcs_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMinRcs", "(D)V");
              mids$[mid_setOebAreaAlongIntermediate_77e0f9a1f260e2e5] = env->getMethodID(cls, "setOebAreaAlongIntermediate", "(D)V");
              mids$[mid_setOebAreaAlongMax_77e0f9a1f260e2e5] = env->getMethodID(cls, "setOebAreaAlongMax", "(D)V");
              mids$[mid_setOebAreaAlongMin_77e0f9a1f260e2e5] = env->getMethodID(cls, "setOebAreaAlongMin", "(D)V");
              mids$[mid_setOebIntermediate_77e0f9a1f260e2e5] = env->getMethodID(cls, "setOebIntermediate", "(D)V");
              mids$[mid_setOebMax_77e0f9a1f260e2e5] = env->getMethodID(cls, "setOebMax", "(D)V");
              mids$[mid_setOebMin_77e0f9a1f260e2e5] = env->getMethodID(cls, "setOebMin", "(D)V");
              mids$[mid_setOebParentFrame_a455f3ff24eb0b47] = env->getMethodID(cls, "setOebParentFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
              mids$[mid_setOebParentFrameEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setOebParentFrameEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setOebQ_987a5fb872043b12] = env->getMethodID(cls, "setOebQ", "(ID)V");
              mids$[mid_setRcs_77e0f9a1f260e2e5] = env->getMethodID(cls, "setRcs", "(D)V");
              mids$[mid_setReflectance_77e0f9a1f260e2e5] = env->getMethodID(cls, "setReflectance", "(D)V");
              mids$[mid_setVmAbsolute_77e0f9a1f260e2e5] = env->getMethodID(cls, "setVmAbsolute", "(D)V");
              mids$[mid_setVmApparent_77e0f9a1f260e2e5] = env->getMethodID(cls, "setVmApparent", "(D)V");
              mids$[mid_setVmApparentMax_77e0f9a1f260e2e5] = env->getMethodID(cls, "setVmApparentMax", "(D)V");
              mids$[mid_setVmApparentMin_77e0f9a1f260e2e5] = env->getMethodID(cls, "setVmApparentMin", "(D)V");
              mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CommonPhysicalProperties::CommonPhysicalProperties() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          jdouble CommonPhysicalProperties::getMaxRcs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxRcs_456d9a2f64d6b28d]);
          }

          jdouble CommonPhysicalProperties::getMinRcs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMinRcs_456d9a2f64d6b28d]);
          }

          jdouble CommonPhysicalProperties::getOebAreaAlongIntermediate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebAreaAlongIntermediate_456d9a2f64d6b28d]);
          }

          jdouble CommonPhysicalProperties::getOebAreaAlongMax() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebAreaAlongMax_456d9a2f64d6b28d]);
          }

          jdouble CommonPhysicalProperties::getOebAreaAlongMin() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebAreaAlongMin_456d9a2f64d6b28d]);
          }

          jdouble CommonPhysicalProperties::getOebIntermediate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebIntermediate_456d9a2f64d6b28d]);
          }

          jdouble CommonPhysicalProperties::getOebMax() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebMax_456d9a2f64d6b28d]);
          }

          jdouble CommonPhysicalProperties::getOebMin() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOebMin_456d9a2f64d6b28d]);
          }

          ::org::orekit::files::ccsds::definitions::FrameFacade CommonPhysicalProperties::getOebParentFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getOebParentFrame_aa70fdb14ae9305f]));
          }

          ::org::orekit::time::AbsoluteDate CommonPhysicalProperties::getOebParentFrameEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getOebParentFrameEpoch_aaa854c403487cf3]));
          }

          ::org::hipparchus::complex::Quaternion CommonPhysicalProperties::getOebQ() const
          {
            return ::org::hipparchus::complex::Quaternion(env->callObjectMethod(this$, mids$[mid_getOebQ_db551426640930fe]));
          }

          jdouble CommonPhysicalProperties::getRcs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRcs_456d9a2f64d6b28d]);
          }

          jdouble CommonPhysicalProperties::getReflectance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getReflectance_456d9a2f64d6b28d]);
          }

          jdouble CommonPhysicalProperties::getVmAbsolute() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmAbsolute_456d9a2f64d6b28d]);
          }

          jdouble CommonPhysicalProperties::getVmApparent() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmApparent_456d9a2f64d6b28d]);
          }

          jdouble CommonPhysicalProperties::getVmApparentMax() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmApparentMax_456d9a2f64d6b28d]);
          }

          jdouble CommonPhysicalProperties::getVmApparentMin() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getVmApparentMin_456d9a2f64d6b28d]);
          }

          void CommonPhysicalProperties::setMaxRcs(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMaxRcs_77e0f9a1f260e2e5], a0);
          }

          void CommonPhysicalProperties::setMinRcs(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMinRcs_77e0f9a1f260e2e5], a0);
          }

          void CommonPhysicalProperties::setOebAreaAlongIntermediate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebAreaAlongIntermediate_77e0f9a1f260e2e5], a0);
          }

          void CommonPhysicalProperties::setOebAreaAlongMax(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebAreaAlongMax_77e0f9a1f260e2e5], a0);
          }

          void CommonPhysicalProperties::setOebAreaAlongMin(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebAreaAlongMin_77e0f9a1f260e2e5], a0);
          }

          void CommonPhysicalProperties::setOebIntermediate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebIntermediate_77e0f9a1f260e2e5], a0);
          }

          void CommonPhysicalProperties::setOebMax(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebMax_77e0f9a1f260e2e5], a0);
          }

          void CommonPhysicalProperties::setOebMin(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebMin_77e0f9a1f260e2e5], a0);
          }

          void CommonPhysicalProperties::setOebParentFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebParentFrame_a455f3ff24eb0b47], a0.this$);
          }

          void CommonPhysicalProperties::setOebParentFrameEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebParentFrameEpoch_e82d68cd9f886886], a0.this$);
          }

          void CommonPhysicalProperties::setOebQ(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setOebQ_987a5fb872043b12], a0, a1);
          }

          void CommonPhysicalProperties::setRcs(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setRcs_77e0f9a1f260e2e5], a0);
          }

          void CommonPhysicalProperties::setReflectance(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReflectance_77e0f9a1f260e2e5], a0);
          }

          void CommonPhysicalProperties::setVmAbsolute(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmAbsolute_77e0f9a1f260e2e5], a0);
          }

          void CommonPhysicalProperties::setVmApparent(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmApparent_77e0f9a1f260e2e5], a0);
          }

          void CommonPhysicalProperties::setVmApparentMax(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmApparentMax_77e0f9a1f260e2e5], a0);
          }

          void CommonPhysicalProperties::setVmApparentMin(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setVmApparentMin_77e0f9a1f260e2e5], a0);
          }

          void CommonPhysicalProperties::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          static PyObject *t_CommonPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CommonPhysicalProperties_init_(t_CommonPhysicalProperties *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CommonPhysicalProperties_getMaxRcs(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getMinRcs(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongIntermediate(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMax(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMin(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebIntermediate(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebMax(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebMin(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebParentFrame(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebParentFrameEpoch(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getOebQ(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getRcs(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getReflectance(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmAbsolute(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmApparent(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmApparentMax(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_getVmApparentMin(t_CommonPhysicalProperties *self);
          static PyObject *t_CommonPhysicalProperties_setMaxRcs(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setMinRcs(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebMax(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebMin(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setOebQ(t_CommonPhysicalProperties *self, PyObject *args);
          static PyObject *t_CommonPhysicalProperties_setRcs(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setReflectance(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmApparent(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_setVmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg);
          static PyObject *t_CommonPhysicalProperties_validate(t_CommonPhysicalProperties *self, PyObject *args);
          static PyObject *t_CommonPhysicalProperties_get__maxRcs(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__maxRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__minRcs(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__minRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMax(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMin(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebIntermediate(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebMax(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebMin(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebParentFrame(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebParentFrameEpoch(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__oebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__oebQ(t_CommonPhysicalProperties *self, void *data);
          static PyObject *t_CommonPhysicalProperties_get__rcs(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__rcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__reflectance(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__reflectance(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmAbsolute(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmApparent(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmApparent(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmApparentMax(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyObject *t_CommonPhysicalProperties_get__vmApparentMin(t_CommonPhysicalProperties *self, void *data);
          static int t_CommonPhysicalProperties_set__vmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data);
          static PyGetSetDef t_CommonPhysicalProperties__fields_[] = {
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, maxRcs),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, minRcs),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebAreaAlongIntermediate),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebAreaAlongMax),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebAreaAlongMin),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebIntermediate),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebMax),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebMin),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebParentFrame),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, oebParentFrameEpoch),
            DECLARE_GET_FIELD(t_CommonPhysicalProperties, oebQ),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, rcs),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, reflectance),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmAbsolute),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmApparent),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmApparentMax),
            DECLARE_GETSET_FIELD(t_CommonPhysicalProperties, vmApparentMin),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CommonPhysicalProperties__methods_[] = {
            DECLARE_METHOD(t_CommonPhysicalProperties, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommonPhysicalProperties, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getMaxRcs, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getMinRcs, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebAreaAlongIntermediate, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebAreaAlongMax, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebAreaAlongMin, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebIntermediate, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebMax, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebMin, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebParentFrame, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebParentFrameEpoch, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getOebQ, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getRcs, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getReflectance, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmAbsolute, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmApparent, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmApparentMax, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, getVmApparentMin, METH_NOARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, setMaxRcs, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setMinRcs, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebAreaAlongIntermediate, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebAreaAlongMax, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebAreaAlongMin, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebIntermediate, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebMax, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebMin, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebParentFrame, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebParentFrameEpoch, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setOebQ, METH_VARARGS),
            DECLARE_METHOD(t_CommonPhysicalProperties, setRcs, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setReflectance, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmAbsolute, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmApparent, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmApparentMax, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, setVmApparentMin, METH_O),
            DECLARE_METHOD(t_CommonPhysicalProperties, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CommonPhysicalProperties)[] = {
            { Py_tp_methods, t_CommonPhysicalProperties__methods_ },
            { Py_tp_init, (void *) t_CommonPhysicalProperties_init_ },
            { Py_tp_getset, t_CommonPhysicalProperties__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CommonPhysicalProperties)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
            NULL
          };

          DEFINE_TYPE(CommonPhysicalProperties, t_CommonPhysicalProperties, CommonPhysicalProperties);

          void t_CommonPhysicalProperties::install(PyObject *module)
          {
            installType(&PY_TYPE(CommonPhysicalProperties), &PY_TYPE_DEF(CommonPhysicalProperties), module, "CommonPhysicalProperties", 0);
          }

          void t_CommonPhysicalProperties::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommonPhysicalProperties), "class_", make_descriptor(CommonPhysicalProperties::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommonPhysicalProperties), "wrapfn_", make_descriptor(t_CommonPhysicalProperties::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CommonPhysicalProperties), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CommonPhysicalProperties_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CommonPhysicalProperties::initializeClass, 1)))
              return NULL;
            return t_CommonPhysicalProperties::wrap_Object(CommonPhysicalProperties(((t_CommonPhysicalProperties *) arg)->object.this$));
          }
          static PyObject *t_CommonPhysicalProperties_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CommonPhysicalProperties::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CommonPhysicalProperties_init_(t_CommonPhysicalProperties *self, PyObject *args, PyObject *kwds)
          {
            CommonPhysicalProperties object((jobject) NULL);

            INT_CALL(object = CommonPhysicalProperties());
            self->object = object;

            return 0;
          }

          static PyObject *t_CommonPhysicalProperties_getMaxRcs(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMaxRcs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getMinRcs(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMinRcs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongIntermediate(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebAreaAlongIntermediate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMax(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebAreaAlongMax());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebAreaAlongMin(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebAreaAlongMin());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebIntermediate(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebIntermediate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebMax(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebMax());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebMin(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOebMin());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebParentFrame(t_CommonPhysicalProperties *self)
          {
            ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
            OBJ_CALL(result = self->object.getOebParentFrame());
            return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebParentFrameEpoch(t_CommonPhysicalProperties *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getOebParentFrameEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_CommonPhysicalProperties_getOebQ(t_CommonPhysicalProperties *self)
          {
            ::org::hipparchus::complex::Quaternion result((jobject) NULL);
            OBJ_CALL(result = self->object.getOebQ());
            return ::org::hipparchus::complex::t_Quaternion::wrap_Object(result);
          }

          static PyObject *t_CommonPhysicalProperties_getRcs(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRcs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getReflectance(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getReflectance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmAbsolute(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmAbsolute());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmApparent(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmApparent());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmApparentMax(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmApparentMax());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_getVmApparentMin(t_CommonPhysicalProperties *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getVmApparentMin());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CommonPhysicalProperties_setMaxRcs(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setMaxRcs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMaxRcs", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setMinRcs(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setMinRcs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setMinRcs", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebAreaAlongIntermediate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebAreaAlongIntermediate", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebAreaAlongMax(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebAreaAlongMax", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebAreaAlongMin(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebAreaAlongMin", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebIntermediate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebIntermediate", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebMax(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebMax(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebMax", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebMin(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setOebMin(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebMin", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setOebParentFrame(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebParentFrame", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setOebParentFrameEpoch(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebParentFrameEpoch", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setOebQ(t_CommonPhysicalProperties *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setOebQ(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setOebQ", args);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setRcs(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setRcs(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setRcs", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setReflectance(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setReflectance(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReflectance", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmAbsolute(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmAbsolute", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmApparent(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmApparent(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmApparent", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmApparentMax(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmApparentMax", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_setVmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setVmApparentMin(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setVmApparentMin", arg);
            return NULL;
          }

          static PyObject *t_CommonPhysicalProperties_validate(t_CommonPhysicalProperties *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CommonPhysicalProperties), (PyObject *) self, "validate", args, 2);
          }

          static PyObject *t_CommonPhysicalProperties_get__maxRcs(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMaxRcs());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__maxRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setMaxRcs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "maxRcs", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__minRcs(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMinRcs());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__minRcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setMinRcs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "minRcs", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebAreaAlongIntermediate());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebAreaAlongIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebAreaAlongIntermediate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebAreaAlongIntermediate", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMax(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebAreaAlongMax());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebAreaAlongMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebAreaAlongMax(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebAreaAlongMax", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebAreaAlongMin(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebAreaAlongMin());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebAreaAlongMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebAreaAlongMin(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebAreaAlongMin", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebIntermediate(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebIntermediate());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebIntermediate(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebIntermediate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebIntermediate", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebMax(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebMax());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebMax(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebMax", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebMin(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOebMin());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__oebMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setOebMin(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebMin", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebParentFrame(t_CommonPhysicalProperties *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
            OBJ_CALL(value = self->object.getOebParentFrame());
            return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
          }
          static int t_CommonPhysicalProperties_set__oebParentFrame(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
              {
                INT_CALL(self->object.setOebParentFrame(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebParentFrame", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebParentFrameEpoch(t_CommonPhysicalProperties *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getOebParentFrameEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_CommonPhysicalProperties_set__oebParentFrameEpoch(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setOebParentFrameEpoch(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "oebParentFrameEpoch", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__oebQ(t_CommonPhysicalProperties *self, void *data)
          {
            ::org::hipparchus::complex::Quaternion value((jobject) NULL);
            OBJ_CALL(value = self->object.getOebQ());
            return ::org::hipparchus::complex::t_Quaternion::wrap_Object(value);
          }

          static PyObject *t_CommonPhysicalProperties_get__rcs(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRcs());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__rcs(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setRcs(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "rcs", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__reflectance(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getReflectance());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__reflectance(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setReflectance(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "reflectance", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmAbsolute(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmAbsolute());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmAbsolute(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmAbsolute(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmAbsolute", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmApparent(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmApparent());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmApparent(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmApparent(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmApparent", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmApparentMax(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmApparentMax());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmApparentMax(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmApparentMax(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmApparentMax", arg);
            return -1;
          }

          static PyObject *t_CommonPhysicalProperties_get__vmApparentMin(t_CommonPhysicalProperties *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getVmApparentMin());
            return PyFloat_FromDouble((double) value);
          }
          static int t_CommonPhysicalProperties_set__vmApparentMin(t_CommonPhysicalProperties *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setVmApparentMin(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "vmApparentMin", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventEnablingPredicateFilter.h"
#include "org/orekit/propagation/events/EventEnablingPredicateFilter.h"
#include "org/orekit/propagation/events/EnablingPredicate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventEnablingPredicateFilter::class$ = NULL;
        jmethodID *EventEnablingPredicateFilter::mids$ = NULL;
        bool EventEnablingPredicateFilter::live$ = false;

        jclass EventEnablingPredicateFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventEnablingPredicateFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_cac06a4b7cd10575] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/events/EnablingPredicate;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetector_27b528e7858202ed] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_69a590f9f8d3b5d0] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EventEnablingPredicateFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventEnablingPredicateFilter::EventEnablingPredicateFilter(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::events::EnablingPredicate & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_cac06a4b7cd10575, a0.this$, a1.this$)) {}

        jdouble EventEnablingPredicateFilter::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector EventEnablingPredicateFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_27b528e7858202ed]));
        }

        void EventEnablingPredicateFilter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_EventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventEnablingPredicateFilter_of_(t_EventEnablingPredicateFilter *self, PyObject *args);
        static int t_EventEnablingPredicateFilter_init_(t_EventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventEnablingPredicateFilter_g(t_EventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_EventEnablingPredicateFilter_getDetector(t_EventEnablingPredicateFilter *self);
        static PyObject *t_EventEnablingPredicateFilter_init(t_EventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_EventEnablingPredicateFilter_get__detector(t_EventEnablingPredicateFilter *self, void *data);
        static PyObject *t_EventEnablingPredicateFilter_get__parameters_(t_EventEnablingPredicateFilter *self, void *data);
        static PyGetSetDef t_EventEnablingPredicateFilter__fields_[] = {
          DECLARE_GET_FIELD(t_EventEnablingPredicateFilter, detector),
          DECLARE_GET_FIELD(t_EventEnablingPredicateFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventEnablingPredicateFilter__methods_[] = {
          DECLARE_METHOD(t_EventEnablingPredicateFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventEnablingPredicateFilter)[] = {
          { Py_tp_methods, t_EventEnablingPredicateFilter__methods_ },
          { Py_tp_init, (void *) t_EventEnablingPredicateFilter_init_ },
          { Py_tp_getset, t_EventEnablingPredicateFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventEnablingPredicateFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EventEnablingPredicateFilter, t_EventEnablingPredicateFilter, EventEnablingPredicateFilter);
        PyObject *t_EventEnablingPredicateFilter::wrap_Object(const EventEnablingPredicateFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventEnablingPredicateFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventEnablingPredicateFilter *self = (t_EventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventEnablingPredicateFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventEnablingPredicateFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventEnablingPredicateFilter *self = (t_EventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventEnablingPredicateFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventEnablingPredicateFilter), &PY_TYPE_DEF(EventEnablingPredicateFilter), module, "EventEnablingPredicateFilter", 0);
        }

        void t_EventEnablingPredicateFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventEnablingPredicateFilter), "class_", make_descriptor(EventEnablingPredicateFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventEnablingPredicateFilter), "wrapfn_", make_descriptor(t_EventEnablingPredicateFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventEnablingPredicateFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventEnablingPredicateFilter::initializeClass, 1)))
            return NULL;
          return t_EventEnablingPredicateFilter::wrap_Object(EventEnablingPredicateFilter(((t_EventEnablingPredicateFilter *) arg)->object.this$));
        }
        static PyObject *t_EventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventEnablingPredicateFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventEnablingPredicateFilter_of_(t_EventEnablingPredicateFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventEnablingPredicateFilter_init_(t_EventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::EnablingPredicate a1((jobject) NULL);
          EventEnablingPredicateFilter object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::events::EnablingPredicate::initializeClass, &a0, &a1))
          {
            INT_CALL(object = EventEnablingPredicateFilter(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EventEnablingPredicateFilter);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventEnablingPredicateFilter_g(t_EventEnablingPredicateFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventEnablingPredicateFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventEnablingPredicateFilter_getDetector(t_EventEnablingPredicateFilter *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventEnablingPredicateFilter_init(t_EventEnablingPredicateFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventEnablingPredicateFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventEnablingPredicateFilter_get__parameters_(t_EventEnablingPredicateFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventEnablingPredicateFilter_get__detector(t_EventEnablingPredicateFilter *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *FieldUnivariateInterpolator::class$ = NULL;
        jmethodID *FieldUnivariateInterpolator::mids$ = NULL;
        bool FieldUnivariateInterpolator::live$ = false;

        jclass FieldUnivariateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_eab3fa0cc9bfd33f] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::CalculusFieldUnivariateFunction FieldUnivariateInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::CalculusFieldUnivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_eab3fa0cc9bfd33f], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        static PyObject *t_FieldUnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateInterpolator_interpolate(t_FieldUnivariateInterpolator *self, PyObject *args);

        static PyMethodDef t_FieldUnivariateInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateInterpolator)[] = {
          { Py_tp_methods, t_FieldUnivariateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateInterpolator, t_FieldUnivariateInterpolator, FieldUnivariateInterpolator);

        void t_FieldUnivariateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateInterpolator), &PY_TYPE_DEF(FieldUnivariateInterpolator), module, "FieldUnivariateInterpolator", 0);
        }

        void t_FieldUnivariateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateInterpolator), "class_", make_descriptor(FieldUnivariateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateInterpolator), "wrapfn_", make_descriptor(t_FieldUnivariateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateInterpolator::wrap_Object(FieldUnivariateInterpolator(((t_FieldUnivariateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateInterpolator_interpolate(t_FieldUnivariateInterpolator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFile.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemeris.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile::class$ = NULL;
        jmethodID *STKEphemerisFile::mids$ = NULL;
        bool STKEphemerisFile::live$ = false;

        jclass STKEphemerisFile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7bfd6f81d2d9c987] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/stk/STKEphemerisFile$STKEphemeris;)V");
            mids$[mid_getSTKVersion_0090f7797e403f43] = env->getMethodID(cls, "getSTKVersion", "()Ljava/lang/String;");
            mids$[mid_getSatellites_d6753b7055940a54] = env->getMethodID(cls, "getSatellites", "()Ljava/util/Map;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile::STKEphemerisFile(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::stk::STKEphemerisFile$STKEphemeris & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7bfd6f81d2d9c987, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String STKEphemerisFile::getSTKVersion() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSTKVersion_0090f7797e403f43]));
        }

        ::java::util::Map STKEphemerisFile::getSatellites() const
        {
          return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSatellites_d6753b7055940a54]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKCoordinateSystem.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {
        static PyObject *t_STKEphemerisFile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFile_init_(t_STKEphemerisFile *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFile_getSTKVersion(t_STKEphemerisFile *self);
        static PyObject *t_STKEphemerisFile_getSatellites(t_STKEphemerisFile *self);
        static PyObject *t_STKEphemerisFile_get__sTKVersion(t_STKEphemerisFile *self, void *data);
        static PyObject *t_STKEphemerisFile_get__satellites(t_STKEphemerisFile *self, void *data);
        static PyGetSetDef t_STKEphemerisFile__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile, sTKVersion),
          DECLARE_GET_FIELD(t_STKEphemerisFile, satellites),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile, getSTKVersion, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile, getSatellites, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile)[] = {
          { Py_tp_methods, t_STKEphemerisFile__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFile_init_ },
          { Py_tp_getset, t_STKEphemerisFile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile, t_STKEphemerisFile, STKEphemerisFile);

        void t_STKEphemerisFile::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile), &PY_TYPE_DEF(STKEphemerisFile), module, "STKEphemerisFile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "STKCoordinateSystem", make_descriptor(&PY_TYPE_DEF(STKEphemerisFile$STKCoordinateSystem)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "STKEphemeris", make_descriptor(&PY_TYPE_DEF(STKEphemerisFile$STKEphemeris)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "STKEphemerisSegment", make_descriptor(&PY_TYPE_DEF(STKEphemerisFile$STKEphemerisSegment)));
        }

        void t_STKEphemerisFile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "class_", make_descriptor(STKEphemerisFile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "wrapfn_", make_descriptor(t_STKEphemerisFile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile::wrap_Object(STKEphemerisFile(((t_STKEphemerisFile *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFile_init_(t_STKEphemerisFile *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::orekit::files::stk::STKEphemerisFile$STKEphemeris a2((jobject) NULL);
          STKEphemerisFile object((jobject) NULL);

          if (!parseArgs(args, "ssk", ::org::orekit::files::stk::STKEphemerisFile$STKEphemeris::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = STKEphemerisFile(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFile_getSTKVersion(t_STKEphemerisFile *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSTKVersion());
          return j2p(result);
        }

        static PyObject *t_STKEphemerisFile_getSatellites(t_STKEphemerisFile *self)
        {
          ::java::util::Map result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::stk::PY_TYPE(STKEphemerisFile$STKEphemeris));
        }

        static PyObject *t_STKEphemerisFile_get__sTKVersion(t_STKEphemerisFile *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSTKVersion());
          return j2p(value);
        }

        static PyObject *t_STKEphemerisFile_get__satellites(t_STKEphemerisFile *self, void *data)
        {
          ::java::util::Map value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_Map::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/PythonSection.h"
#include "org/orekit/files/ccsds/section/Section.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *PythonSection::class$ = NULL;
          jmethodID *PythonSection::mids$ = NULL;
          bool PythonSection::live$ = false;

          jclass PythonSection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/PythonSection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonSection::PythonSection() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonSection::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonSection::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonSection::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_PythonSection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonSection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonSection_init_(t_PythonSection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonSection_finalize(t_PythonSection *self);
          static PyObject *t_PythonSection_pythonExtension(t_PythonSection *self, PyObject *args);
          static void JNICALL t_PythonSection_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonSection_validate1(JNIEnv *jenv, jobject jobj, jdouble a0);
          static PyObject *t_PythonSection_get__self(t_PythonSection *self, void *data);
          static PyGetSetDef t_PythonSection__fields_[] = {
            DECLARE_GET_FIELD(t_PythonSection, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonSection__methods_[] = {
            DECLARE_METHOD(t_PythonSection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonSection, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonSection, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonSection)[] = {
            { Py_tp_methods, t_PythonSection__methods_ },
            { Py_tp_init, (void *) t_PythonSection_init_ },
            { Py_tp_getset, t_PythonSection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonSection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonSection, t_PythonSection, PythonSection);

          void t_PythonSection::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonSection), &PY_TYPE_DEF(PythonSection), module, "PythonSection", 1);
          }

          void t_PythonSection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSection), "class_", make_descriptor(PythonSection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSection), "wrapfn_", make_descriptor(t_PythonSection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSection), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonSection::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PythonSection_pythonDecRef0 },
              { "validate", "(D)V", (void *) t_PythonSection_validate1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonSection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonSection::initializeClass, 1)))
              return NULL;
            return t_PythonSection::wrap_Object(PythonSection(((t_PythonSection *) arg)->object.this$));
          }
          static PyObject *t_PythonSection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonSection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonSection_init_(t_PythonSection *self, PyObject *args, PyObject *kwds)
          {
            PythonSection object((jobject) NULL);

            INT_CALL(object = PythonSection());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonSection_finalize(t_PythonSection *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonSection_pythonExtension(t_PythonSection *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static void JNICALL t_PythonSection_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSection::mids$[PythonSection::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonSection::mids$[PythonSection::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonSection_validate1(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonSection::mids$[PythonSection::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "validate", "d", (double) a0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonSection_get__self(t_PythonSection *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/DeepSDP4.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *DeepSDP4::class$ = NULL;
          jmethodID *DeepSDP4::mids$ = NULL;
          bool DeepSDP4::live$ = false;

          jclass DeepSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/DeepSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3c209839d9f7d817] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)V");
              mids$[mid_init$_8edece06f32cbd33] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)V");
              mids$[mid_luniSolarTermsComputation_7ae3461a92a43152] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_77e0f9a1f260e2e5] = env->getMethodID(cls, "deepSecularEffects", "(D)V");
              mids$[mid_deepPeriodicEffects_77e0f9a1f260e2e5] = env->getMethodID(cls, "deepPeriodicEffects", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DeepSDP4::DeepSDP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::tle::SDP4(env->newObject(initializeClass, &mids$, mid_init$_3c209839d9f7d817, a0.this$, a1.this$, a2)) {}

          DeepSDP4::DeepSDP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::propagation::analytical::tle::SDP4(env->newObject(initializeClass, &mids$, mid_init$_8edece06f32cbd33, a0.this$, a1.this$, a2, a3.this$)) {}
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          static PyObject *t_DeepSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DeepSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DeepSDP4_init_(t_DeepSDP4 *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_DeepSDP4__methods_[] = {
            DECLARE_METHOD(t_DeepSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DeepSDP4, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DeepSDP4)[] = {
            { Py_tp_methods, t_DeepSDP4__methods_ },
            { Py_tp_init, (void *) t_DeepSDP4_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DeepSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::SDP4),
            NULL
          };

          DEFINE_TYPE(DeepSDP4, t_DeepSDP4, DeepSDP4);

          void t_DeepSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(DeepSDP4), &PY_TYPE_DEF(DeepSDP4), module, "DeepSDP4", 0);
          }

          void t_DeepSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DeepSDP4), "class_", make_descriptor(DeepSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DeepSDP4), "wrapfn_", make_descriptor(t_DeepSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DeepSDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DeepSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DeepSDP4::initializeClass, 1)))
              return NULL;
            return t_DeepSDP4::wrap_Object(DeepSDP4(((t_DeepSDP4 *) arg)->object.this$));
          }
          static PyObject *t_DeepSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DeepSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DeepSDP4_init_(t_DeepSDP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                DeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = DeepSDP4(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                DeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = DeepSDP4(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LocalOrbitalFrame.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LocalOrbitalFrame::class$ = NULL;
      jmethodID *LocalOrbitalFrame::mids$ = NULL;
      bool LocalOrbitalFrame::live$ = false;

      jclass LocalOrbitalFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LocalOrbitalFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_34b2034d708e17b6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Lorg/orekit/utils/PVCoordinatesProvider;Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LocalOrbitalFrame::LocalOrbitalFrame(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, const ::java::lang::String & a3) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_34b2034d708e17b6, a0.this$, a1.this$, a2.this$, a3.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_LocalOrbitalFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalOrbitalFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LocalOrbitalFrame_init_(t_LocalOrbitalFrame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_LocalOrbitalFrame__methods_[] = {
        DECLARE_METHOD(t_LocalOrbitalFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalOrbitalFrame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalOrbitalFrame)[] = {
        { Py_tp_methods, t_LocalOrbitalFrame__methods_ },
        { Py_tp_init, (void *) t_LocalOrbitalFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalOrbitalFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(LocalOrbitalFrame, t_LocalOrbitalFrame, LocalOrbitalFrame);

      void t_LocalOrbitalFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalOrbitalFrame), &PY_TYPE_DEF(LocalOrbitalFrame), module, "LocalOrbitalFrame", 0);
      }

      void t_LocalOrbitalFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalOrbitalFrame), "class_", make_descriptor(LocalOrbitalFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalOrbitalFrame), "wrapfn_", make_descriptor(t_LocalOrbitalFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalOrbitalFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LocalOrbitalFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalOrbitalFrame::initializeClass, 1)))
          return NULL;
        return t_LocalOrbitalFrame::wrap_Object(LocalOrbitalFrame(((t_LocalOrbitalFrame *) arg)->object.this$));
      }
      static PyObject *t_LocalOrbitalFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalOrbitalFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LocalOrbitalFrame_init_(t_LocalOrbitalFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::frames::LOF a1((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        LocalOrbitalFrame object((jobject) NULL);

        if (!parseArgs(args, "kkks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = LocalOrbitalFrame(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AccurateFormatter.h"
#include "java/util/Locale.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AccurateFormatter::class$ = NULL;
      jmethodID *AccurateFormatter::mids$ = NULL;
      bool AccurateFormatter::live$ = false;
      ::java::util::Locale *AccurateFormatter::STANDARDIZED_LOCALE = NULL;

      jclass AccurateFormatter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AccurateFormatter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_format_085bbc49599fa163] = env->getStaticMethodID(cls, "format", "(D)Ljava/lang/String;");
          mids$[mid_format_5f1e8067dcf848fb] = env->getStaticMethodID(cls, "format", "(IIIIID)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          STANDARDIZED_LOCALE = new ::java::util::Locale(env->getStaticObjectField(cls, "STANDARDIZED_LOCALE", "Ljava/util/Locale;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String AccurateFormatter::format(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_format_085bbc49599fa163], a0));
      }

      ::java::lang::String AccurateFormatter::format(jint a0, jint a1, jint a2, jint a3, jint a4, jdouble a5)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_format_5f1e8067dcf848fb], a0, a1, a2, a3, a4, a5));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_AccurateFormatter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AccurateFormatter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AccurateFormatter_format(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_AccurateFormatter__methods_[] = {
        DECLARE_METHOD(t_AccurateFormatter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AccurateFormatter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AccurateFormatter, format, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AccurateFormatter)[] = {
        { Py_tp_methods, t_AccurateFormatter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AccurateFormatter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AccurateFormatter, t_AccurateFormatter, AccurateFormatter);

      void t_AccurateFormatter::install(PyObject *module)
      {
        installType(&PY_TYPE(AccurateFormatter), &PY_TYPE_DEF(AccurateFormatter), module, "AccurateFormatter", 0);
      }

      void t_AccurateFormatter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "class_", make_descriptor(AccurateFormatter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "wrapfn_", make_descriptor(t_AccurateFormatter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "boxfn_", make_descriptor(boxObject));
        env->getClass(AccurateFormatter::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AccurateFormatter), "STANDARDIZED_LOCALE", make_descriptor(::java::util::t_Locale::wrap_Object(*AccurateFormatter::STANDARDIZED_LOCALE)));
      }

      static PyObject *t_AccurateFormatter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AccurateFormatter::initializeClass, 1)))
          return NULL;
        return t_AccurateFormatter::wrap_Object(AccurateFormatter(((t_AccurateFormatter *) arg)->object.this$));
      }
      static PyObject *t_AccurateFormatter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AccurateFormatter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AccurateFormatter_format(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::orekit::utils::AccurateFormatter::format(a0));
              return j2p(result);
            }
          }
          break;
         case 6:
          {
            jint a0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble a5;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "IIIIID", &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = ::org::orekit::utils::AccurateFormatter::format(a0, a1, a2, a3, a4, a5));
              return j2p(result);
            }
          }
        }

        PyErr_SetArgsError(type, "format", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProviderAdapter.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ExtendedPVCoordinatesProviderAdapter::class$ = NULL;
      jmethodID *ExtendedPVCoordinatesProviderAdapter::mids$ = NULL;
      bool ExtendedPVCoordinatesProviderAdapter::live$ = false;

      jclass ExtendedPVCoordinatesProviderAdapter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ExtendedPVCoordinatesProviderAdapter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e8c3eba42dad69b0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ExtendedPVCoordinatesProviderAdapter::ExtendedPVCoordinatesProviderAdapter(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a1, const ::java::lang::String & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_e8c3eba42dad69b0, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_ExtendedPVCoordinatesProviderAdapter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExtendedPVCoordinatesProviderAdapter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ExtendedPVCoordinatesProviderAdapter_init_(t_ExtendedPVCoordinatesProviderAdapter *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_ExtendedPVCoordinatesProviderAdapter__methods_[] = {
        DECLARE_METHOD(t_ExtendedPVCoordinatesProviderAdapter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProviderAdapter, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExtendedPVCoordinatesProviderAdapter)[] = {
        { Py_tp_methods, t_ExtendedPVCoordinatesProviderAdapter__methods_ },
        { Py_tp_init, (void *) t_ExtendedPVCoordinatesProviderAdapter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExtendedPVCoordinatesProviderAdapter)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(ExtendedPVCoordinatesProviderAdapter, t_ExtendedPVCoordinatesProviderAdapter, ExtendedPVCoordinatesProviderAdapter);

      void t_ExtendedPVCoordinatesProviderAdapter::install(PyObject *module)
      {
        installType(&PY_TYPE(ExtendedPVCoordinatesProviderAdapter), &PY_TYPE_DEF(ExtendedPVCoordinatesProviderAdapter), module, "ExtendedPVCoordinatesProviderAdapter", 0);
      }

      void t_ExtendedPVCoordinatesProviderAdapter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProviderAdapter), "class_", make_descriptor(ExtendedPVCoordinatesProviderAdapter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProviderAdapter), "wrapfn_", make_descriptor(t_ExtendedPVCoordinatesProviderAdapter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProviderAdapter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExtendedPVCoordinatesProviderAdapter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExtendedPVCoordinatesProviderAdapter::initializeClass, 1)))
          return NULL;
        return t_ExtendedPVCoordinatesProviderAdapter::wrap_Object(ExtendedPVCoordinatesProviderAdapter(((t_ExtendedPVCoordinatesProviderAdapter *) arg)->object.this$));
      }
      static PyObject *t_ExtendedPVCoordinatesProviderAdapter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExtendedPVCoordinatesProviderAdapter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ExtendedPVCoordinatesProviderAdapter_init_(t_ExtendedPVCoordinatesProviderAdapter *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::utils::ExtendedPVCoordinatesProvider a1((jobject) NULL);
        ::java::lang::String a2((jobject) NULL);
        ExtendedPVCoordinatesProviderAdapter object((jobject) NULL);

        if (!parseArgs(args, "kks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = ExtendedPVCoordinatesProviderAdapter(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/LegacyNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *LegacyNavigationMessage::class$ = NULL;
            jmethodID *LegacyNavigationMessage::mids$ = NULL;
            bool LegacyNavigationMessage::live$ = false;
            ::java::lang::String *LegacyNavigationMessage::LNAV = NULL;

            jclass LegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/LegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getFitInterval_f2f64475e4580546] = env->getMethodID(cls, "getFitInterval", "()I");
                mids$[mid_getIODC_f2f64475e4580546] = env->getMethodID(cls, "getIODC", "()I");
                mids$[mid_getIODE_f2f64475e4580546] = env->getMethodID(cls, "getIODE", "()I");
                mids$[mid_getSvAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getSvAccuracy", "()D");
                mids$[mid_getSvHealth_f2f64475e4580546] = env->getMethodID(cls, "getSvHealth", "()I");
                mids$[mid_getTGD_456d9a2f64d6b28d] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_setFitInterval_0a2a1ac2721c0336] = env->getMethodID(cls, "setFitInterval", "(I)V");
                mids$[mid_setIODC_0a2a1ac2721c0336] = env->getMethodID(cls, "setIODC", "(I)V");
                mids$[mid_setIODE_77e0f9a1f260e2e5] = env->getMethodID(cls, "setIODE", "(D)V");
                mids$[mid_setSvAccuracy_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSvAccuracy", "(D)V");
                mids$[mid_setSvHealth_0a2a1ac2721c0336] = env->getMethodID(cls, "setSvHealth", "(I)V");
                mids$[mid_setTGD_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTGD", "(D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                LNAV = new ::java::lang::String(env->getStaticObjectField(cls, "LNAV", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint LegacyNavigationMessage::getFitInterval() const
            {
              return env->callIntMethod(this$, mids$[mid_getFitInterval_f2f64475e4580546]);
            }

            jint LegacyNavigationMessage::getIODC() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODC_f2f64475e4580546]);
            }

            jint LegacyNavigationMessage::getIODE() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODE_f2f64475e4580546]);
            }

            jdouble LegacyNavigationMessage::getSvAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvAccuracy_456d9a2f64d6b28d]);
            }

            jint LegacyNavigationMessage::getSvHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getSvHealth_f2f64475e4580546]);
            }

            jdouble LegacyNavigationMessage::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_456d9a2f64d6b28d]);
            }

            void LegacyNavigationMessage::setFitInterval(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFitInterval_0a2a1ac2721c0336], a0);
            }

            void LegacyNavigationMessage::setIODC(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODC_0a2a1ac2721c0336], a0);
            }

            void LegacyNavigationMessage::setIODE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODE_77e0f9a1f260e2e5], a0);
            }

            void LegacyNavigationMessage::setSvAccuracy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvAccuracy_77e0f9a1f260e2e5], a0);
            }

            void LegacyNavigationMessage::setSvHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_0a2a1ac2721c0336], a0);
            }

            void LegacyNavigationMessage::setTGD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD_77e0f9a1f260e2e5], a0);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_LegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_getFitInterval(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getIODC(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getIODE(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getSvAccuracy(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getSvHealth(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getTGD(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_setFitInterval(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setIODC(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setIODE(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setSvAccuracy(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setSvHealth(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setTGD(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_get__fitInterval(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__fitInterval(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__iODC(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__iODC(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__iODE(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__iODE(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__svAccuracy(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__svAccuracy(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__svHealth(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__svHealth(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__tGD(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__tGD(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_LegacyNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, fitInterval),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, iODC),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, iODE),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, svAccuracy),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, svHealth),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, tGD),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_LegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getFitInterval, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getIODC, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getIODE, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getSvAccuracy, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, setFitInterval, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setIODC, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setIODE, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setSvAccuracy, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setSvHealth, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setTGD, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LegacyNavigationMessage)[] = {
              { Py_tp_methods, t_LegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LegacyNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(LegacyNavigationMessage, t_LegacyNavigationMessage, LegacyNavigationMessage);

            void t_LegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(LegacyNavigationMessage), &PY_TYPE_DEF(LegacyNavigationMessage), module, "LegacyNavigationMessage", 0);
            }

            void t_LegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "class_", make_descriptor(LegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "wrapfn_", make_descriptor(t_LegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(LegacyNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "LNAV", make_descriptor(j2p(*LegacyNavigationMessage::LNAV)));
            }

            static PyObject *t_LegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_LegacyNavigationMessage::wrap_Object(LegacyNavigationMessage(((t_LegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_LegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LegacyNavigationMessage_getFitInterval(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFitInterval());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getIODC(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getIODE(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODE());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getSvAccuracy(t_LegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LegacyNavigationMessage_getSvHealth(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getTGD(t_LegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LegacyNavigationMessage_setFitInterval(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setFitInterval(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFitInterval", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setIODC(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODC", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setIODE(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIODE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODE", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setSvAccuracy(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSvAccuracy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvAccuracy", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setSvHealth(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSvHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setTGD(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_get__fitInterval(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFitInterval());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__fitInterval(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setFitInterval(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "fitInterval", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__iODC(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODC());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__iODC(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODC", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__iODE(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODE());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__iODE(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIODE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODE", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__svAccuracy(t_LegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_LegacyNavigationMessage_set__svAccuracy(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSvAccuracy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svAccuracy", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__svHealth(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__svHealth(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSvHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__tGD(t_LegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_LegacyNavigationMessage_set__tGD(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenZonalLinear.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenZonalLinear::class$ = NULL;
              jmethodID *HansenZonalLinear::mids$ = NULL;
              bool HansenZonalLinear::live$ = false;

              jclass HansenZonalLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenZonalLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
                  mids$[mid_computeInitValues_77e0f9a1f260e2e5] = env->getMethodID(cls, "computeInitValues", "(D)V");
                  mids$[mid_getDerivative_31332242d1624d2c] = env->getMethodID(cls, "getDerivative", "(ID)D");
                  mids$[mid_getValue_31332242d1624d2c] = env->getMethodID(cls, "getValue", "(ID)D");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              HansenZonalLinear::HansenZonalLinear(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

              void HansenZonalLinear::computeInitValues(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_77e0f9a1f260e2e5], a0);
              }

              jdouble HansenZonalLinear::getDerivative(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDerivative_31332242d1624d2c], a0, a1);
              }

              jdouble HansenZonalLinear::getValue(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getValue_31332242d1624d2c], a0, a1);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_HansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg);
              static int t_HansenZonalLinear_init_(t_HansenZonalLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_HansenZonalLinear_computeInitValues(t_HansenZonalLinear *self, PyObject *arg);
              static PyObject *t_HansenZonalLinear_getDerivative(t_HansenZonalLinear *self, PyObject *args);
              static PyObject *t_HansenZonalLinear_getValue(t_HansenZonalLinear *self, PyObject *args);

              static PyMethodDef t_HansenZonalLinear__methods_[] = {
                DECLARE_METHOD(t_HansenZonalLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenZonalLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenZonalLinear, computeInitValues, METH_O),
                DECLARE_METHOD(t_HansenZonalLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_HansenZonalLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenZonalLinear)[] = {
                { Py_tp_methods, t_HansenZonalLinear__methods_ },
                { Py_tp_init, (void *) t_HansenZonalLinear_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenZonalLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenZonalLinear, t_HansenZonalLinear, HansenZonalLinear);

              void t_HansenZonalLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenZonalLinear), &PY_TYPE_DEF(HansenZonalLinear), module, "HansenZonalLinear", 0);
              }

              void t_HansenZonalLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenZonalLinear), "class_", make_descriptor(HansenZonalLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenZonalLinear), "wrapfn_", make_descriptor(t_HansenZonalLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenZonalLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_HansenZonalLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenZonalLinear::initializeClass, 1)))
                  return NULL;
                return t_HansenZonalLinear::wrap_Object(HansenZonalLinear(((t_HansenZonalLinear *) arg)->object.this$));
              }
              static PyObject *t_HansenZonalLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenZonalLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_HansenZonalLinear_init_(t_HansenZonalLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                HansenZonalLinear object((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  INT_CALL(object = HansenZonalLinear(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_HansenZonalLinear_computeInitValues(t_HansenZonalLinear *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.computeInitValues(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", arg);
                return NULL;
              }

              static PyObject *t_HansenZonalLinear_getDerivative(t_HansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_HansenZonalLinear_getValue(t_HansenZonalLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/AbstractMultipleLinearRegression.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/regression/MultipleLinearRegression.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *AbstractMultipleLinearRegression::class$ = NULL;
        jmethodID *AbstractMultipleLinearRegression::mids$ = NULL;
        bool AbstractMultipleLinearRegression::live$ = false;

        jclass AbstractMultipleLinearRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/AbstractMultipleLinearRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_estimateErrorVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "estimateErrorVariance", "()D");
            mids$[mid_estimateRegressandVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "estimateRegressandVariance", "()D");
            mids$[mid_estimateRegressionParameters_7cdc325af0834901] = env->getMethodID(cls, "estimateRegressionParameters", "()[D");
            mids$[mid_estimateRegressionParametersStandardErrors_7cdc325af0834901] = env->getMethodID(cls, "estimateRegressionParametersStandardErrors", "()[D");
            mids$[mid_estimateRegressionParametersVariance_43de1192439efa92] = env->getMethodID(cls, "estimateRegressionParametersVariance", "()[[D");
            mids$[mid_estimateRegressionStandardError_456d9a2f64d6b28d] = env->getMethodID(cls, "estimateRegressionStandardError", "()D");
            mids$[mid_estimateResiduals_7cdc325af0834901] = env->getMethodID(cls, "estimateResiduals", "()[D");
            mids$[mid_isNoIntercept_e470b6d9e0d979db] = env->getMethodID(cls, "isNoIntercept", "()Z");
            mids$[mid_newSampleData_d3508f432c1d798d] = env->getMethodID(cls, "newSampleData", "([DII)V");
            mids$[mid_setNoIntercept_50a2e0b139e80a58] = env->getMethodID(cls, "setNoIntercept", "(Z)V");
            mids$[mid_getX_7116bbecdd8ceb21] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getY_6d9adf1d5b463928] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_newYSampleData_ebc26dcaf4761286] = env->getMethodID(cls, "newYSampleData", "([D)V");
            mids$[mid_newXSampleData_d660c7a97bf55272] = env->getMethodID(cls, "newXSampleData", "([[D)V");
            mids$[mid_validateSampleData_f51b12ef24067352] = env->getMethodID(cls, "validateSampleData", "([[D[D)V");
            mids$[mid_validateCovarianceData_394848609b22ec5b] = env->getMethodID(cls, "validateCovarianceData", "([[D[[D)V");
            mids$[mid_calculateBeta_6d9adf1d5b463928] = env->getMethodID(cls, "calculateBeta", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateBetaVariance_7116bbecdd8ceb21] = env->getMethodID(cls, "calculateBetaVariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_calculateYVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "calculateYVariance", "()D");
            mids$[mid_calculateResiduals_6d9adf1d5b463928] = env->getMethodID(cls, "calculateResiduals", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_calculateErrorVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "calculateErrorVariance", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractMultipleLinearRegression::AbstractMultipleLinearRegression() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble AbstractMultipleLinearRegression::estimateErrorVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateErrorVariance_456d9a2f64d6b28d]);
        }

        jdouble AbstractMultipleLinearRegression::estimateRegressandVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateRegressandVariance_456d9a2f64d6b28d]);
        }

        JArray< jdouble > AbstractMultipleLinearRegression::estimateRegressionParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParameters_7cdc325af0834901]));
        }

        JArray< jdouble > AbstractMultipleLinearRegression::estimateRegressionParametersStandardErrors() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersStandardErrors_7cdc325af0834901]));
        }

        JArray< JArray< jdouble > > AbstractMultipleLinearRegression::estimateRegressionParametersVariance() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_estimateRegressionParametersVariance_43de1192439efa92]));
        }

        jdouble AbstractMultipleLinearRegression::estimateRegressionStandardError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_estimateRegressionStandardError_456d9a2f64d6b28d]);
        }

        JArray< jdouble > AbstractMultipleLinearRegression::estimateResiduals() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_estimateResiduals_7cdc325af0834901]));
        }

        jboolean AbstractMultipleLinearRegression::isNoIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isNoIntercept_e470b6d9e0d979db]);
        }

        void AbstractMultipleLinearRegression::newSampleData(const JArray< jdouble > & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_newSampleData_d3508f432c1d798d], a0.this$, a1, a2);
        }

        void AbstractMultipleLinearRegression::setNoIntercept(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNoIntercept_50a2e0b139e80a58], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {
        static PyObject *t_AbstractMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractMultipleLinearRegression_init_(t_AbstractMultipleLinearRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractMultipleLinearRegression_estimateErrorVariance(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressandVariance(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParameters(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersStandardErrors(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersVariance(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionStandardError(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_estimateResiduals(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_isNoIntercept(t_AbstractMultipleLinearRegression *self);
        static PyObject *t_AbstractMultipleLinearRegression_newSampleData(t_AbstractMultipleLinearRegression *self, PyObject *args);
        static PyObject *t_AbstractMultipleLinearRegression_setNoIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg);
        static PyObject *t_AbstractMultipleLinearRegression_get__noIntercept(t_AbstractMultipleLinearRegression *self, void *data);
        static int t_AbstractMultipleLinearRegression_set__noIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractMultipleLinearRegression__fields_[] = {
          DECLARE_GETSET_FIELD(t_AbstractMultipleLinearRegression, noIntercept),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractMultipleLinearRegression__methods_[] = {
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateErrorVariance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressandVariance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionParametersStandardErrors, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionParametersVariance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateRegressionStandardError, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, estimateResiduals, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, isNoIntercept, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, newSampleData, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMultipleLinearRegression, setNoIntercept, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractMultipleLinearRegression)[] = {
          { Py_tp_methods, t_AbstractMultipleLinearRegression__methods_ },
          { Py_tp_init, (void *) t_AbstractMultipleLinearRegression_init_ },
          { Py_tp_getset, t_AbstractMultipleLinearRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractMultipleLinearRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractMultipleLinearRegression, t_AbstractMultipleLinearRegression, AbstractMultipleLinearRegression);

        void t_AbstractMultipleLinearRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractMultipleLinearRegression), &PY_TYPE_DEF(AbstractMultipleLinearRegression), module, "AbstractMultipleLinearRegression", 0);
        }

        void t_AbstractMultipleLinearRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleLinearRegression), "class_", make_descriptor(AbstractMultipleLinearRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleLinearRegression), "wrapfn_", make_descriptor(t_AbstractMultipleLinearRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultipleLinearRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractMultipleLinearRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractMultipleLinearRegression::initializeClass, 1)))
            return NULL;
          return t_AbstractMultipleLinearRegression::wrap_Object(AbstractMultipleLinearRegression(((t_AbstractMultipleLinearRegression *) arg)->object.this$));
        }
        static PyObject *t_AbstractMultipleLinearRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractMultipleLinearRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractMultipleLinearRegression_init_(t_AbstractMultipleLinearRegression *self, PyObject *args, PyObject *kwds)
        {
          AbstractMultipleLinearRegression object((jobject) NULL);

          INT_CALL(object = AbstractMultipleLinearRegression());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateErrorVariance(t_AbstractMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateErrorVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressandVariance(t_AbstractMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateRegressandVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParameters(t_AbstractMultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParameters());
          return result.wrap();
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersStandardErrors(t_AbstractMultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersStandardErrors());
          return result.wrap();
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionParametersVariance(t_AbstractMultipleLinearRegression *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateRegressionParametersVariance());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateRegressionStandardError(t_AbstractMultipleLinearRegression *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.estimateRegressionStandardError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_estimateResiduals(t_AbstractMultipleLinearRegression *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.estimateResiduals());
          return result.wrap();
        }

        static PyObject *t_AbstractMultipleLinearRegression_isNoIntercept(t_AbstractMultipleLinearRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isNoIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractMultipleLinearRegression_newSampleData(t_AbstractMultipleLinearRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.newSampleData(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "newSampleData", args);
          return NULL;
        }

        static PyObject *t_AbstractMultipleLinearRegression_setNoIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setNoIntercept(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNoIntercept", arg);
          return NULL;
        }

        static PyObject *t_AbstractMultipleLinearRegression_get__noIntercept(t_AbstractMultipleLinearRegression *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isNoIntercept());
          Py_RETURN_BOOL(value);
        }
        static int t_AbstractMultipleLinearRegression_set__noIntercept(t_AbstractMultipleLinearRegression *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setNoIntercept(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "noIntercept", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *PiecewiseBicubicSplineInterpolator::class$ = NULL;
        jmethodID *PiecewiseBicubicSplineInterpolator::mids$ = NULL;
        bool PiecewiseBicubicSplineInterpolator::live$ = false;

        jclass PiecewiseBicubicSplineInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_bb79500d2ea11bdb] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PiecewiseBicubicSplineInterpolator::PiecewiseBicubicSplineInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::hipparchus::analysis::interpolation::PiecewiseBicubicSplineInterpolatingFunction PiecewiseBicubicSplineInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::interpolation::PiecewiseBicubicSplineInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_bb79500d2ea11bdb], a0.this$, a1.this$, a2.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        static PyObject *t_PiecewiseBicubicSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PiecewiseBicubicSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PiecewiseBicubicSplineInterpolator_init_(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PiecewiseBicubicSplineInterpolator_interpolate(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args);

        static PyMethodDef t_PiecewiseBicubicSplineInterpolator__methods_[] = {
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PiecewiseBicubicSplineInterpolator)[] = {
          { Py_tp_methods, t_PiecewiseBicubicSplineInterpolator__methods_ },
          { Py_tp_init, (void *) t_PiecewiseBicubicSplineInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PiecewiseBicubicSplineInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PiecewiseBicubicSplineInterpolator, t_PiecewiseBicubicSplineInterpolator, PiecewiseBicubicSplineInterpolator);

        void t_PiecewiseBicubicSplineInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(PiecewiseBicubicSplineInterpolator), &PY_TYPE_DEF(PiecewiseBicubicSplineInterpolator), module, "PiecewiseBicubicSplineInterpolator", 0);
        }

        void t_PiecewiseBicubicSplineInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolator), "class_", make_descriptor(PiecewiseBicubicSplineInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolator), "wrapfn_", make_descriptor(t_PiecewiseBicubicSplineInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PiecewiseBicubicSplineInterpolator::initializeClass, 1)))
            return NULL;
          return t_PiecewiseBicubicSplineInterpolator::wrap_Object(PiecewiseBicubicSplineInterpolator(((t_PiecewiseBicubicSplineInterpolator *) arg)->object.this$));
        }
        static PyObject *t_PiecewiseBicubicSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PiecewiseBicubicSplineInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PiecewiseBicubicSplineInterpolator_init_(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args, PyObject *kwds)
        {
          PiecewiseBicubicSplineInterpolator object((jobject) NULL);

          INT_CALL(object = PiecewiseBicubicSplineInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolator_interpolate(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::PiecewiseBicubicSplineInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::interpolation::t_PiecewiseBicubicSplineInterpolatingFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/PocMethodFacade.h"
#include "org/orekit/files/ccsds/definitions/PocMethodFacade.h"
#include "org/orekit/files/ccsds/definitions/PocMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *PocMethodFacade::class$ = NULL;
          jmethodID *PocMethodFacade::mids$ = NULL;
          bool PocMethodFacade::live$ = false;

          jclass PocMethodFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/PocMethodFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b19b88f05948e21e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/PocMethodType;)V");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getType_c2b5c6ffc15c5f1d] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/definitions/PocMethodType;");
              mids$[mid_parse_0b0cdec4aea9a3aa] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/PocMethodFacade;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PocMethodFacade::PocMethodFacade(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::PocMethodType & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b19b88f05948e21e, a0.this$, a1.this$)) {}

          ::java::lang::String PocMethodFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }

          ::org::orekit::files::ccsds::definitions::PocMethodType PocMethodFacade::getType() const
          {
            return ::org::orekit::files::ccsds::definitions::PocMethodType(env->callObjectMethod(this$, mids$[mid_getType_c2b5c6ffc15c5f1d]));
          }

          PocMethodFacade PocMethodFacade::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return PocMethodFacade(env->callStaticObjectMethod(cls, mids$[mid_parse_0b0cdec4aea9a3aa], a0.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          static PyObject *t_PocMethodFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PocMethodFacade_init_(t_PocMethodFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PocMethodFacade_getName(t_PocMethodFacade *self);
          static PyObject *t_PocMethodFacade_getType(t_PocMethodFacade *self);
          static PyObject *t_PocMethodFacade_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PocMethodFacade_get__name(t_PocMethodFacade *self, void *data);
          static PyObject *t_PocMethodFacade_get__type(t_PocMethodFacade *self, void *data);
          static PyGetSetDef t_PocMethodFacade__fields_[] = {
            DECLARE_GET_FIELD(t_PocMethodFacade, name),
            DECLARE_GET_FIELD(t_PocMethodFacade, type),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PocMethodFacade__methods_[] = {
            DECLARE_METHOD(t_PocMethodFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PocMethodFacade, getName, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodFacade, getType, METH_NOARGS),
            DECLARE_METHOD(t_PocMethodFacade, parse, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PocMethodFacade)[] = {
            { Py_tp_methods, t_PocMethodFacade__methods_ },
            { Py_tp_init, (void *) t_PocMethodFacade_init_ },
            { Py_tp_getset, t_PocMethodFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PocMethodFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PocMethodFacade, t_PocMethodFacade, PocMethodFacade);

          void t_PocMethodFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(PocMethodFacade), &PY_TYPE_DEF(PocMethodFacade), module, "PocMethodFacade", 0);
          }

          void t_PocMethodFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodFacade), "class_", make_descriptor(PocMethodFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodFacade), "wrapfn_", make_descriptor(t_PocMethodFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PocMethodFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PocMethodFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PocMethodFacade::initializeClass, 1)))
              return NULL;
            return t_PocMethodFacade::wrap_Object(PocMethodFacade(((t_PocMethodFacade *) arg)->object.this$));
          }
          static PyObject *t_PocMethodFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PocMethodFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PocMethodFacade_init_(t_PocMethodFacade *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::PocMethodType a1((jobject) NULL);
            PyTypeObject **p1;
            PocMethodFacade object((jobject) NULL);

            if (!parseArgs(args, "sK", ::org::orekit::files::ccsds::definitions::PocMethodType::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_PocMethodType::parameters_))
            {
              INT_CALL(object = PocMethodFacade(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PocMethodFacade_getName(t_PocMethodFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_PocMethodFacade_getType(t_PocMethodFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::PocMethodType result((jobject) NULL);
            OBJ_CALL(result = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(result);
          }

          static PyObject *t_PocMethodFacade_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            PocMethodFacade result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::PocMethodFacade::parse(a0));
              return t_PocMethodFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_PocMethodFacade_get__name(t_PocMethodFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_PocMethodFacade_get__type(t_PocMethodFacade *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::PocMethodType value((jobject) NULL);
            OBJ_CALL(value = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_PocMethodType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/TokenType.h"
#include "org/orekit/files/ccsds/utils/lexical/TokenType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *TokenType::class$ = NULL;
            jmethodID *TokenType::mids$ = NULL;
            bool TokenType::live$ = false;
            TokenType *TokenType::ENTRY = NULL;
            TokenType *TokenType::RAW_LINE = NULL;
            TokenType *TokenType::START = NULL;
            TokenType *TokenType::STOP = NULL;

            jclass TokenType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/TokenType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_8b8970dbde863c89] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/utils/lexical/TokenType;");
                mids$[mid_values_c1b5978cc805a95c] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/utils/lexical/TokenType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ENTRY = new TokenType(env->getStaticObjectField(cls, "ENTRY", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                RAW_LINE = new TokenType(env->getStaticObjectField(cls, "RAW_LINE", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                START = new TokenType(env->getStaticObjectField(cls, "START", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                STOP = new TokenType(env->getStaticObjectField(cls, "STOP", "Lorg/orekit/files/ccsds/utils/lexical/TokenType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TokenType TokenType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TokenType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8b8970dbde863c89], a0.this$));
            }

            JArray< TokenType > TokenType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TokenType >(env->callStaticObjectMethod(cls, mids$[mid_values_c1b5978cc805a95c]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            static PyObject *t_TokenType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TokenType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TokenType_of_(t_TokenType *self, PyObject *args);
            static PyObject *t_TokenType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TokenType_values(PyTypeObject *type);
            static PyObject *t_TokenType_get__parameters_(t_TokenType *self, void *data);
            static PyGetSetDef t_TokenType__fields_[] = {
              DECLARE_GET_FIELD(t_TokenType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TokenType__methods_[] = {
              DECLARE_METHOD(t_TokenType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TokenType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TokenType, of_, METH_VARARGS),
              DECLARE_METHOD(t_TokenType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TokenType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TokenType)[] = {
              { Py_tp_methods, t_TokenType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TokenType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TokenType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TokenType, t_TokenType, TokenType);
            PyObject *t_TokenType::wrap_Object(const TokenType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TokenType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TokenType *self = (t_TokenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TokenType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TokenType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TokenType *self = (t_TokenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TokenType::install(PyObject *module)
            {
              installType(&PY_TYPE(TokenType), &PY_TYPE_DEF(TokenType), module, "TokenType", 0);
            }

            void t_TokenType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "class_", make_descriptor(TokenType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "wrapfn_", make_descriptor(t_TokenType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "boxfn_", make_descriptor(boxObject));
              env->getClass(TokenType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "ENTRY", make_descriptor(t_TokenType::wrap_Object(*TokenType::ENTRY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "RAW_LINE", make_descriptor(t_TokenType::wrap_Object(*TokenType::RAW_LINE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "START", make_descriptor(t_TokenType::wrap_Object(*TokenType::START)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TokenType), "STOP", make_descriptor(t_TokenType::wrap_Object(*TokenType::STOP)));
            }

            static PyObject *t_TokenType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TokenType::initializeClass, 1)))
                return NULL;
              return t_TokenType::wrap_Object(TokenType(((t_TokenType *) arg)->object.this$));
            }
            static PyObject *t_TokenType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TokenType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TokenType_of_(t_TokenType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TokenType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TokenType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::utils::lexical::TokenType::valueOf(a0));
                return t_TokenType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TokenType_values(PyTypeObject *type)
            {
              JArray< TokenType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::utils::lexical::TokenType::values());
              return JArray<jobject>(result.this$).wrap(t_TokenType::wrap_jobject);
            }
            static PyObject *t_TokenType_get__parameters_(t_TokenType *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DSCompiler::class$ = NULL;
        jmethodID *DSCompiler::mids$ = NULL;
        bool DSCompiler::live$ = false;

        jclass DSCompiler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DSCompiler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_acos_abdc897ef1d0a3b6] = env->getMethodID(cls, "acos", "([DI[DI)V");
            mids$[mid_acos_2c59e5b700f764fd] = env->getMethodID(cls, "acos", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_acosh_abdc897ef1d0a3b6] = env->getMethodID(cls, "acosh", "([DI[DI)V");
            mids$[mid_acosh_2c59e5b700f764fd] = env->getMethodID(cls, "acosh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_add_43917ec5d52cee4e] = env->getMethodID(cls, "add", "([DI[DI[DI)V");
            mids$[mid_add_2176664b194d8149] = env->getMethodID(cls, "add", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_asin_abdc897ef1d0a3b6] = env->getMethodID(cls, "asin", "([DI[DI)V");
            mids$[mid_asin_2c59e5b700f764fd] = env->getMethodID(cls, "asin", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_asinh_abdc897ef1d0a3b6] = env->getMethodID(cls, "asinh", "([DI[DI)V");
            mids$[mid_asinh_2c59e5b700f764fd] = env->getMethodID(cls, "asinh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_atan_abdc897ef1d0a3b6] = env->getMethodID(cls, "atan", "([DI[DI)V");
            mids$[mid_atan_2c59e5b700f764fd] = env->getMethodID(cls, "atan", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_atan2_43917ec5d52cee4e] = env->getMethodID(cls, "atan2", "([DI[DI[DI)V");
            mids$[mid_atan2_2176664b194d8149] = env->getMethodID(cls, "atan2", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_atanh_abdc897ef1d0a3b6] = env->getMethodID(cls, "atanh", "([DI[DI)V");
            mids$[mid_atanh_2c59e5b700f764fd] = env->getMethodID(cls, "atanh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_checkCompatibility_f300d3e741518c7e] = env->getMethodID(cls, "checkCompatibility", "(Lorg/hipparchus/analysis/differentiation/DSCompiler;)V");
            mids$[mid_compose_de00a93bd8ef4f07] = env->getMethodID(cls, "compose", "([DI[D[DI)V");
            mids$[mid_compose_09274b1ecbfc1852] = env->getMethodID(cls, "compose", "([Lorg/hipparchus/CalculusFieldElement;I[D[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_compose_e5be4f2899cc8f6f] = env->getMethodID(cls, "compose", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_cos_abdc897ef1d0a3b6] = env->getMethodID(cls, "cos", "([DI[DI)V");
            mids$[mid_cos_2c59e5b700f764fd] = env->getMethodID(cls, "cos", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_cosh_abdc897ef1d0a3b6] = env->getMethodID(cls, "cosh", "([DI[DI)V");
            mids$[mid_cosh_2c59e5b700f764fd] = env->getMethodID(cls, "cosh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_divide_43917ec5d52cee4e] = env->getMethodID(cls, "divide", "([DI[DI[DI)V");
            mids$[mid_divide_2176664b194d8149] = env->getMethodID(cls, "divide", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_exp_abdc897ef1d0a3b6] = env->getMethodID(cls, "exp", "([DI[DI)V");
            mids$[mid_exp_2c59e5b700f764fd] = env->getMethodID(cls, "exp", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_expm1_abdc897ef1d0a3b6] = env->getMethodID(cls, "expm1", "([DI[DI)V");
            mids$[mid_expm1_2c59e5b700f764fd] = env->getMethodID(cls, "expm1", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_getCompiler_2aaa924bc43e4178] = env->getStaticMethodID(cls, "getCompiler", "(II)Lorg/hipparchus/analysis/differentiation/DSCompiler;");
            mids$[mid_getFreeParameters_f2f64475e4580546] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivativeIndex_5c5c9df37b0af581] = env->getMethodID(cls, "getPartialDerivativeIndex", "([I)I");
            mids$[mid_getPartialDerivativeOrders_d7f52bcc4a12ae58] = env->getMethodID(cls, "getPartialDerivativeOrders", "(I)[I");
            mids$[mid_getPartialDerivativeOrdersSum_38565d58479aa24a] = env->getMethodID(cls, "getPartialDerivativeOrdersSum", "(I)I");
            mids$[mid_getSize_f2f64475e4580546] = env->getMethodID(cls, "getSize", "()I");
            mids$[mid_linearCombination_f6fc2fb899672786] = env->getMethodID(cls, "linearCombination", "(D[DID[DI[DI)V");
            mids$[mid_linearCombination_e737b2c342ced772] = env->getMethodID(cls, "linearCombination", "(D[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_80dfd6c6f7c08dab] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_dfe0eee1fbf295aa] = env->getMethodID(cls, "linearCombination", "(D[DID[DID[DI[DI)V");
            mids$[mid_linearCombination_bb20533b29f62e58] = env->getMethodID(cls, "linearCombination", "(D[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_2759abbce2ac2c32] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_da62b776c453f88a] = env->getMethodID(cls, "linearCombination", "(D[DID[DID[DID[DI[DI)V");
            mids$[mid_linearCombination_c64a31724cdff328] = env->getMethodID(cls, "linearCombination", "(D[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_linearCombination_acdff3b3879274c2] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_log_abdc897ef1d0a3b6] = env->getMethodID(cls, "log", "([DI[DI)V");
            mids$[mid_log_2c59e5b700f764fd] = env->getMethodID(cls, "log", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_log10_abdc897ef1d0a3b6] = env->getMethodID(cls, "log10", "([DI[DI)V");
            mids$[mid_log10_2c59e5b700f764fd] = env->getMethodID(cls, "log10", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_log1p_abdc897ef1d0a3b6] = env->getMethodID(cls, "log1p", "([DI[DI)V");
            mids$[mid_log1p_2c59e5b700f764fd] = env->getMethodID(cls, "log1p", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_multiply_43917ec5d52cee4e] = env->getMethodID(cls, "multiply", "([DI[DI[DI)V");
            mids$[mid_multiply_2176664b194d8149] = env->getMethodID(cls, "multiply", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_5093c2ed2b93b86d] = env->getMethodID(cls, "pow", "(D[DI[DI)V");
            mids$[mid_pow_8ddf7d9e15a30ad0] = env->getMethodID(cls, "pow", "(D[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_e7375ab0cb0b1603] = env->getMethodID(cls, "pow", "([DID[DI)V");
            mids$[mid_pow_569d6c57dfcd05f5] = env->getMethodID(cls, "pow", "([DII[DI)V");
            mids$[mid_pow_c7219807463ed432] = env->getMethodID(cls, "pow", "([Lorg/hipparchus/CalculusFieldElement;ID[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_a19ff1c7367ec783] = env->getMethodID(cls, "pow", "([Lorg/hipparchus/CalculusFieldElement;II[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_pow_43917ec5d52cee4e] = env->getMethodID(cls, "pow", "([DI[DI[DI)V");
            mids$[mid_pow_2176664b194d8149] = env->getMethodID(cls, "pow", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_rebase_9c89f32ad8b8fec0] = env->getMethodID(cls, "rebase", "([DILorg/hipparchus/analysis/differentiation/DSCompiler;[D[DI)V");
            mids$[mid_rebase_e55f63420730d3c0] = env->getMethodID(cls, "rebase", "([Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/analysis/differentiation/DSCompiler;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_reciprocal_abdc897ef1d0a3b6] = env->getMethodID(cls, "reciprocal", "([DI[DI)V");
            mids$[mid_reciprocal_2c59e5b700f764fd] = env->getMethodID(cls, "reciprocal", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_remainder_43917ec5d52cee4e] = env->getMethodID(cls, "remainder", "([DI[DI[DI)V");
            mids$[mid_remainder_2176664b194d8149] = env->getMethodID(cls, "remainder", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_rootN_569d6c57dfcd05f5] = env->getMethodID(cls, "rootN", "([DII[DI)V");
            mids$[mid_rootN_a19ff1c7367ec783] = env->getMethodID(cls, "rootN", "([Lorg/hipparchus/CalculusFieldElement;II[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sin_abdc897ef1d0a3b6] = env->getMethodID(cls, "sin", "([DI[DI)V");
            mids$[mid_sin_2c59e5b700f764fd] = env->getMethodID(cls, "sin", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sinCos_43917ec5d52cee4e] = env->getMethodID(cls, "sinCos", "([DI[DI[DI)V");
            mids$[mid_sinCos_2176664b194d8149] = env->getMethodID(cls, "sinCos", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sinh_abdc897ef1d0a3b6] = env->getMethodID(cls, "sinh", "([DI[DI)V");
            mids$[mid_sinh_2c59e5b700f764fd] = env->getMethodID(cls, "sinh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sinhCosh_43917ec5d52cee4e] = env->getMethodID(cls, "sinhCosh", "([DI[DI[DI)V");
            mids$[mid_sinhCosh_2176664b194d8149] = env->getMethodID(cls, "sinhCosh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_sqrt_abdc897ef1d0a3b6] = env->getMethodID(cls, "sqrt", "([DI[DI)V");
            mids$[mid_sqrt_2c59e5b700f764fd] = env->getMethodID(cls, "sqrt", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_subtract_43917ec5d52cee4e] = env->getMethodID(cls, "subtract", "([DI[DI[DI)V");
            mids$[mid_subtract_2176664b194d8149] = env->getMethodID(cls, "subtract", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_tan_abdc897ef1d0a3b6] = env->getMethodID(cls, "tan", "([DI[DI)V");
            mids$[mid_tan_2c59e5b700f764fd] = env->getMethodID(cls, "tan", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_tanh_abdc897ef1d0a3b6] = env->getMethodID(cls, "tanh", "([DI[DI)V");
            mids$[mid_tanh_2c59e5b700f764fd] = env->getMethodID(cls, "tanh", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;I)V");
            mids$[mid_taylor_fdb3704d4e07ca46] = env->getMethodID(cls, "taylor", "([DI[D)D");
            mids$[mid_taylor_b87ff4044cd8f999] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;I[D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_61ef775199b2b6d6] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;I[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void DSCompiler::acos(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acos_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::acos(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acos_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::acosh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acosh_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::acosh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_acosh_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::add(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_add_43917ec5d52cee4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::add(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_add_2176664b194d8149], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::asin(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asin_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::asin(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asin_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::asinh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asinh_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::asinh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_asinh_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atan(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atan_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atan(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atan_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atan2(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_atan2_43917ec5d52cee4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::atan2(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_atan2_2176664b194d8149], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::atanh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atanh_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::atanh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_atanh_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::checkCompatibility(const DSCompiler & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_checkCompatibility_f300d3e741518c7e], a0.this$);
        }

        void DSCompiler::compose(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_compose_de00a93bd8ef4f07], a0.this$, a1, a2.this$, a3.this$, a4);
        }

        void DSCompiler::compose(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< jdouble > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_compose_09274b1ecbfc1852], a0.this$, a1, a2.this$, a3.this$, a4);
        }

        void DSCompiler::compose(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_compose_e5be4f2899cc8f6f], a0.this$, a1, a2.this$, a3.this$, a4);
        }

        void DSCompiler::cos(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cos_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::cos(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cos_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::cosh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cosh_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::cosh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_cosh_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::divide(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_divide_43917ec5d52cee4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::divide(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_divide_2176664b194d8149], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::exp(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_exp_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::exp(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_exp_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::expm1(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_expm1_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::expm1(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_expm1_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        DSCompiler DSCompiler::getCompiler(jint a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return DSCompiler(env->callStaticObjectMethod(cls, mids$[mid_getCompiler_2aaa924bc43e4178], a0, a1));
        }

        jint DSCompiler::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_f2f64475e4580546]);
        }

        jint DSCompiler::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
        }

        jint DSCompiler::getPartialDerivativeIndex(const JArray< jint > & a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getPartialDerivativeIndex_5c5c9df37b0af581], a0.this$);
        }

        JArray< jint > DSCompiler::getPartialDerivativeOrders(jint a0) const
        {
          return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPartialDerivativeOrders_d7f52bcc4a12ae58], a0));
        }

        jint DSCompiler::getPartialDerivativeOrdersSum(jint a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getPartialDerivativeOrdersSum_38565d58479aa24a], a0);
        }

        jint DSCompiler::getSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSize_f2f64475e4580546]);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< jdouble > & a1, jint a2, jdouble a3, const JArray< jdouble > & a4, jint a5, const JArray< jdouble > & a6, jint a7) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_f6fc2fb899672786], a0, a1.this$, a2, a3, a4.this$, a5, a6.this$, a7);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, jdouble a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const JArray< ::org::hipparchus::CalculusFieldElement > & a6, jint a7) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_e737b2c342ced772], a0, a1.this$, a2, a3, a4.this$, a5, a6.this$, a7);
        }

        void DSCompiler::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const ::org::hipparchus::CalculusFieldElement & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const JArray< ::org::hipparchus::CalculusFieldElement > & a6, jint a7) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_80dfd6c6f7c08dab], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< jdouble > & a1, jint a2, jdouble a3, const JArray< jdouble > & a4, jint a5, jdouble a6, const JArray< jdouble > & a7, jint a8, const JArray< jdouble > & a9, jint a10) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_dfe0eee1fbf295aa], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9.this$, a10);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, jdouble a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, jdouble a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, const JArray< ::org::hipparchus::CalculusFieldElement > & a9, jint a10) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_bb20533b29f62e58], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9.this$, a10);
        }

        void DSCompiler::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const ::org::hipparchus::CalculusFieldElement & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const ::org::hipparchus::CalculusFieldElement & a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, const JArray< ::org::hipparchus::CalculusFieldElement > & a9, jint a10) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_2759abbce2ac2c32], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7.this$, a8, a9.this$, a10);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< jdouble > & a1, jint a2, jdouble a3, const JArray< jdouble > & a4, jint a5, jdouble a6, const JArray< jdouble > & a7, jint a8, jdouble a9, const JArray< jdouble > & a10, jint a11, const JArray< jdouble > & a12, jint a13) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_da62b776c453f88a], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10.this$, a11, a12.this$, a13);
        }

        void DSCompiler::linearCombination(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, jdouble a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, jdouble a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, jdouble a9, const JArray< ::org::hipparchus::CalculusFieldElement > & a10, jint a11, const JArray< ::org::hipparchus::CalculusFieldElement > & a12, jint a13) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_c64a31724cdff328], a0, a1.this$, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10.this$, a11, a12.this$, a13);
        }

        void DSCompiler::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const ::org::hipparchus::CalculusFieldElement & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5, const ::org::hipparchus::CalculusFieldElement & a6, const JArray< ::org::hipparchus::CalculusFieldElement > & a7, jint a8, const ::org::hipparchus::CalculusFieldElement & a9, const JArray< ::org::hipparchus::CalculusFieldElement > & a10, jint a11, const JArray< ::org::hipparchus::CalculusFieldElement > & a12, jint a13) const
        {
          env->callVoidMethod(this$, mids$[mid_linearCombination_acdff3b3879274c2], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7.this$, a8, a9.this$, a10.this$, a11, a12.this$, a13);
        }

        void DSCompiler::log(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log10(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log10_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log10(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log10_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log1p(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log1p_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::log1p(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_log1p_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::multiply(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_multiply_43917ec5d52cee4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::multiply(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_multiply_2176664b194d8149], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::pow(jdouble a0, const JArray< jdouble > & a1, jint a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_5093c2ed2b93b86d], a0, a1.this$, a2, a3.this$, a4);
        }

        void DSCompiler::pow(jdouble a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, jint a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_8ddf7d9e15a30ad0], a0, a1.this$, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< jdouble > & a0, jint a1, jdouble a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_e7375ab0cb0b1603], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_569d6c57dfcd05f5], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, jdouble a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_c7219807463ed432], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, jint a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_a19ff1c7367ec783], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::pow(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_43917ec5d52cee4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::pow(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_pow_2176664b194d8149], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::rebase(const JArray< jdouble > & a0, jint a1, const DSCompiler & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_rebase_9c89f32ad8b8fec0], a0.this$, a1, a2.this$, a3.this$, a4.this$, a5);
        }

        void DSCompiler::rebase(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const DSCompiler & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_rebase_e55f63420730d3c0], a0.this$, a1, a2.this$, a3.this$, a4.this$, a5);
        }

        void DSCompiler::reciprocal(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_reciprocal_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::reciprocal(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_reciprocal_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::remainder(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_remainder_43917ec5d52cee4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::remainder(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_remainder_2176664b194d8149], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::rootN(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_rootN_569d6c57dfcd05f5], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::rootN(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, jint a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3, jint a4) const
        {
          env->callVoidMethod(this$, mids$[mid_rootN_a19ff1c7367ec783], a0.this$, a1, a2, a3.this$, a4);
        }

        void DSCompiler::sin(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sin_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sin(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sin_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sinCos(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinCos_43917ec5d52cee4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sinCos(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinCos_2176664b194d8149], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sinh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sinh_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sinh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sinh_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sinhCosh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinhCosh_43917ec5d52cee4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sinhCosh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_sinhCosh_2176664b194d8149], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::sqrt(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sqrt_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::sqrt(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_sqrt_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::subtract(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3, const JArray< jdouble > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_subtract_43917ec5d52cee4e], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::subtract(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4, jint a5) const
        {
          env->callVoidMethod(this$, mids$[mid_subtract_2176664b194d8149], a0.this$, a1, a2.this$, a3, a4.this$, a5);
        }

        void DSCompiler::tan(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tan_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::tan(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tan_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::tanh(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tanh_abdc897ef1d0a3b6], a0.this$, a1, a2.this$, a3);
        }

        void DSCompiler::tanh(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_tanh_2c59e5b700f764fd], a0.this$, a1, a2.this$, a3);
        }

        jdouble DSCompiler::taylor(const JArray< jdouble > & a0, jint a1, const JArray< jdouble > & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_fdb3704d4e07ca46], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::CalculusFieldElement DSCompiler::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< jdouble > & a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_b87ff4044cd8f999], a0.this$, a1, a2.this$));
        }

        ::org::hipparchus::CalculusFieldElement DSCompiler::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, jint a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_61ef775199b2b6d6], a0.this$, a1, a2.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {
        static PyObject *t_DSCompiler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSCompiler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSCompiler_acos(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_acosh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_add(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_asin(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_asinh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_atan(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_atan2(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_atanh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_checkCompatibility(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_compose(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_cos(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_cosh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_divide(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_exp(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_expm1(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_getCompiler(PyTypeObject *type, PyObject *args);
        static PyObject *t_DSCompiler_getFreeParameters(t_DSCompiler *self);
        static PyObject *t_DSCompiler_getOrder(t_DSCompiler *self);
        static PyObject *t_DSCompiler_getPartialDerivativeIndex(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_getPartialDerivativeOrders(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_getPartialDerivativeOrdersSum(t_DSCompiler *self, PyObject *arg);
        static PyObject *t_DSCompiler_getSize(t_DSCompiler *self);
        static PyObject *t_DSCompiler_linearCombination(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_log(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_log10(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_log1p(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_multiply(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_pow(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_rebase(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_reciprocal(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_remainder(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_rootN(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sin(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sinCos(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sinh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sinhCosh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_sqrt(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_subtract(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_tan(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_tanh(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_taylor(t_DSCompiler *self, PyObject *args);
        static PyObject *t_DSCompiler_get__freeParameters(t_DSCompiler *self, void *data);
        static PyObject *t_DSCompiler_get__order(t_DSCompiler *self, void *data);
        static PyObject *t_DSCompiler_get__size(t_DSCompiler *self, void *data);
        static PyGetSetDef t_DSCompiler__fields_[] = {
          DECLARE_GET_FIELD(t_DSCompiler, freeParameters),
          DECLARE_GET_FIELD(t_DSCompiler, order),
          DECLARE_GET_FIELD(t_DSCompiler, size),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSCompiler__methods_[] = {
          DECLARE_METHOD(t_DSCompiler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSCompiler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSCompiler, acos, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, acosh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, add, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, asin, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, asinh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, atan, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, atan2, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, atanh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, checkCompatibility, METH_O),
          DECLARE_METHOD(t_DSCompiler, compose, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, cos, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, cosh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, divide, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, exp, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, expm1, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, getCompiler, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DSCompiler, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_DSCompiler, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_DSCompiler, getPartialDerivativeIndex, METH_O),
          DECLARE_METHOD(t_DSCompiler, getPartialDerivativeOrders, METH_O),
          DECLARE_METHOD(t_DSCompiler, getPartialDerivativeOrdersSum, METH_O),
          DECLARE_METHOD(t_DSCompiler, getSize, METH_NOARGS),
          DECLARE_METHOD(t_DSCompiler, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, log, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, log10, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, log1p, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, multiply, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, pow, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, rebase, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, remainder, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, rootN, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sin, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sinh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, subtract, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, tan, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, tanh, METH_VARARGS),
          DECLARE_METHOD(t_DSCompiler, taylor, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSCompiler)[] = {
          { Py_tp_methods, t_DSCompiler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DSCompiler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSCompiler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DSCompiler, t_DSCompiler, DSCompiler);

        void t_DSCompiler::install(PyObject *module)
        {
          installType(&PY_TYPE(DSCompiler), &PY_TYPE_DEF(DSCompiler), module, "DSCompiler", 0);
        }

        void t_DSCompiler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSCompiler), "class_", make_descriptor(DSCompiler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSCompiler), "wrapfn_", make_descriptor(t_DSCompiler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSCompiler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSCompiler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSCompiler::initializeClass, 1)))
            return NULL;
          return t_DSCompiler::wrap_Object(DSCompiler(((t_DSCompiler *) arg)->object.this$));
        }
        static PyObject *t_DSCompiler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSCompiler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DSCompiler_acos(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.acos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.acos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acos", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_acosh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.acosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.acosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acosh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_add(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.add(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.add(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_asin(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.asin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.asin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "asin", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_asinh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.asinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.asinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "asinh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_atan(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.atan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.atan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "atan", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_atan2(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.atan2(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.atan2(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_atanh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.atanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.atanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "atanh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_checkCompatibility(t_DSCompiler *self, PyObject *arg)
        {
          DSCompiler a0((jobject) NULL);

          if (!parseArg(arg, "k", DSCompiler::initializeClass, &a0))
          {
            OBJ_CALL(self->object.checkCompatibility(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "checkCompatibility", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_compose(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DI[D[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.compose(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KI[D[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.compose(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KI[K[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.compose(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_cos(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.cos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.cos(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "cos", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_cosh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.cosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.cosh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "cosh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_divide(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.divide(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.divide(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_exp(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.exp(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.exp(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "exp", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_expm1(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.expm1(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.expm1(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "expm1", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_getCompiler(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          DSCompiler result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::DSCompiler::getCompiler(a0, a1));
            return t_DSCompiler::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getCompiler", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_getFreeParameters(t_DSCompiler *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DSCompiler_getOrder(t_DSCompiler *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DSCompiler_getPartialDerivativeIndex(t_DSCompiler *self, PyObject *arg)
        {
          JArray< jint > a0((jobject) NULL);
          jint result;

          if (!parseArg(arg, "[I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivativeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivativeIndex", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_getPartialDerivativeOrders(t_DSCompiler *self, PyObject *arg)
        {
          jint a0;
          JArray< jint > result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivativeOrders(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivativeOrders", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_getPartialDerivativeOrdersSum(t_DSCompiler *self, PyObject *arg)
        {
          jint a0;
          jint result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialDerivativeOrdersSum(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivativeOrdersSum", arg);
          return NULL;
        }

        static PyObject *t_DSCompiler_getSize(t_DSCompiler *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DSCompiler_linearCombination(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;
              JArray< jdouble > a6((jobject) NULL);
              jint a7;

              if (!parseArgs(args, "D[DID[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              jdouble a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              JArray< ::org::hipparchus::CalculusFieldElement > a6((jobject) NULL);
              PyTypeObject **p6;
              jint a7;

              if (!parseArgs(args, "D[KID[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              JArray< ::org::hipparchus::CalculusFieldElement > a6((jobject) NULL);
              PyTypeObject **p6;
              jint a7;

              if (!parseArgs(args, "K[KIK[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                Py_RETURN_NONE;
              }
            }
            break;
           case 11:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;
              jdouble a6;
              JArray< jdouble > a7((jobject) NULL);
              jint a8;
              JArray< jdouble > a9((jobject) NULL);
              jint a10;

              if (!parseArgs(args, "D[DID[DID[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              jdouble a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              jdouble a6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              JArray< ::org::hipparchus::CalculusFieldElement > a9((jobject) NULL);
              PyTypeObject **p9;
              jint a10;

              if (!parseArgs(args, "D[KID[KID[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
              PyTypeObject **p6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              JArray< ::org::hipparchus::CalculusFieldElement > a9((jobject) NULL);
              PyTypeObject **p9;
              jint a10;

              if (!parseArgs(args, "K[KIK[KIK[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                Py_RETURN_NONE;
              }
            }
            break;
           case 14:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;
              jdouble a6;
              JArray< jdouble > a7((jobject) NULL);
              jint a8;
              jdouble a9;
              JArray< jdouble > a10((jobject) NULL);
              jint a11;
              JArray< jdouble > a12((jobject) NULL);
              jint a13;

              if (!parseArgs(args, "D[DID[DID[DID[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              jdouble a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              jdouble a6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              jdouble a9;
              JArray< ::org::hipparchus::CalculusFieldElement > a10((jobject) NULL);
              PyTypeObject **p10;
              jint a11;
              JArray< ::org::hipparchus::CalculusFieldElement > a12((jobject) NULL);
              PyTypeObject **p12;
              jint a13;

              if (!parseArgs(args, "D[KID[KID[KID[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
              PyTypeObject **p6;
              JArray< ::org::hipparchus::CalculusFieldElement > a7((jobject) NULL);
              PyTypeObject **p7;
              jint a8;
              ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
              PyTypeObject **p9;
              JArray< ::org::hipparchus::CalculusFieldElement > a10((jobject) NULL);
              PyTypeObject **p10;
              jint a11;
              JArray< ::org::hipparchus::CalculusFieldElement > a12((jobject) NULL);
              PyTypeObject **p12;
              jint a13;

              if (!parseArgs(args, "K[KIK[KIK[KIK[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &a12, &p12, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a13))
              {
                OBJ_CALL(self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_log(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.log(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.log(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "log", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_log10(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.log10(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.log10(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "log10", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_log1p(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.log1p(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.log1p(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "log1p", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_multiply(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.multiply(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.multiply(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_pow(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DID[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KID[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DII[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KII[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "D[DI[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              jdouble a0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "D[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            break;
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.pow(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_rebase(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              DSCompiler a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DIk[D[DI", DSCompiler::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.rebase(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              DSCompiler a2((jobject) NULL);
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KIk[K[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, DSCompiler::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.rebase(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "rebase", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_reciprocal(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.reciprocal(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.reciprocal(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "reciprocal", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_remainder(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.remainder(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.remainder(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_rootN(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              jint a2;
              JArray< jdouble > a3((jobject) NULL);
              jint a4;

              if (!parseArgs(args, "[DII[DI", &a0, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(self->object.rootN(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
              PyTypeObject **p3;
              jint a4;

              if (!parseArgs(args, "[KII[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
              {
                OBJ_CALL(self->object.rootN(a0, a1, a2, a3, a4));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sin(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.sin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.sin(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sin", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sinCos(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.sinCos(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.sinCos(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sinCos", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sinh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.sinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.sinh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sinh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sinhCosh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.sinhCosh(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.sinhCosh(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sinhCosh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_sqrt(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.sqrt(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.sqrt(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sqrt", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_subtract(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;
              JArray< jdouble > a4((jobject) NULL);
              jint a5;

              if (!parseArgs(args, "[DI[DI[DI", &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(self->object.subtract(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;
              JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;

              if (!parseArgs(args, "[KI[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
              {
                OBJ_CALL(self->object.subtract(a0, a1, a2, a3, a4, a5));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_tan(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.tan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.tan(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "tan", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_tanh(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jint a3;

              if (!parseArgs(args, "[DI[DI", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.tanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              jint a3;

              if (!parseArgs(args, "[KI[KI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                OBJ_CALL(self->object.tanh(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "tanh", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_taylor(t_DSCompiler *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[DI[D", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.taylor(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< jdouble > a2((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[KI[D", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.taylor(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[KI[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_DSCompiler_get__freeParameters(t_DSCompiler *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DSCompiler_get__order(t_DSCompiler *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_DSCompiler_get__size(t_DSCompiler *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSize());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventEnablingPredicateFilter.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEnablingPredicate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventEnablingPredicateFilter::class$ = NULL;
        jmethodID *FieldEventEnablingPredicateFilter::mids$ = NULL;
        bool FieldEventEnablingPredicateFilter::live$ = false;

        jclass FieldEventEnablingPredicateFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventEnablingPredicateFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_92fea752e8d82e8c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/events/FieldEnablingPredicate;)V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getDetector_9afb3f6694da2222] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_9e68db2b52de9086] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldEventEnablingPredicateFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventEnablingPredicateFilter::FieldEventEnablingPredicateFilter(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::propagation::events::FieldEnablingPredicate & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_92fea752e8d82e8c, a0.this$, a1.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldEventEnablingPredicateFilter::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventEnablingPredicateFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_9afb3f6694da2222]));
        }

        void FieldEventEnablingPredicateFilter::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_FieldEventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventEnablingPredicateFilter_of_(t_FieldEventEnablingPredicateFilter *self, PyObject *args);
        static int t_FieldEventEnablingPredicateFilter_init_(t_FieldEventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventEnablingPredicateFilter_g(t_FieldEventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_FieldEventEnablingPredicateFilter_getDetector(t_FieldEventEnablingPredicateFilter *self);
        static PyObject *t_FieldEventEnablingPredicateFilter_init(t_FieldEventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_FieldEventEnablingPredicateFilter_get__detector(t_FieldEventEnablingPredicateFilter *self, void *data);
        static PyObject *t_FieldEventEnablingPredicateFilter_get__parameters_(t_FieldEventEnablingPredicateFilter *self, void *data);
        static PyGetSetDef t_FieldEventEnablingPredicateFilter__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventEnablingPredicateFilter, detector),
          DECLARE_GET_FIELD(t_FieldEventEnablingPredicateFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventEnablingPredicateFilter__methods_[] = {
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventEnablingPredicateFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventEnablingPredicateFilter)[] = {
          { Py_tp_methods, t_FieldEventEnablingPredicateFilter__methods_ },
          { Py_tp_init, (void *) t_FieldEventEnablingPredicateFilter_init_ },
          { Py_tp_getset, t_FieldEventEnablingPredicateFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventEnablingPredicateFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldEventEnablingPredicateFilter, t_FieldEventEnablingPredicateFilter, FieldEventEnablingPredicateFilter);
        PyObject *t_FieldEventEnablingPredicateFilter::wrap_Object(const FieldEventEnablingPredicateFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventEnablingPredicateFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventEnablingPredicateFilter *self = (t_FieldEventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventEnablingPredicateFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventEnablingPredicateFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventEnablingPredicateFilter *self = (t_FieldEventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventEnablingPredicateFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventEnablingPredicateFilter), &PY_TYPE_DEF(FieldEventEnablingPredicateFilter), module, "FieldEventEnablingPredicateFilter", 0);
        }

        void t_FieldEventEnablingPredicateFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventEnablingPredicateFilter), "class_", make_descriptor(FieldEventEnablingPredicateFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventEnablingPredicateFilter), "wrapfn_", make_descriptor(t_FieldEventEnablingPredicateFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventEnablingPredicateFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventEnablingPredicateFilter::initializeClass, 1)))
            return NULL;
          return t_FieldEventEnablingPredicateFilter::wrap_Object(FieldEventEnablingPredicateFilter(((t_FieldEventEnablingPredicateFilter *) arg)->object.this$));
        }
        static PyObject *t_FieldEventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventEnablingPredicateFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_of_(t_FieldEventEnablingPredicateFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventEnablingPredicateFilter_init_(t_FieldEventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldEnablingPredicate a1((jobject) NULL);
          PyTypeObject **p1;
          FieldEventEnablingPredicateFilter object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::propagation::events::FieldEnablingPredicate::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEnablingPredicate::parameters_))
          {
            INT_CALL(object = FieldEventEnablingPredicateFilter(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_g(t_FieldEventEnablingPredicateFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldEventEnablingPredicateFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_getDetector(t_FieldEventEnablingPredicateFilter *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_init(t_FieldEventEnablingPredicateFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldEventEnablingPredicateFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldEventEnablingPredicateFilter_get__parameters_(t_FieldEventEnablingPredicateFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventEnablingPredicateFilter_get__detector(t_FieldEventEnablingPredicateFilter *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/PythonFieldAdaptableInterval.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *PythonFieldAdaptableInterval::class$ = NULL;
        jmethodID *PythonFieldAdaptableInterval::mids$ = NULL;
        bool PythonFieldAdaptableInterval::live$ = false;

        jclass PythonFieldAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/PythonFieldAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_currentInterval_be4460dcb2e9b516] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/FieldSpacecraftState;)D");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonFieldAdaptableInterval::PythonFieldAdaptableInterval() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonFieldAdaptableInterval::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonFieldAdaptableInterval::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonFieldAdaptableInterval::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_PythonFieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldAdaptableInterval_of_(t_PythonFieldAdaptableInterval *self, PyObject *args);
        static int t_PythonFieldAdaptableInterval_init_(t_PythonFieldAdaptableInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldAdaptableInterval_finalize(t_PythonFieldAdaptableInterval *self);
        static PyObject *t_PythonFieldAdaptableInterval_pythonExtension(t_PythonFieldAdaptableInterval *self, PyObject *args);
        static jdouble JNICALL t_PythonFieldAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldAdaptableInterval_get__self(t_PythonFieldAdaptableInterval *self, void *data);
        static PyObject *t_PythonFieldAdaptableInterval_get__parameters_(t_PythonFieldAdaptableInterval *self, void *data);
        static PyGetSetDef t_PythonFieldAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldAdaptableInterval, self),
          DECLARE_GET_FIELD(t_PythonFieldAdaptableInterval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldAdaptableInterval, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldAdaptableInterval)[] = {
          { Py_tp_methods, t_PythonFieldAdaptableInterval__methods_ },
          { Py_tp_init, (void *) t_PythonFieldAdaptableInterval_init_ },
          { Py_tp_getset, t_PythonFieldAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldAdaptableInterval, t_PythonFieldAdaptableInterval, PythonFieldAdaptableInterval);
        PyObject *t_PythonFieldAdaptableInterval::wrap_Object(const PythonFieldAdaptableInterval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdaptableInterval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdaptableInterval *self = (t_PythonFieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonFieldAdaptableInterval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonFieldAdaptableInterval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonFieldAdaptableInterval *self = (t_PythonFieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonFieldAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldAdaptableInterval), &PY_TYPE_DEF(PythonFieldAdaptableInterval), module, "PythonFieldAdaptableInterval", 1);
        }

        void t_PythonFieldAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdaptableInterval), "class_", make_descriptor(PythonFieldAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdaptableInterval), "wrapfn_", make_descriptor(t_PythonFieldAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdaptableInterval), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldAdaptableInterval::initializeClass);
          JNINativeMethod methods[] = {
            { "currentInterval", "(Lorg/orekit/propagation/FieldSpacecraftState;)D", (void *) t_PythonFieldAdaptableInterval_currentInterval0 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldAdaptableInterval_pythonDecRef1 },
          };
          env->registerNatives(cls, methods, 2);
        }

        static PyObject *t_PythonFieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_PythonFieldAdaptableInterval::wrap_Object(PythonFieldAdaptableInterval(((t_PythonFieldAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonFieldAdaptableInterval_of_(t_PythonFieldAdaptableInterval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonFieldAdaptableInterval_init_(t_PythonFieldAdaptableInterval *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldAdaptableInterval object((jobject) NULL);

          INT_CALL(object = PythonFieldAdaptableInterval());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldAdaptableInterval_finalize(t_PythonFieldAdaptableInterval *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldAdaptableInterval_pythonExtension(t_PythonFieldAdaptableInterval *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jdouble JNICALL t_PythonFieldAdaptableInterval_currentInterval0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdaptableInterval::mids$[PythonFieldAdaptableInterval::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "currentInterval", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("currentInterval", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static void JNICALL t_PythonFieldAdaptableInterval_pythonDecRef1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdaptableInterval::mids$[PythonFieldAdaptableInterval::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldAdaptableInterval::mids$[PythonFieldAdaptableInterval::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldAdaptableInterval_get__self(t_PythonFieldAdaptableInterval *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
        static PyObject *t_PythonFieldAdaptableInterval_get__parameters_(t_PythonFieldAdaptableInterval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *OptimizationData::class$ = NULL;
      jmethodID *OptimizationData::mids$ = NULL;
      bool OptimizationData::live$ = false;

      jclass OptimizationData::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/OptimizationData");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_OptimizationData_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OptimizationData_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_OptimizationData__methods_[] = {
        DECLARE_METHOD(t_OptimizationData, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OptimizationData, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OptimizationData)[] = {
        { Py_tp_methods, t_OptimizationData__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OptimizationData)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OptimizationData, t_OptimizationData, OptimizationData);

      void t_OptimizationData::install(PyObject *module)
      {
        installType(&PY_TYPE(OptimizationData), &PY_TYPE_DEF(OptimizationData), module, "OptimizationData", 0);
      }

      void t_OptimizationData::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationData), "class_", make_descriptor(OptimizationData::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationData), "wrapfn_", make_descriptor(t_OptimizationData::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationData), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OptimizationData_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OptimizationData::initializeClass, 1)))
          return NULL;
        return t_OptimizationData::wrap_Object(OptimizationData(((t_OptimizationData *) arg)->object.this$));
      }
      static PyObject *t_OptimizationData_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OptimizationData::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *PolynomialFunctionMatrix::class$ = NULL;
              jmethodID *PolynomialFunctionMatrix::mids$ = NULL;
              bool PolynomialFunctionMatrix::live$ = false;

              jclass PolynomialFunctionMatrix::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_add_ad88da858853752c] = env->getMethodID(cls, "add", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;)Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_getElem_719ea6244b7f87f0] = env->getMethodID(cls, "getElem", "(II)Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
                  mids$[mid_getMatrixLine_bdf8e93e2b87418a] = env->getMethodID(cls, "getMatrixLine", "(I)[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;");
                  mids$[mid_multiply_ad88da858853752c] = env->getMethodID(cls, "multiply", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;)Lorg/orekit/propagation/semianalytical/dsst/utilities/hansen/PolynomialFunctionMatrix;");
                  mids$[mid_setElem_69234f814f3b439e] = env->getMethodID(cls, "setElem", "(IILorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
                  mids$[mid_setMatrix_b6b26e8a4079d308] = env->getMethodID(cls, "setMatrix", "([[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");
                  mids$[mid_setMatrixLine_9889bd0c7190633d] = env->getMethodID(cls, "setMatrixLine", "(I[Lorg/hipparchus/analysis/polynomials/PolynomialFunction;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PolynomialFunctionMatrix PolynomialFunctionMatrix::add(const PolynomialFunctionMatrix & a0) const
              {
                return PolynomialFunctionMatrix(env->callObjectMethod(this$, mids$[mid_add_ad88da858853752c], a0.this$));
              }

              ::org::hipparchus::analysis::polynomials::PolynomialFunction PolynomialFunctionMatrix::getElem(jint a0, jint a1) const
              {
                return ::org::hipparchus::analysis::polynomials::PolynomialFunction(env->callObjectMethod(this$, mids$[mid_getElem_719ea6244b7f87f0], a0, a1));
              }

              JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > PolynomialFunctionMatrix::getMatrixLine(jint a0) const
              {
                return JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction >(env->callObjectMethod(this$, mids$[mid_getMatrixLine_bdf8e93e2b87418a], a0));
              }

              PolynomialFunctionMatrix PolynomialFunctionMatrix::multiply(const PolynomialFunctionMatrix & a0) const
              {
                return PolynomialFunctionMatrix(env->callObjectMethod(this$, mids$[mid_multiply_ad88da858853752c], a0.this$));
              }

              void PolynomialFunctionMatrix::setElem(jint a0, jint a1, const ::org::hipparchus::analysis::polynomials::PolynomialFunction & a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setElem_69234f814f3b439e], a0, a1, a2.this$);
              }

              void PolynomialFunctionMatrix::setMatrix(const JArray< JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > > & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMatrix_b6b26e8a4079d308], a0.this$);
              }

              void PolynomialFunctionMatrix::setMatrixLine(jint a0, const JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setMatrixLine_9889bd0c7190633d], a0, a1.this$);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_PolynomialFunctionMatrix_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_add(t_PolynomialFunctionMatrix *self, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_getElem(t_PolynomialFunctionMatrix *self, PyObject *args);
              static PyObject *t_PolynomialFunctionMatrix_getMatrixLine(t_PolynomialFunctionMatrix *self, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_multiply(t_PolynomialFunctionMatrix *self, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_setElem(t_PolynomialFunctionMatrix *self, PyObject *args);
              static PyObject *t_PolynomialFunctionMatrix_setMatrix(t_PolynomialFunctionMatrix *self, PyObject *arg);
              static PyObject *t_PolynomialFunctionMatrix_setMatrixLine(t_PolynomialFunctionMatrix *self, PyObject *args);
              static int t_PolynomialFunctionMatrix_set__matrix(t_PolynomialFunctionMatrix *self, PyObject *arg, void *data);
              static PyGetSetDef t_PolynomialFunctionMatrix__fields_[] = {
                DECLARE_SET_FIELD(t_PolynomialFunctionMatrix, matrix),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PolynomialFunctionMatrix__methods_[] = {
                DECLARE_METHOD(t_PolynomialFunctionMatrix, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, add, METH_O),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, getElem, METH_VARARGS),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, getMatrixLine, METH_O),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, multiply, METH_O),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, setElem, METH_VARARGS),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, setMatrix, METH_O),
                DECLARE_METHOD(t_PolynomialFunctionMatrix, setMatrixLine, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PolynomialFunctionMatrix)[] = {
                { Py_tp_methods, t_PolynomialFunctionMatrix__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_PolynomialFunctionMatrix__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PolynomialFunctionMatrix)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(PolynomialFunctionMatrix, t_PolynomialFunctionMatrix, PolynomialFunctionMatrix);

              void t_PolynomialFunctionMatrix::install(PyObject *module)
              {
                installType(&PY_TYPE(PolynomialFunctionMatrix), &PY_TYPE_DEF(PolynomialFunctionMatrix), module, "PolynomialFunctionMatrix", 0);
              }

              void t_PolynomialFunctionMatrix::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionMatrix), "class_", make_descriptor(PolynomialFunctionMatrix::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionMatrix), "wrapfn_", make_descriptor(t_PolynomialFunctionMatrix::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialFunctionMatrix), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_PolynomialFunctionMatrix_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PolynomialFunctionMatrix::initializeClass, 1)))
                  return NULL;
                return t_PolynomialFunctionMatrix::wrap_Object(PolynomialFunctionMatrix(((t_PolynomialFunctionMatrix *) arg)->object.this$));
              }
              static PyObject *t_PolynomialFunctionMatrix_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PolynomialFunctionMatrix::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_PolynomialFunctionMatrix_add(t_PolynomialFunctionMatrix *self, PyObject *arg)
              {
                PolynomialFunctionMatrix a0((jobject) NULL);
                PolynomialFunctionMatrix result((jobject) NULL);

                if (!parseArg(arg, "k", PolynomialFunctionMatrix::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_PolynomialFunctionMatrix::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "add", arg);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_getElem(t_PolynomialFunctionMatrix *self, PyObject *args)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::analysis::polynomials::PolynomialFunction result((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getElem(a0, a1));
                  return ::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getElem", args);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_getMatrixLine(t_PolynomialFunctionMatrix *self, PyObject *arg)
              {
                jint a0;
                JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > result((jobject) NULL);

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(result = self->object.getMatrixLine(a0));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::polynomials::t_PolynomialFunction::wrap_jobject);
                }

                PyErr_SetArgsError((PyObject *) self, "getMatrixLine", arg);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_multiply(t_PolynomialFunctionMatrix *self, PyObject *arg)
              {
                PolynomialFunctionMatrix a0((jobject) NULL);
                PolynomialFunctionMatrix result((jobject) NULL);

                if (!parseArg(arg, "k", PolynomialFunctionMatrix::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.multiply(a0));
                  return t_PolynomialFunctionMatrix::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "multiply", arg);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_setElem(t_PolynomialFunctionMatrix *self, PyObject *args)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::analysis::polynomials::PolynomialFunction a2((jobject) NULL);

                if (!parseArgs(args, "IIk", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.setElem(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setElem", args);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_setMatrix(t_PolynomialFunctionMatrix *self, PyObject *arg)
              {
                JArray< JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > > a0((jobject) NULL);

                if (!parseArg(arg, "[[k", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setMatrix(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMatrix", arg);
                return NULL;
              }

              static PyObject *t_PolynomialFunctionMatrix_setMatrixLine(t_PolynomialFunctionMatrix *self, PyObject *args)
              {
                jint a0;
                JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > a1((jobject) NULL);

                if (!parseArgs(args, "I[k", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.setMatrixLine(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMatrixLine", args);
                return NULL;
              }

              static int t_PolynomialFunctionMatrix_set__matrix(t_PolynomialFunctionMatrix *self, PyObject *arg, void *data)
              {
                {
                  JArray< JArray< ::org::hipparchus::analysis::polynomials::PolynomialFunction > > value((jobject) NULL);
                  if (!parseArg(arg, "[[k", ::org::hipparchus::analysis::polynomials::PolynomialFunction::initializeClass, &value))
                  {
                    INT_CALL(self->object.setMatrix(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "matrix", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *FrameFacade::class$ = NULL;
          jmethodID *FrameFacade::mids$ = NULL;
          bool FrameFacade::live$ = false;

          jclass FrameFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/FrameFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f24302295efa6a9f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;Ljava/lang/String;)V");
              mids$[mid_asCelestialBodyFrame_00a4299572a8abf7] = env->getMethodID(cls, "asCelestialBodyFrame", "()Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_asFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "asFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_asOrbitRelativeFrame_e2b586b2f9e79328] = env->getMethodID(cls, "asOrbitRelativeFrame", "()Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");
              mids$[mid_asSpacecraftBodyFrame_c39ec70cc3f195d1] = env->getMethodID(cls, "asSpacecraftBodyFrame", "()Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getTransform_63f8c54cba6152e0] = env->getStaticMethodID(cls, "getTransform", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;Lorg/orekit/files/ccsds/definitions/FrameFacade;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinatesProvider;)Lorg/orekit/frames/Transform;");
              mids$[mid_map_2aaf6c049b4b1322] = env->getStaticMethodID(cls, "map", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ccsds/definitions/FrameFacade;");
              mids$[mid_parse_1d1c30b952268863] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;Lorg/orekit/utils/IERSConventions;ZLorg/orekit/data/DataContext;ZZZ)Lorg/orekit/files/ccsds/definitions/FrameFacade;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FrameFacade::FrameFacade(const ::org::orekit::frames::Frame & a0, const ::org::orekit::files::ccsds::definitions::CelestialBodyFrame & a1, const ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame & a2, const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame & a3, const ::java::lang::String & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f24302295efa6a9f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::orekit::files::ccsds::definitions::CelestialBodyFrame FrameFacade::asCelestialBodyFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::CelestialBodyFrame(env->callObjectMethod(this$, mids$[mid_asCelestialBodyFrame_00a4299572a8abf7]));
          }

          ::org::orekit::frames::Frame FrameFacade::asFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_asFrame_c8fe21bcdac65bf6]));
          }

          ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame FrameFacade::asOrbitRelativeFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame(env->callObjectMethod(this$, mids$[mid_asOrbitRelativeFrame_e2b586b2f9e79328]));
          }

          ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame FrameFacade::asSpacecraftBodyFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame(env->callObjectMethod(this$, mids$[mid_asSpacecraftBodyFrame_c39ec70cc3f195d1]));
          }

          ::java::lang::String FrameFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }

          ::org::orekit::frames::Transform FrameFacade::getTransform(const FrameFacade & a0, const FrameFacade & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::utils::PVCoordinatesProvider & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::frames::Transform(env->callStaticObjectMethod(cls, mids$[mid_getTransform_63f8c54cba6152e0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }

          FrameFacade FrameFacade::map(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FrameFacade(env->callStaticObjectMethod(cls, mids$[mid_map_2aaf6c049b4b1322], a0.this$));
          }

          FrameFacade FrameFacade::parse(const ::java::lang::String & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2, const ::org::orekit::data::DataContext & a3, jboolean a4, jboolean a5, jboolean a6)
          {
            jclass cls = env->getClass(initializeClass);
            return FrameFacade(env->callStaticObjectMethod(cls, mids$[mid_parse_1d1c30b952268863], a0.this$, a1.this$, a2, a3.this$, a4, a5, a6));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          static PyObject *t_FrameFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FrameFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FrameFacade_init_(t_FrameFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FrameFacade_asCelestialBodyFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_asFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_asOrbitRelativeFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_asSpacecraftBodyFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_getName(t_FrameFacade *self);
          static PyObject *t_FrameFacade_getTransform(PyTypeObject *type, PyObject *args);
          static PyObject *t_FrameFacade_map(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FrameFacade_parse(PyTypeObject *type, PyObject *args);
          static PyObject *t_FrameFacade_get__name(t_FrameFacade *self, void *data);
          static PyGetSetDef t_FrameFacade__fields_[] = {
            DECLARE_GET_FIELD(t_FrameFacade, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FrameFacade__methods_[] = {
            DECLARE_METHOD(t_FrameFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, asCelestialBodyFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, asFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, asOrbitRelativeFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, asSpacecraftBodyFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, getName, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, getTransform, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, map, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, parse, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FrameFacade)[] = {
            { Py_tp_methods, t_FrameFacade__methods_ },
            { Py_tp_init, (void *) t_FrameFacade_init_ },
            { Py_tp_getset, t_FrameFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FrameFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FrameFacade, t_FrameFacade, FrameFacade);

          void t_FrameFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(FrameFacade), &PY_TYPE_DEF(FrameFacade), module, "FrameFacade", 0);
          }

          void t_FrameFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FrameFacade), "class_", make_descriptor(FrameFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FrameFacade), "wrapfn_", make_descriptor(t_FrameFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FrameFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FrameFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FrameFacade::initializeClass, 1)))
              return NULL;
            return t_FrameFacade::wrap_Object(FrameFacade(((t_FrameFacade *) arg)->object.this$));
          }
          static PyObject *t_FrameFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FrameFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FrameFacade_init_(t_FrameFacade *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame a3((jobject) NULL);
            ::java::lang::String a4((jobject) NULL);
            FrameFacade object((jobject) NULL);

            if (!parseArgs(args, "kKKks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::initializeClass, ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame::initializeClass, ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::parameters_, &a2, &p2, ::org::orekit::files::ccsds::definitions::t_OrbitRelativeFrame::parameters_, &a3, &a4))
            {
              INT_CALL(object = FrameFacade(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FrameFacade_asCelestialBodyFrame(t_FrameFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.asCelestialBodyFrame());
            return ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_asFrame(t_FrameFacade *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.asFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_asOrbitRelativeFrame(t_FrameFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.asOrbitRelativeFrame());
            return ::org::orekit::files::ccsds::definitions::t_OrbitRelativeFrame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_asSpacecraftBodyFrame(t_FrameFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.asSpacecraftBodyFrame());
            return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_getName(t_FrameFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_FrameFacade_getTransform(PyTypeObject *type, PyObject *args)
          {
            FrameFacade a0((jobject) NULL);
            FrameFacade a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a4((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkkkk", FrameFacade::initializeClass, FrameFacade::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::FrameFacade::getTransform(a0, a1, a2, a3, a4));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getTransform", args);
            return NULL;
          }

          static PyObject *t_FrameFacade_map(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FrameFacade result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::FrameFacade::map(a0));
              return t_FrameFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "map", arg);
            return NULL;
          }

          static PyObject *t_FrameFacade_parse(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::data::DataContext a3((jobject) NULL);
            jboolean a4;
            jboolean a5;
            jboolean a6;
            FrameFacade result((jobject) NULL);

            if (!parseArgs(args, "sKZkZZZ", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2, &a3, &a4, &a5, &a6))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::FrameFacade::parse(a0, a1, a2, a3, a4, a5, a6));
              return t_FrameFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", args);
            return NULL;
          }

          static PyObject *t_FrameFacade_get__name(t_FrameFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonStateFunction.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/StateFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonStateFunction::class$ = NULL;
      jmethodID *PythonStateFunction::mids$ = NULL;
      bool PythonStateFunction::live$ = false;

      jclass PythonStateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonStateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_137d7db4f3f987f7] = env->getMethodID(cls, "value", "(Lorg/orekit/propagation/SpacecraftState;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStateFunction::PythonStateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonStateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonStateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonStateFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_PythonStateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStateFunction_init_(t_PythonStateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStateFunction_finalize(t_PythonStateFunction *self);
      static PyObject *t_PythonStateFunction_pythonExtension(t_PythonStateFunction *self, PyObject *args);
      static void JNICALL t_PythonStateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonStateFunction_get__self(t_PythonStateFunction *self, void *data);
      static PyGetSetDef t_PythonStateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonStateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStateFunction)[] = {
        { Py_tp_methods, t_PythonStateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonStateFunction_init_ },
        { Py_tp_getset, t_PythonStateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStateFunction, t_PythonStateFunction, PythonStateFunction);

      void t_PythonStateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStateFunction), &PY_TYPE_DEF(PythonStateFunction), module, "PythonStateFunction", 1);
      }

      void t_PythonStateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateFunction), "class_", make_descriptor(PythonStateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateFunction), "wrapfn_", make_descriptor(t_PythonStateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonStateFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/propagation/SpacecraftState;)[D", (void *) t_PythonStateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonStateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonStateFunction::wrap_Object(PythonStateFunction(((t_PythonStateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonStateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStateFunction_init_(t_PythonStateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonStateFunction object((jobject) NULL);

        INT_CALL(object = PythonStateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStateFunction_finalize(t_PythonStateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStateFunction_pythonExtension(t_PythonStateFunction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static void JNICALL t_PythonStateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateFunction::mids$[PythonStateFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStateFunction::mids$[PythonStateFunction::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonStateFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStateFunction::mids$[PythonStateFunction::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[D", &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static PyObject *t_PythonStateFunction_get__self(t_PythonStateFunction *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "org/orekit/models/earth/GeoMagneticElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticField::class$ = NULL;
        jmethodID *GeoMagneticField::mids$ = NULL;
        bool GeoMagneticField::live$ = false;

        jclass GeoMagneticField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_calculateField_d538f957ac125f99] = env->getMethodID(cls, "calculateField", "(DDD)Lorg/orekit/models/earth/GeoMagneticElements;");
            mids$[mid_getDecimalYear_17d75a1004cd0f67] = env->getStaticMethodID(cls, "getDecimalYear", "(III)D");
            mids$[mid_getEpoch_456d9a2f64d6b28d] = env->getMethodID(cls, "getEpoch", "()D");
            mids$[mid_getModelName_0090f7797e403f43] = env->getMethodID(cls, "getModelName", "()Ljava/lang/String;");
            mids$[mid_supportsTimeTransform_e470b6d9e0d979db] = env->getMethodID(cls, "supportsTimeTransform", "()Z");
            mids$[mid_transformModel_e74dfaa8c09512d5] = env->getMethodID(cls, "transformModel", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_transformModel_6cf562e5f28b4989] = env->getMethodID(cls, "transformModel", "(Lorg/orekit/models/earth/GeoMagneticField;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_validFrom_456d9a2f64d6b28d] = env->getMethodID(cls, "validFrom", "()D");
            mids$[mid_validTo_456d9a2f64d6b28d] = env->getMethodID(cls, "validTo", "()D");
            mids$[mid_setMainFieldCoefficients_864f173bba930896] = env->getMethodID(cls, "setMainFieldCoefficients", "(IIDD)V");
            mids$[mid_setSecularVariationCoefficients_864f173bba930896] = env->getMethodID(cls, "setSecularVariationCoefficients", "(IIDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::GeoMagneticElements GeoMagneticField::calculateField(jdouble a0, jdouble a1, jdouble a2) const
        {
          return ::org::orekit::models::earth::GeoMagneticElements(env->callObjectMethod(this$, mids$[mid_calculateField_d538f957ac125f99], a0, a1, a2));
        }

        jdouble GeoMagneticField::getDecimalYear(jint a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_getDecimalYear_17d75a1004cd0f67], a0, a1, a2);
        }

        jdouble GeoMagneticField::getEpoch() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEpoch_456d9a2f64d6b28d]);
        }

        ::java::lang::String GeoMagneticField::getModelName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getModelName_0090f7797e403f43]));
        }

        jboolean GeoMagneticField::supportsTimeTransform() const
        {
          return env->callBooleanMethod(this$, mids$[mid_supportsTimeTransform_e470b6d9e0d979db]);
        }

        GeoMagneticField GeoMagneticField::transformModel(jdouble a0) const
        {
          return GeoMagneticField(env->callObjectMethod(this$, mids$[mid_transformModel_e74dfaa8c09512d5], a0));
        }

        GeoMagneticField GeoMagneticField::transformModel(const GeoMagneticField & a0, jdouble a1) const
        {
          return GeoMagneticField(env->callObjectMethod(this$, mids$[mid_transformModel_6cf562e5f28b4989], a0.this$, a1));
        }

        jdouble GeoMagneticField::validFrom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_validFrom_456d9a2f64d6b28d]);
        }

        jdouble GeoMagneticField::validTo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_validTo_456d9a2f64d6b28d]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        static PyObject *t_GeoMagneticField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticField_calculateField(t_GeoMagneticField *self, PyObject *args);
        static PyObject *t_GeoMagneticField_getDecimalYear(PyTypeObject *type, PyObject *args);
        static PyObject *t_GeoMagneticField_getEpoch(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_getModelName(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_supportsTimeTransform(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_transformModel(t_GeoMagneticField *self, PyObject *args);
        static PyObject *t_GeoMagneticField_validFrom(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_validTo(t_GeoMagneticField *self);
        static PyObject *t_GeoMagneticField_get__epoch(t_GeoMagneticField *self, void *data);
        static PyObject *t_GeoMagneticField_get__modelName(t_GeoMagneticField *self, void *data);
        static PyGetSetDef t_GeoMagneticField__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticField, epoch),
          DECLARE_GET_FIELD(t_GeoMagneticField, modelName),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticField__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticField, calculateField, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticField, getDecimalYear, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticField, getEpoch, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, getModelName, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, supportsTimeTransform, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, transformModel, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticField, validFrom, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticField, validTo, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticField)[] = {
          { Py_tp_methods, t_GeoMagneticField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_GeoMagneticField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticField, t_GeoMagneticField, GeoMagneticField);

        void t_GeoMagneticField::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticField), &PY_TYPE_DEF(GeoMagneticField), module, "GeoMagneticField", 0);
        }

        void t_GeoMagneticField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticField), "class_", make_descriptor(GeoMagneticField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticField), "wrapfn_", make_descriptor(t_GeoMagneticField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticField::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticField::wrap_Object(GeoMagneticField(((t_GeoMagneticField *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticField_calculateField(t_GeoMagneticField *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          ::org::orekit::models::earth::GeoMagneticElements result((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.calculateField(a0, a1, a2));
            return ::org::orekit::models::earth::t_GeoMagneticElements::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "calculateField", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticField_getDecimalYear(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          jint a2;
          jdouble result;

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::models::earth::GeoMagneticField::getDecimalYear(a0, a1, a2));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "getDecimalYear", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticField_getEpoch(t_GeoMagneticField *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEpoch());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticField_getModelName(t_GeoMagneticField *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getModelName());
          return j2p(result);
        }

        static PyObject *t_GeoMagneticField_supportsTimeTransform(t_GeoMagneticField *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.supportsTimeTransform());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_GeoMagneticField_transformModel(t_GeoMagneticField *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              GeoMagneticField result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.transformModel(a0));
                return t_GeoMagneticField::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              GeoMagneticField a0((jobject) NULL);
              jdouble a1;
              GeoMagneticField result((jobject) NULL);

              if (!parseArgs(args, "kD", GeoMagneticField::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.transformModel(a0, a1));
                return t_GeoMagneticField::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformModel", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticField_validFrom(t_GeoMagneticField *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.validFrom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticField_validTo(t_GeoMagneticField *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.validTo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticField_get__epoch(t_GeoMagneticField *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEpoch());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticField_get__modelName(t_GeoMagneticField *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getModelName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/BistaticRangeRateBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/BistaticRangeRate.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *BistaticRangeRateBuilder::class$ = NULL;
          jmethodID *BistaticRangeRateBuilder::mids$ = NULL;
          bool BistaticRangeRateBuilder::live$ = false;

          jclass BistaticRangeRateBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/BistaticRangeRateBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_aa060bc4347f0934] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_389ef0ac967af068] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/BistaticRangeRate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeRateBuilder::BistaticRangeRateBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_aa060bc4347f0934, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::BistaticRangeRate BistaticRangeRateBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::BistaticRangeRate(env->callObjectMethod(this$, mids$[mid_build_389ef0ac967af068], a0.this$, a1.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_BistaticRangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeRateBuilder_of_(t_BistaticRangeRateBuilder *self, PyObject *args);
          static int t_BistaticRangeRateBuilder_init_(t_BistaticRangeRateBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeRateBuilder_build(t_BistaticRangeRateBuilder *self, PyObject *args);
          static PyObject *t_BistaticRangeRateBuilder_get__parameters_(t_BistaticRangeRateBuilder *self, void *data);
          static PyGetSetDef t_BistaticRangeRateBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_BistaticRangeRateBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BistaticRangeRateBuilder__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeRateBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeRateBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_BistaticRangeRateBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeRateBuilder)[] = {
            { Py_tp_methods, t_BistaticRangeRateBuilder__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeRateBuilder_init_ },
            { Py_tp_getset, t_BistaticRangeRateBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeRateBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(BistaticRangeRateBuilder, t_BistaticRangeRateBuilder, BistaticRangeRateBuilder);
          PyObject *t_BistaticRangeRateBuilder::wrap_Object(const BistaticRangeRateBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_BistaticRangeRateBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_BistaticRangeRateBuilder *self = (t_BistaticRangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_BistaticRangeRateBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_BistaticRangeRateBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_BistaticRangeRateBuilder *self = (t_BistaticRangeRateBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_BistaticRangeRateBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeRateBuilder), &PY_TYPE_DEF(BistaticRangeRateBuilder), module, "BistaticRangeRateBuilder", 0);
          }

          void t_BistaticRangeRateBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateBuilder), "class_", make_descriptor(BistaticRangeRateBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateBuilder), "wrapfn_", make_descriptor(t_BistaticRangeRateBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeRateBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeRateBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeRateBuilder::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeRateBuilder::wrap_Object(BistaticRangeRateBuilder(((t_BistaticRangeRateBuilder *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeRateBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeRateBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BistaticRangeRateBuilder_of_(t_BistaticRangeRateBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_BistaticRangeRateBuilder_init_(t_BistaticRangeRateBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            BistaticRangeRateBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = BistaticRangeRateBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRangeRate);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeRateBuilder_build(t_BistaticRangeRateBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::BistaticRangeRate result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_BistaticRangeRate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(BistaticRangeRateBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_BistaticRangeRateBuilder_get__parameters_(t_BistaticRangeRateBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/NetworkCrawler.h"
#include "java/lang/Class.h"
#include "java/net/URL.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *NetworkCrawler::class$ = NULL;
      jmethodID *NetworkCrawler::mids$ = NULL;
      bool NetworkCrawler::live$ = false;

      jclass NetworkCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/NetworkCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_053f7944f8d95650] = env->getMethodID(cls, "<init>", "([Ljava/net/URL;)V");
          mids$[mid_setTimeout_0a2a1ac2721c0336] = env->getMethodID(cls, "setTimeout", "(I)V");
          mids$[mid_getStream_2ba93d6ec2f236e4] = env->getMethodID(cls, "getStream", "(Ljava/net/URL;)Ljava/io/InputStream;");
          mids$[mid_getCompleteName_372a1415f57bf367] = env->getMethodID(cls, "getCompleteName", "(Ljava/net/URL;)Ljava/lang/String;");
          mids$[mid_getBaseName_372a1415f57bf367] = env->getMethodID(cls, "getBaseName", "(Ljava/net/URL;)Ljava/lang/String;");
          mids$[mid_getZipJarCrawler_97a5bb6f12c21365] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/net/URL;)Lorg/orekit/data/ZipJarCrawler;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      NetworkCrawler::NetworkCrawler(const JArray< ::java::net::URL > & a0) : ::org::orekit::data::AbstractListCrawler(env->newObject(initializeClass, &mids$, mid_init$_053f7944f8d95650, a0.this$)) {}

      void NetworkCrawler::setTimeout(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setTimeout_0a2a1ac2721c0336], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_NetworkCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NetworkCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NetworkCrawler_of_(t_NetworkCrawler *self, PyObject *args);
      static int t_NetworkCrawler_init_(t_NetworkCrawler *self, PyObject *args, PyObject *kwds);
      static PyObject *t_NetworkCrawler_setTimeout(t_NetworkCrawler *self, PyObject *arg);
      static int t_NetworkCrawler_set__timeout(t_NetworkCrawler *self, PyObject *arg, void *data);
      static PyObject *t_NetworkCrawler_get__parameters_(t_NetworkCrawler *self, void *data);
      static PyGetSetDef t_NetworkCrawler__fields_[] = {
        DECLARE_SET_FIELD(t_NetworkCrawler, timeout),
        DECLARE_GET_FIELD(t_NetworkCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_NetworkCrawler__methods_[] = {
        DECLARE_METHOD(t_NetworkCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NetworkCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NetworkCrawler, of_, METH_VARARGS),
        DECLARE_METHOD(t_NetworkCrawler, setTimeout, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NetworkCrawler)[] = {
        { Py_tp_methods, t_NetworkCrawler__methods_ },
        { Py_tp_init, (void *) t_NetworkCrawler_init_ },
        { Py_tp_getset, t_NetworkCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NetworkCrawler)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractListCrawler),
        NULL
      };

      DEFINE_TYPE(NetworkCrawler, t_NetworkCrawler, NetworkCrawler);
      PyObject *t_NetworkCrawler::wrap_Object(const NetworkCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_NetworkCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_NetworkCrawler *self = (t_NetworkCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_NetworkCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_NetworkCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_NetworkCrawler *self = (t_NetworkCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_NetworkCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(NetworkCrawler), &PY_TYPE_DEF(NetworkCrawler), module, "NetworkCrawler", 0);
      }

      void t_NetworkCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkCrawler), "class_", make_descriptor(NetworkCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkCrawler), "wrapfn_", make_descriptor(t_NetworkCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NetworkCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NetworkCrawler::initializeClass, 1)))
          return NULL;
        return t_NetworkCrawler::wrap_Object(NetworkCrawler(((t_NetworkCrawler *) arg)->object.this$));
      }
      static PyObject *t_NetworkCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NetworkCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_NetworkCrawler_of_(t_NetworkCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_NetworkCrawler_init_(t_NetworkCrawler *self, PyObject *args, PyObject *kwds)
      {
        JArray< ::java::net::URL > a0((jobject) NULL);
        NetworkCrawler object((jobject) NULL);

        if (!parseArgs(args, "[k", ::java::net::URL::initializeClass, &a0))
        {
          INT_CALL(object = NetworkCrawler(a0));
          self->object = object;
          self->parameters[0] = ::java::net::PY_TYPE(URL);
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_NetworkCrawler_setTimeout(t_NetworkCrawler *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setTimeout(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setTimeout", arg);
        return NULL;
      }
      static PyObject *t_NetworkCrawler_get__parameters_(t_NetworkCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static int t_NetworkCrawler_set__timeout(t_NetworkCrawler *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setTimeout(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "timeout", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticFields::class$ = NULL;
        jmethodID *GeoMagneticFields::mids$ = NULL;
        bool GeoMagneticFields::live$ = false;

        jclass GeoMagneticFields::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticFields");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getField_391592e224573f6b] = env->getMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getIGRF_e74dfaa8c09512d5] = env->getMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_e74dfaa8c09512d5] = env->getMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFields::getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a0, jdouble a1) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getField_391592e224573f6b], a0.this$, a1));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFields::getIGRF(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getIGRF_e74dfaa8c09512d5], a0));
        }

        ::org::orekit::models::earth::GeoMagneticField GeoMagneticFields::getWMM(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getWMM_e74dfaa8c09512d5], a0));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        static PyObject *t_GeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticFields_getField(t_GeoMagneticFields *self, PyObject *args);
        static PyObject *t_GeoMagneticFields_getIGRF(t_GeoMagneticFields *self, PyObject *arg);
        static PyObject *t_GeoMagneticFields_getWMM(t_GeoMagneticFields *self, PyObject *arg);

        static PyMethodDef t_GeoMagneticFields__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticFields, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFields, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticFields, getField, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticFields, getIGRF, METH_O),
          DECLARE_METHOD(t_GeoMagneticFields, getWMM, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticFields)[] = {
          { Py_tp_methods, t_GeoMagneticFields__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticFields)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticFields, t_GeoMagneticFields, GeoMagneticFields);

        void t_GeoMagneticFields::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticFields), &PY_TYPE_DEF(GeoMagneticFields), module, "GeoMagneticFields", 0);
        }

        void t_GeoMagneticFields::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFields), "class_", make_descriptor(GeoMagneticFields::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFields), "wrapfn_", make_descriptor(t_GeoMagneticFields::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticFields), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticFields::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticFields::wrap_Object(GeoMagneticFields(((t_GeoMagneticFields *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticFields::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GeoMagneticFields_getField(t_GeoMagneticFields *self, PyObject *args)
        {
          ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, &a0, &p0, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getField(a0, a1));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getField", args);
          return NULL;
        }

        static PyObject *t_GeoMagneticFields_getIGRF(t_GeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getIGRF(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getIGRF", arg);
          return NULL;
        }

        static PyObject *t_GeoMagneticFields_getWMM(t_GeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getWMM(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getWMM", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EclipseDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/events/EclipseDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/OccultationEngine.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EclipseDetector::class$ = NULL;
        jmethodID *EclipseDetector::mids$ = NULL;
        bool EclipseDetector::live$ = false;

        jclass EclipseDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EclipseDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1456b99a483b5b92] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/OccultationEngine;)V");
            mids$[mid_init$_8212346dfc4eeedc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/ExtendedPVCoordinatesProvider;DLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getMargin_456d9a2f64d6b28d] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_getOccultationEngine_46087fa4fdbd04d6] = env->getMethodID(cls, "getOccultationEngine", "()Lorg/orekit/utils/OccultationEngine;");
            mids$[mid_getTotalEclipse_e470b6d9e0d979db] = env->getMethodID(cls, "getTotalEclipse", "()Z");
            mids$[mid_withMargin_01fa94f84695458f] = env->getMethodID(cls, "withMargin", "(D)Lorg/orekit/propagation/events/EclipseDetector;");
            mids$[mid_withPenumbra_7f0c6b8e674135bf] = env->getMethodID(cls, "withPenumbra", "()Lorg/orekit/propagation/events/EclipseDetector;");
            mids$[mid_withUmbra_7f0c6b8e674135bf] = env->getMethodID(cls, "withUmbra", "()Lorg/orekit/propagation/events/EclipseDetector;");
            mids$[mid_create_746a4136f95f56a5] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EclipseDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EclipseDetector::EclipseDetector(const ::org::orekit::utils::OccultationEngine & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_1456b99a483b5b92, a0.this$)) {}

        EclipseDetector::EclipseDetector(const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_8212346dfc4eeedc, a0.this$, a1, a2.this$)) {}

        jdouble EclipseDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        jdouble EclipseDetector::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_456d9a2f64d6b28d]);
        }

        ::org::orekit::utils::OccultationEngine EclipseDetector::getOccultationEngine() const
        {
          return ::org::orekit::utils::OccultationEngine(env->callObjectMethod(this$, mids$[mid_getOccultationEngine_46087fa4fdbd04d6]));
        }

        jboolean EclipseDetector::getTotalEclipse() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getTotalEclipse_e470b6d9e0d979db]);
        }

        EclipseDetector EclipseDetector::withMargin(jdouble a0) const
        {
          return EclipseDetector(env->callObjectMethod(this$, mids$[mid_withMargin_01fa94f84695458f], a0));
        }

        EclipseDetector EclipseDetector::withPenumbra() const
        {
          return EclipseDetector(env->callObjectMethod(this$, mids$[mid_withPenumbra_7f0c6b8e674135bf]));
        }

        EclipseDetector EclipseDetector::withUmbra() const
        {
          return EclipseDetector(env->callObjectMethod(this$, mids$[mid_withUmbra_7f0c6b8e674135bf]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_EclipseDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EclipseDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EclipseDetector_of_(t_EclipseDetector *self, PyObject *args);
        static int t_EclipseDetector_init_(t_EclipseDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EclipseDetector_g(t_EclipseDetector *self, PyObject *args);
        static PyObject *t_EclipseDetector_getMargin(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_getOccultationEngine(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_getTotalEclipse(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_withMargin(t_EclipseDetector *self, PyObject *arg);
        static PyObject *t_EclipseDetector_withPenumbra(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_withUmbra(t_EclipseDetector *self);
        static PyObject *t_EclipseDetector_get__margin(t_EclipseDetector *self, void *data);
        static PyObject *t_EclipseDetector_get__occultationEngine(t_EclipseDetector *self, void *data);
        static PyObject *t_EclipseDetector_get__totalEclipse(t_EclipseDetector *self, void *data);
        static PyObject *t_EclipseDetector_get__parameters_(t_EclipseDetector *self, void *data);
        static PyGetSetDef t_EclipseDetector__fields_[] = {
          DECLARE_GET_FIELD(t_EclipseDetector, margin),
          DECLARE_GET_FIELD(t_EclipseDetector, occultationEngine),
          DECLARE_GET_FIELD(t_EclipseDetector, totalEclipse),
          DECLARE_GET_FIELD(t_EclipseDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EclipseDetector__methods_[] = {
          DECLARE_METHOD(t_EclipseDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EclipseDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EclipseDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_EclipseDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_EclipseDetector, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, getOccultationEngine, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, getTotalEclipse, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, withMargin, METH_O),
          DECLARE_METHOD(t_EclipseDetector, withPenumbra, METH_NOARGS),
          DECLARE_METHOD(t_EclipseDetector, withUmbra, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EclipseDetector)[] = {
          { Py_tp_methods, t_EclipseDetector__methods_ },
          { Py_tp_init, (void *) t_EclipseDetector_init_ },
          { Py_tp_getset, t_EclipseDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EclipseDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EclipseDetector, t_EclipseDetector, EclipseDetector);
        PyObject *t_EclipseDetector::wrap_Object(const EclipseDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EclipseDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EclipseDetector *self = (t_EclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EclipseDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EclipseDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EclipseDetector *self = (t_EclipseDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EclipseDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(EclipseDetector), &PY_TYPE_DEF(EclipseDetector), module, "EclipseDetector", 0);
        }

        void t_EclipseDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EclipseDetector), "class_", make_descriptor(EclipseDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EclipseDetector), "wrapfn_", make_descriptor(t_EclipseDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EclipseDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EclipseDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EclipseDetector::initializeClass, 1)))
            return NULL;
          return t_EclipseDetector::wrap_Object(EclipseDetector(((t_EclipseDetector *) arg)->object.this$));
        }
        static PyObject *t_EclipseDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EclipseDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EclipseDetector_of_(t_EclipseDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EclipseDetector_init_(t_EclipseDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::OccultationEngine a0((jobject) NULL);
              EclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::OccultationEngine::initializeClass, &a0))
              {
                INT_CALL(object = EclipseDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EclipseDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::utils::ExtendedPVCoordinatesProvider a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              EclipseDetector object((jobject) NULL);

              if (!parseArgs(args, "kDk", ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = EclipseDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EclipseDetector);
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EclipseDetector_g(t_EclipseDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EclipseDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EclipseDetector_getMargin(t_EclipseDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EclipseDetector_getOccultationEngine(t_EclipseDetector *self)
        {
          ::org::orekit::utils::OccultationEngine result((jobject) NULL);
          OBJ_CALL(result = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(result);
        }

        static PyObject *t_EclipseDetector_getTotalEclipse(t_EclipseDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getTotalEclipse());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_EclipseDetector_withMargin(t_EclipseDetector *self, PyObject *arg)
        {
          jdouble a0;
          EclipseDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withMargin(a0));
            return t_EclipseDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMargin", arg);
          return NULL;
        }

        static PyObject *t_EclipseDetector_withPenumbra(t_EclipseDetector *self)
        {
          EclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withPenumbra());
          return t_EclipseDetector::wrap_Object(result);
        }

        static PyObject *t_EclipseDetector_withUmbra(t_EclipseDetector *self)
        {
          EclipseDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.withUmbra());
          return t_EclipseDetector::wrap_Object(result);
        }
        static PyObject *t_EclipseDetector_get__parameters_(t_EclipseDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EclipseDetector_get__margin(t_EclipseDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EclipseDetector_get__occultationEngine(t_EclipseDetector *self, void *data)
        {
          ::org::orekit::utils::OccultationEngine value((jobject) NULL);
          OBJ_CALL(value = self->object.getOccultationEngine());
          return ::org::orekit::utils::t_OccultationEngine::wrap_Object(value);
        }

        static PyObject *t_EclipseDetector_get__totalEclipse(t_EclipseDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getTotalEclipse());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PositionAngleBased::class$ = NULL;
      jmethodID *PositionAngleBased::mids$ = NULL;
      bool PositionAngleBased::live$ = false;

      jclass PositionAngleBased::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PositionAngleBased");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCachedPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_hasRates_e470b6d9e0d979db] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_removeRates_5d36e7b611eab891] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/PositionAngleBased;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::orbits::PositionAngleType PositionAngleBased::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_2571e8fe1cede425]));
      }

      jboolean PositionAngleBased::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_e470b6d9e0d979db]);
      }

      PositionAngleBased PositionAngleBased::removeRates() const
      {
        return PositionAngleBased(env->callObjectMethod(this$, mids$[mid_removeRates_5d36e7b611eab891]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_PositionAngleBased_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleBased_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PositionAngleBased_getCachedPositionAngleType(t_PositionAngleBased *self);
      static PyObject *t_PositionAngleBased_hasRates(t_PositionAngleBased *self);
      static PyObject *t_PositionAngleBased_removeRates(t_PositionAngleBased *self);
      static PyObject *t_PositionAngleBased_get__cachedPositionAngleType(t_PositionAngleBased *self, void *data);
      static PyGetSetDef t_PositionAngleBased__fields_[] = {
        DECLARE_GET_FIELD(t_PositionAngleBased, cachedPositionAngleType),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PositionAngleBased__methods_[] = {
        DECLARE_METHOD(t_PositionAngleBased, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleBased, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PositionAngleBased, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_PositionAngleBased, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_PositionAngleBased, removeRates, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PositionAngleBased)[] = {
        { Py_tp_methods, t_PositionAngleBased__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PositionAngleBased__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PositionAngleBased)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PositionAngleBased, t_PositionAngleBased, PositionAngleBased);

      void t_PositionAngleBased::install(PyObject *module)
      {
        installType(&PY_TYPE(PositionAngleBased), &PY_TYPE_DEF(PositionAngleBased), module, "PositionAngleBased", 0);
      }

      void t_PositionAngleBased::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleBased), "class_", make_descriptor(PositionAngleBased::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleBased), "wrapfn_", make_descriptor(t_PositionAngleBased::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PositionAngleBased), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PositionAngleBased_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PositionAngleBased::initializeClass, 1)))
          return NULL;
        return t_PositionAngleBased::wrap_Object(PositionAngleBased(((t_PositionAngleBased *) arg)->object.this$));
      }
      static PyObject *t_PositionAngleBased_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PositionAngleBased::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PositionAngleBased_getCachedPositionAngleType(t_PositionAngleBased *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_PositionAngleBased_hasRates(t_PositionAngleBased *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_PositionAngleBased_removeRates(t_PositionAngleBased *self)
      {
        PositionAngleBased result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_PositionAngleBased::wrap_Object(result);
      }

      static PyObject *t_PositionAngleBased_get__cachedPositionAngleType(t_PositionAngleBased *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParametersWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *AdditionalParametersWriter::class$ = NULL;
            jmethodID *AdditionalParametersWriter::mids$ = NULL;
            bool AdditionalParametersWriter::live$ = false;

            jclass AdditionalParametersWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/AdditionalParametersWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_writeContent_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {
            static PyObject *t_AdditionalParametersWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdditionalParametersWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_AdditionalParametersWriter__methods_[] = {
              DECLARE_METHOD(t_AdditionalParametersWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdditionalParametersWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdditionalParametersWriter)[] = {
              { Py_tp_methods, t_AdditionalParametersWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdditionalParametersWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(AdditionalParametersWriter, t_AdditionalParametersWriter, AdditionalParametersWriter);

            void t_AdditionalParametersWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(AdditionalParametersWriter), &PY_TYPE_DEF(AdditionalParametersWriter), module, "AdditionalParametersWriter", 0);
            }

            void t_AdditionalParametersWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersWriter), "class_", make_descriptor(AdditionalParametersWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersWriter), "wrapfn_", make_descriptor(t_AdditionalParametersWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdditionalParametersWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdditionalParametersWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdditionalParametersWriter::initializeClass, 1)))
                return NULL;
              return t_AdditionalParametersWriter::wrap_Object(AdditionalParametersWriter(((t_AdditionalParametersWriter *) arg)->object.this$));
            }
            static PyObject *t_AdditionalParametersWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdditionalParametersWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }
          }
        }
      }
    }
  }
}
