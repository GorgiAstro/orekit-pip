#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *SpinStabilized::class$ = NULL;
              jmethodID *SpinStabilized::mids$ = NULL;
              bool SpinStabilized::live$ = false;

              jclass SpinStabilized::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/SpinStabilized");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getEndpoints_160aadf35481229b] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getMomentumAlpha_456d9a2f64d6b28d] = env->getMethodID(cls, "getMomentumAlpha", "()D");
                  mids$[mid_getMomentumDelta_456d9a2f64d6b28d] = env->getMethodID(cls, "getMomentumDelta", "()D");
                  mids$[mid_getNutation_456d9a2f64d6b28d] = env->getMethodID(cls, "getNutation", "()D");
                  mids$[mid_getNutationPeriod_456d9a2f64d6b28d] = env->getMethodID(cls, "getNutationPeriod", "()D");
                  mids$[mid_getNutationPhase_456d9a2f64d6b28d] = env->getMethodID(cls, "getNutationPhase", "()D");
                  mids$[mid_getNutationVel_456d9a2f64d6b28d] = env->getMethodID(cls, "getNutationVel", "()D");
                  mids$[mid_getSpinAlpha_456d9a2f64d6b28d] = env->getMethodID(cls, "getSpinAlpha", "()D");
                  mids$[mid_getSpinAngle_456d9a2f64d6b28d] = env->getMethodID(cls, "getSpinAngle", "()D");
                  mids$[mid_getSpinAngleVel_456d9a2f64d6b28d] = env->getMethodID(cls, "getSpinAngleVel", "()D");
                  mids$[mid_getSpinDelta_456d9a2f64d6b28d] = env->getMethodID(cls, "getSpinDelta", "()D");
                  mids$[mid_hasMomentum_e470b6d9e0d979db] = env->getMethodID(cls, "hasMomentum", "()Z");
                  mids$[mid_hasNutation_e470b6d9e0d979db] = env->getMethodID(cls, "hasNutation", "()Z");
                  mids$[mid_setMomentumAlpha_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMomentumAlpha", "(D)V");
                  mids$[mid_setMomentumDelta_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMomentumDelta", "(D)V");
                  mids$[mid_setNutation_77e0f9a1f260e2e5] = env->getMethodID(cls, "setNutation", "(D)V");
                  mids$[mid_setNutationPeriod_77e0f9a1f260e2e5] = env->getMethodID(cls, "setNutationPeriod", "(D)V");
                  mids$[mid_setNutationPhase_77e0f9a1f260e2e5] = env->getMethodID(cls, "setNutationPhase", "(D)V");
                  mids$[mid_setNutationVel_77e0f9a1f260e2e5] = env->getMethodID(cls, "setNutationVel", "(D)V");
                  mids$[mid_setSpinAlpha_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSpinAlpha", "(D)V");
                  mids$[mid_setSpinAngle_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSpinAngle", "(D)V");
                  mids$[mid_setSpinAngleVel_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSpinAngleVel", "(D)V");
                  mids$[mid_setSpinDelta_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSpinDelta", "(D)V");
                  mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SpinStabilized::SpinStabilized() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints SpinStabilized::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_160aadf35481229b]));
              }

              jdouble SpinStabilized::getMomentumAlpha() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMomentumAlpha_456d9a2f64d6b28d]);
              }

              jdouble SpinStabilized::getMomentumDelta() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMomentumDelta_456d9a2f64d6b28d]);
              }

              jdouble SpinStabilized::getNutation() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutation_456d9a2f64d6b28d]);
              }

              jdouble SpinStabilized::getNutationPeriod() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutationPeriod_456d9a2f64d6b28d]);
              }

              jdouble SpinStabilized::getNutationPhase() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutationPhase_456d9a2f64d6b28d]);
              }

              jdouble SpinStabilized::getNutationVel() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getNutationVel_456d9a2f64d6b28d]);
              }

              jdouble SpinStabilized::getSpinAlpha() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinAlpha_456d9a2f64d6b28d]);
              }

              jdouble SpinStabilized::getSpinAngle() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinAngle_456d9a2f64d6b28d]);
              }

              jdouble SpinStabilized::getSpinAngleVel() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinAngleVel_456d9a2f64d6b28d]);
              }

              jdouble SpinStabilized::getSpinDelta() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSpinDelta_456d9a2f64d6b28d]);
              }

              jboolean SpinStabilized::hasMomentum() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasMomentum_e470b6d9e0d979db]);
              }

              jboolean SpinStabilized::hasNutation() const
              {
                return env->callBooleanMethod(this$, mids$[mid_hasNutation_e470b6d9e0d979db]);
              }

              void SpinStabilized::setMomentumAlpha(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMomentumAlpha_77e0f9a1f260e2e5], a0);
              }

              void SpinStabilized::setMomentumDelta(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMomentumDelta_77e0f9a1f260e2e5], a0);
              }

              void SpinStabilized::setNutation(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutation_77e0f9a1f260e2e5], a0);
              }

              void SpinStabilized::setNutationPeriod(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutationPeriod_77e0f9a1f260e2e5], a0);
              }

              void SpinStabilized::setNutationPhase(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutationPhase_77e0f9a1f260e2e5], a0);
              }

              void SpinStabilized::setNutationVel(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNutationVel_77e0f9a1f260e2e5], a0);
              }

              void SpinStabilized::setSpinAlpha(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinAlpha_77e0f9a1f260e2e5], a0);
              }

              void SpinStabilized::setSpinAngle(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinAngle_77e0f9a1f260e2e5], a0);
              }

              void SpinStabilized::setSpinAngleVel(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinAngleVel_77e0f9a1f260e2e5], a0);
              }

              void SpinStabilized::setSpinDelta(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSpinDelta_77e0f9a1f260e2e5], a0);
              }

              void SpinStabilized::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {
              static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SpinStabilized_getEndpoints(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getMomentumAlpha(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getMomentumDelta(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutation(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutationPeriod(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutationPhase(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getNutationVel(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinAlpha(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinAngle(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinAngleVel(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_getSpinDelta(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_hasMomentum(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_hasNutation(t_SpinStabilized *self);
              static PyObject *t_SpinStabilized_setMomentumAlpha(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setMomentumDelta(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutation(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutationPeriod(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutationPhase(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setNutationVel(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinAlpha(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinAngle(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinAngleVel(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_setSpinDelta(t_SpinStabilized *self, PyObject *arg);
              static PyObject *t_SpinStabilized_validate(t_SpinStabilized *self, PyObject *args);
              static PyObject *t_SpinStabilized_get__endpoints(t_SpinStabilized *self, void *data);
              static PyObject *t_SpinStabilized_get__momentumAlpha(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__momentumAlpha(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__momentumDelta(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__momentumDelta(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutation(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutation(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutationPeriod(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutationPeriod(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutationPhase(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutationPhase(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__nutationVel(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__nutationVel(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinAlpha(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinAlpha(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinAngle(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinAngle(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinAngleVel(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinAngleVel(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyObject *t_SpinStabilized_get__spinDelta(t_SpinStabilized *self, void *data);
              static int t_SpinStabilized_set__spinDelta(t_SpinStabilized *self, PyObject *arg, void *data);
              static PyGetSetDef t_SpinStabilized__fields_[] = {
                DECLARE_GET_FIELD(t_SpinStabilized, endpoints),
                DECLARE_GETSET_FIELD(t_SpinStabilized, momentumAlpha),
                DECLARE_GETSET_FIELD(t_SpinStabilized, momentumDelta),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutation),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutationPeriod),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutationPhase),
                DECLARE_GETSET_FIELD(t_SpinStabilized, nutationVel),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinAlpha),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinAngle),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinAngleVel),
                DECLARE_GETSET_FIELD(t_SpinStabilized, spinDelta),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SpinStabilized__methods_[] = {
                DECLARE_METHOD(t_SpinStabilized, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilized, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SpinStabilized, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getMomentumAlpha, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getMomentumDelta, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutation, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutationPeriod, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutationPhase, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getNutationVel, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinAlpha, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinAngle, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinAngleVel, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, getSpinDelta, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, hasMomentum, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, hasNutation, METH_NOARGS),
                DECLARE_METHOD(t_SpinStabilized, setMomentumAlpha, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setMomentumDelta, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutation, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutationPeriod, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutationPhase, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setNutationVel, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinAlpha, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinAngle, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinAngleVel, METH_O),
                DECLARE_METHOD(t_SpinStabilized, setSpinDelta, METH_O),
                DECLARE_METHOD(t_SpinStabilized, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SpinStabilized)[] = {
                { Py_tp_methods, t_SpinStabilized__methods_ },
                { Py_tp_init, (void *) t_SpinStabilized_init_ },
                { Py_tp_getset, t_SpinStabilized__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SpinStabilized)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(SpinStabilized, t_SpinStabilized, SpinStabilized);

              void t_SpinStabilized::install(PyObject *module)
              {
                installType(&PY_TYPE(SpinStabilized), &PY_TYPE_DEF(SpinStabilized), module, "SpinStabilized", 0);
              }

              void t_SpinStabilized::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "class_", make_descriptor(SpinStabilized::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "wrapfn_", make_descriptor(t_SpinStabilized::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SpinStabilized::initializeClass, 1)))
                  return NULL;
                return t_SpinStabilized::wrap_Object(SpinStabilized(((t_SpinStabilized *) arg)->object.this$));
              }
              static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SpinStabilized::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds)
              {
                SpinStabilized object((jobject) NULL);

                INT_CALL(object = SpinStabilized());
                self->object = object;

                return 0;
              }

              static PyObject *t_SpinStabilized_getEndpoints(t_SpinStabilized *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_SpinStabilized_getMomentumAlpha(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMomentumAlpha());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getMomentumDelta(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getMomentumDelta());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutation(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutation());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutationPeriod(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutationPeriod());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutationPhase(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutationPhase());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getNutationVel(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getNutationVel());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinAlpha(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinAlpha());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinAngle(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinAngle());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinAngleVel(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinAngleVel());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_getSpinDelta(t_SpinStabilized *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSpinDelta());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SpinStabilized_hasMomentum(t_SpinStabilized *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasMomentum());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SpinStabilized_hasNutation(t_SpinStabilized *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.hasNutation());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_SpinStabilized_setMomentumAlpha(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMomentumAlpha(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMomentumAlpha", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setMomentumDelta(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setMomentumDelta(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMomentumDelta", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutation(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutation", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutationPeriod(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutationPeriod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutationPeriod", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutationPhase(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutationPhase(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutationPhase", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setNutationVel(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setNutationVel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNutationVel", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinAlpha(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinAlpha(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinAlpha", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinAngle(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinAngle(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinAngle", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinAngleVel(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinAngleVel(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinAngleVel", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_setSpinDelta(t_SpinStabilized *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSpinDelta(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSpinDelta", arg);
                return NULL;
              }

              static PyObject *t_SpinStabilized_validate(t_SpinStabilized *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(SpinStabilized), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_SpinStabilized_get__endpoints(t_SpinStabilized *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_SpinStabilized_get__momentumAlpha(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMomentumAlpha());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__momentumAlpha(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMomentumAlpha(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "momentumAlpha", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__momentumDelta(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getMomentumDelta());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__momentumDelta(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setMomentumDelta(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "momentumDelta", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutation(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutation());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutation(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutation", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutationPeriod(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutationPeriod());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutationPeriod(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutationPeriod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutationPeriod", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutationPhase(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutationPhase());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutationPhase(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutationPhase(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutationPhase", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__nutationVel(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getNutationVel());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__nutationVel(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setNutationVel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nutationVel", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinAlpha(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinAlpha());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinAlpha(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinAlpha(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinAlpha", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinAngle(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinAngle());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinAngle(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinAngle(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinAngle", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinAngleVel(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinAngleVel());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinAngleVel(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinAngleVel(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinAngleVel", arg);
                return -1;
              }

              static PyObject *t_SpinStabilized_get__spinDelta(t_SpinStabilized *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSpinDelta());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SpinStabilized_set__spinDelta(t_SpinStabilized *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSpinDelta(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "spinDelta", arg);
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenThirdBodyLinear.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *FieldHansenThirdBodyLinear::class$ = NULL;
              jmethodID *FieldHansenThirdBodyLinear::mids$ = NULL;
              bool FieldHansenThirdBodyLinear::live$ = false;

              jclass FieldHansenThirdBodyLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/FieldHansenThirdBodyLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7953b5ef04592715] = env->getMethodID(cls, "<init>", "(IILorg/hipparchus/Field;)V");
                  mids$[mid_computeInitValues_5b191078c5a85105] = env->getMethodID(cls, "computeInitValues", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
                  mids$[mid_getDerivative_ee7db4b2ec7048ce] = env->getMethodID(cls, "getDerivative", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
                  mids$[mid_getValue_ee7db4b2ec7048ce] = env->getMethodID(cls, "getValue", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              FieldHansenThirdBodyLinear::FieldHansenThirdBodyLinear(jint a0, jint a1, const ::org::hipparchus::Field & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7953b5ef04592715, a0, a1, a2.this$)) {}

              void FieldHansenThirdBodyLinear::computeInitValues(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_5b191078c5a85105], a0.this$, a1.this$, a2.this$);
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenThirdBodyLinear::getDerivative(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_ee7db4b2ec7048ce], a0, a1.this$));
              }

              ::org::hipparchus::CalculusFieldElement FieldHansenThirdBodyLinear::getValue(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_ee7db4b2ec7048ce], a0, a1.this$));
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
              static PyObject *t_FieldHansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_FieldHansenThirdBodyLinear_of_(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static int t_FieldHansenThirdBodyLinear_init_(t_FieldHansenThirdBodyLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_FieldHansenThirdBodyLinear_computeInitValues(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_FieldHansenThirdBodyLinear_getDerivative(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_FieldHansenThirdBodyLinear_getValue(t_FieldHansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_FieldHansenThirdBodyLinear_get__parameters_(t_FieldHansenThirdBodyLinear *self, void *data);
              static PyGetSetDef t_FieldHansenThirdBodyLinear__fields_[] = {
                DECLARE_GET_FIELD(t_FieldHansenThirdBodyLinear, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_FieldHansenThirdBodyLinear__methods_[] = {
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, of_, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_FieldHansenThirdBodyLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(FieldHansenThirdBodyLinear)[] = {
                { Py_tp_methods, t_FieldHansenThirdBodyLinear__methods_ },
                { Py_tp_init, (void *) t_FieldHansenThirdBodyLinear_init_ },
                { Py_tp_getset, t_FieldHansenThirdBodyLinear__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(FieldHansenThirdBodyLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(FieldHansenThirdBodyLinear, t_FieldHansenThirdBodyLinear, FieldHansenThirdBodyLinear);
              PyObject *t_FieldHansenThirdBodyLinear::wrap_Object(const FieldHansenThirdBodyLinear& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenThirdBodyLinear::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenThirdBodyLinear *self = (t_FieldHansenThirdBodyLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_FieldHansenThirdBodyLinear::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_FieldHansenThirdBodyLinear::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_FieldHansenThirdBodyLinear *self = (t_FieldHansenThirdBodyLinear *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_FieldHansenThirdBodyLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(FieldHansenThirdBodyLinear), &PY_TYPE_DEF(FieldHansenThirdBodyLinear), module, "FieldHansenThirdBodyLinear", 0);
              }

              void t_FieldHansenThirdBodyLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenThirdBodyLinear), "class_", make_descriptor(FieldHansenThirdBodyLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenThirdBodyLinear), "wrapfn_", make_descriptor(t_FieldHansenThirdBodyLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHansenThirdBodyLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_FieldHansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, FieldHansenThirdBodyLinear::initializeClass, 1)))
                  return NULL;
                return t_FieldHansenThirdBodyLinear::wrap_Object(FieldHansenThirdBodyLinear(((t_FieldHansenThirdBodyLinear *) arg)->object.this$));
              }
              static PyObject *t_FieldHansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, FieldHansenThirdBodyLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_of_(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_FieldHansenThirdBodyLinear_init_(t_FieldHansenThirdBodyLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                ::org::hipparchus::Field a2((jobject) NULL);
                PyTypeObject **p2;
                FieldHansenThirdBodyLinear object((jobject) NULL);

                if (!parseArgs(args, "IIK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
                {
                  INT_CALL(object = FieldHansenThirdBodyLinear(a0, a1, a2));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_computeInitValues(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_getDerivative(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_FieldHansenThirdBodyLinear_getValue(t_FieldHansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
              }
              static PyObject *t_FieldHansenThirdBodyLinear_get__parameters_(t_FieldHansenThirdBodyLinear *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/orekit/estimation/measurements/modifiers/BaseRangeRateIonosphericDelayModifier.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeRateIonosphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeRateIonosphericDelayModifier::mids$ = NULL;
          bool BaseRangeRateIonosphericDelayModifier::live$ = false;

          jclass BaseRangeRateIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeRateIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getIonoModel_a6521fb5ddb54669] = env->getMethodID(cls, "getIonoModel", "()Lorg/orekit/models/earth/ionosphere/IonosphericModel;");
              mids$[mid_rangeRateErrorIonosphericModel_452a588415b00924] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rangeRateErrorIonosphericModel_79833a4daf329f8b] = env->getMethodID(cls, "rangeRateErrorIonosphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeRateIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
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
        namespace modifiers {
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_getParametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self);
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeRateIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeRateIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeRateIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeRateIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeRateIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeRateIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeRateIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeRateIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeRateIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeRateIonosphericDelayModifier, t_BaseRangeRateIonosphericDelayModifier, BaseRangeRateIonosphericDelayModifier);

          void t_BaseRangeRateIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeRateIonosphericDelayModifier), &PY_TYPE_DEF(BaseRangeRateIonosphericDelayModifier), module, "BaseRangeRateIonosphericDelayModifier", 0);
          }

          void t_BaseRangeRateIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateIonosphericDelayModifier), "class_", make_descriptor(BaseRangeRateIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeRateIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeRateIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeRateIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeRateIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeRateIonosphericDelayModifier::wrap_Object(BaseRangeRateIonosphericDelayModifier(((t_BaseRangeRateIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeRateIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeRateIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeRateIonosphericDelayModifier_getParametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeRateIonosphericDelayModifier_get__parametersDrivers(t_BaseRangeRateIonosphericDelayModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1042::class$ = NULL;
              jmethodID *Rtcm1042::mids$ = NULL;
              bool Rtcm1042::live$ = false;

              jclass Rtcm1042::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_54be213e2e50dd53] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1042Data;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1042::Rtcm1042(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1042Data & a1) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage(env->newObject(initializeClass, &mids$, mid_init$_54be213e2e50dd53, a0, a1.this$)) {}
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1042_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1042_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1042_of_(t_Rtcm1042 *self, PyObject *args);
              static int t_Rtcm1042_init_(t_Rtcm1042 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1042_get__parameters_(t_Rtcm1042 *self, void *data);
              static PyGetSetDef t_Rtcm1042__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1042, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1042__methods_[] = {
                DECLARE_METHOD(t_Rtcm1042, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1042, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1042)[] = {
                { Py_tp_methods, t_Rtcm1042__methods_ },
                { Py_tp_init, (void *) t_Rtcm1042_init_ },
                { Py_tp_getset, t_Rtcm1042__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1042)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1042, t_Rtcm1042, Rtcm1042);
              PyObject *t_Rtcm1042::wrap_Object(const Rtcm1042& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1042::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1042 *self = (t_Rtcm1042 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Rtcm1042::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Rtcm1042::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1042 *self = (t_Rtcm1042 *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Rtcm1042::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1042), &PY_TYPE_DEF(Rtcm1042), module, "Rtcm1042", 0);
              }

              void t_Rtcm1042::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042), "class_", make_descriptor(Rtcm1042::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042), "wrapfn_", make_descriptor(t_Rtcm1042::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1042), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1042_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1042::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1042::wrap_Object(Rtcm1042(((t_Rtcm1042 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1042_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1042::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1042_of_(t_Rtcm1042 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1042_init_(t_Rtcm1042 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1042Data a1((jobject) NULL);
                Rtcm1042 object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::Rtcm1042Data::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rtcm1042(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::ephemeris::PY_TYPE(Rtcm1042Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1042_get__parameters_(t_Rtcm1042 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/hipparchus/analysis/function/Logistic.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Logistic::class$ = NULL;
        jmethodID *Logistic::mids$ = NULL;
        bool Logistic::live$ = false;

        jclass Logistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Logistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_03d58d1a44d9d090] = env->getMethodID(cls, "<init>", "(DDDDDD)V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Logistic::Logistic(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_03d58d1a44d9d090, a0, a1, a2, a3, a4, a5)) {}

        jdouble Logistic::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Logistic::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/Logistic$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Logistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Logistic_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Logistic_init_(t_Logistic *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Logistic_value(t_Logistic *self, PyObject *args);

        static PyMethodDef t_Logistic__methods_[] = {
          DECLARE_METHOD(t_Logistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Logistic, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Logistic)[] = {
          { Py_tp_methods, t_Logistic__methods_ },
          { Py_tp_init, (void *) t_Logistic_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Logistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Logistic, t_Logistic, Logistic);

        void t_Logistic::install(PyObject *module)
        {
          installType(&PY_TYPE(Logistic), &PY_TYPE_DEF(Logistic), module, "Logistic", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "Parametric", make_descriptor(&PY_TYPE_DEF(Logistic$Parametric)));
        }

        void t_Logistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "class_", make_descriptor(Logistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "wrapfn_", make_descriptor(t_Logistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Logistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Logistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Logistic::initializeClass, 1)))
            return NULL;
          return t_Logistic::wrap_Object(Logistic(((t_Logistic *) arg)->object.this$));
        }
        static PyObject *t_Logistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Logistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Logistic_init_(t_Logistic *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jdouble a5;
          Logistic object((jobject) NULL);

          if (!parseArgs(args, "DDDDDD", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = Logistic(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Logistic_value(t_Logistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Tanh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Tanh::class$ = NULL;
        jmethodID *Tanh::mids$ = NULL;
        bool Tanh::live$ = false;

        jclass Tanh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Tanh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Tanh::Tanh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Tanh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Tanh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
      namespace function {
        static PyObject *t_Tanh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tanh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Tanh_init_(t_Tanh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Tanh_value(t_Tanh *self, PyObject *args);

        static PyMethodDef t_Tanh__methods_[] = {
          DECLARE_METHOD(t_Tanh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tanh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tanh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tanh)[] = {
          { Py_tp_methods, t_Tanh__methods_ },
          { Py_tp_init, (void *) t_Tanh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tanh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Tanh, t_Tanh, Tanh);

        void t_Tanh::install(PyObject *module)
        {
          installType(&PY_TYPE(Tanh), &PY_TYPE_DEF(Tanh), module, "Tanh", 0);
        }

        void t_Tanh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tanh), "class_", make_descriptor(Tanh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tanh), "wrapfn_", make_descriptor(t_Tanh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tanh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Tanh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tanh::initializeClass, 1)))
            return NULL;
          return t_Tanh::wrap_Object(Tanh(((t_Tanh *) arg)->object.this$));
        }
        static PyObject *t_Tanh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tanh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Tanh_init_(t_Tanh *self, PyObject *args, PyObject *kwds)
        {
          Tanh object((jobject) NULL);

          INT_CALL(object = Tanh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Tanh_value(t_Tanh *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/LatitudeExtremumDetector.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/events/LatitudeExtremumDetector.h"
#include "org/orekit/bodies/BodyShape.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *LatitudeExtremumDetector::class$ = NULL;
        jmethodID *LatitudeExtremumDetector::mids$ = NULL;
        bool LatitudeExtremumDetector::live$ = false;

        jclass LatitudeExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/LatitudeExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6d5ed18afc9cd8ba] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_init$_1b8515f578ac1f69] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/bodies/OneAxisEllipsoid;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getBody_883d26889ee03ca8] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/BodyShape;");
            mids$[mid_create_c6346e6c9a3721a6] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/LatitudeExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LatitudeExtremumDetector::LatitudeExtremumDetector(const ::org::orekit::bodies::OneAxisEllipsoid & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6d5ed18afc9cd8ba, a0.this$)) {}

        LatitudeExtremumDetector::LatitudeExtremumDetector(jdouble a0, jdouble a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_1b8515f578ac1f69, a0, a1, a2.this$)) {}

        jdouble LatitudeExtremumDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::bodies::BodyShape LatitudeExtremumDetector::getBody() const
        {
          return ::org::orekit::bodies::BodyShape(env->callObjectMethod(this$, mids$[mid_getBody_883d26889ee03ca8]));
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
        static PyObject *t_LatitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LatitudeExtremumDetector_of_(t_LatitudeExtremumDetector *self, PyObject *args);
        static int t_LatitudeExtremumDetector_init_(t_LatitudeExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LatitudeExtremumDetector_g(t_LatitudeExtremumDetector *self, PyObject *args);
        static PyObject *t_LatitudeExtremumDetector_getBody(t_LatitudeExtremumDetector *self);
        static PyObject *t_LatitudeExtremumDetector_get__body(t_LatitudeExtremumDetector *self, void *data);
        static PyObject *t_LatitudeExtremumDetector_get__parameters_(t_LatitudeExtremumDetector *self, void *data);
        static PyGetSetDef t_LatitudeExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_LatitudeExtremumDetector, body),
          DECLARE_GET_FIELD(t_LatitudeExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LatitudeExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_LatitudeExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_LatitudeExtremumDetector, getBody, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LatitudeExtremumDetector)[] = {
          { Py_tp_methods, t_LatitudeExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_LatitudeExtremumDetector_init_ },
          { Py_tp_getset, t_LatitudeExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LatitudeExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(LatitudeExtremumDetector, t_LatitudeExtremumDetector, LatitudeExtremumDetector);
        PyObject *t_LatitudeExtremumDetector::wrap_Object(const LatitudeExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeExtremumDetector *self = (t_LatitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LatitudeExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LatitudeExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LatitudeExtremumDetector *self = (t_LatitudeExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LatitudeExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(LatitudeExtremumDetector), &PY_TYPE_DEF(LatitudeExtremumDetector), module, "LatitudeExtremumDetector", 0);
        }

        void t_LatitudeExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeExtremumDetector), "class_", make_descriptor(LatitudeExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeExtremumDetector), "wrapfn_", make_descriptor(t_LatitudeExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LatitudeExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LatitudeExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LatitudeExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_LatitudeExtremumDetector::wrap_Object(LatitudeExtremumDetector(((t_LatitudeExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_LatitudeExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LatitudeExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LatitudeExtremumDetector_of_(t_LatitudeExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LatitudeExtremumDetector_init_(t_LatitudeExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              LatitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                INT_CALL(object = LatitudeExtremumDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeExtremumDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
              LatitudeExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = LatitudeExtremumDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(LatitudeExtremumDetector);
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

        static PyObject *t_LatitudeExtremumDetector_g(t_LatitudeExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LatitudeExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_LatitudeExtremumDetector_getBody(t_LatitudeExtremumDetector *self)
        {
          ::org::orekit::bodies::BodyShape result((jobject) NULL);
          OBJ_CALL(result = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(result);
        }
        static PyObject *t_LatitudeExtremumDetector_get__parameters_(t_LatitudeExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LatitudeExtremumDetector_get__body(t_LatitudeExtremumDetector *self, void *data)
        {
          ::org::orekit::bodies::BodyShape value((jobject) NULL);
          OBJ_CALL(value = self->object.getBody());
          return ::org::orekit::bodies::t_BodyShape::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AngularRadioRefractionModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AngularRadioRefractionModifier::class$ = NULL;
          jmethodID *AngularRadioRefractionModifier::mids$ = NULL;
          bool AngularRadioRefractionModifier::live$ = false;

          jclass AngularRadioRefractionModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AngularRadioRefractionModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b26d7d381bcaad04] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/AtmosphericRefractionModel;)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AngularRadioRefractionModifier::AngularRadioRefractionModifier(const ::org::orekit::models::AtmosphericRefractionModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b26d7d381bcaad04, a0.this$)) {}

          ::java::util::List AngularRadioRefractionModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void AngularRadioRefractionModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
        namespace modifiers {
          static PyObject *t_AngularRadioRefractionModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AngularRadioRefractionModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AngularRadioRefractionModifier_init_(t_AngularRadioRefractionModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AngularRadioRefractionModifier_getParametersDrivers(t_AngularRadioRefractionModifier *self);
          static PyObject *t_AngularRadioRefractionModifier_modifyWithoutDerivatives(t_AngularRadioRefractionModifier *self, PyObject *arg);
          static PyObject *t_AngularRadioRefractionModifier_get__parametersDrivers(t_AngularRadioRefractionModifier *self, void *data);
          static PyGetSetDef t_AngularRadioRefractionModifier__fields_[] = {
            DECLARE_GET_FIELD(t_AngularRadioRefractionModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AngularRadioRefractionModifier__methods_[] = {
            DECLARE_METHOD(t_AngularRadioRefractionModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRadioRefractionModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AngularRadioRefractionModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AngularRadioRefractionModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AngularRadioRefractionModifier)[] = {
            { Py_tp_methods, t_AngularRadioRefractionModifier__methods_ },
            { Py_tp_init, (void *) t_AngularRadioRefractionModifier_init_ },
            { Py_tp_getset, t_AngularRadioRefractionModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AngularRadioRefractionModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AngularRadioRefractionModifier, t_AngularRadioRefractionModifier, AngularRadioRefractionModifier);

          void t_AngularRadioRefractionModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AngularRadioRefractionModifier), &PY_TYPE_DEF(AngularRadioRefractionModifier), module, "AngularRadioRefractionModifier", 0);
          }

          void t_AngularRadioRefractionModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRadioRefractionModifier), "class_", make_descriptor(AngularRadioRefractionModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRadioRefractionModifier), "wrapfn_", make_descriptor(t_AngularRadioRefractionModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AngularRadioRefractionModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AngularRadioRefractionModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AngularRadioRefractionModifier::initializeClass, 1)))
              return NULL;
            return t_AngularRadioRefractionModifier::wrap_Object(AngularRadioRefractionModifier(((t_AngularRadioRefractionModifier *) arg)->object.this$));
          }
          static PyObject *t_AngularRadioRefractionModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AngularRadioRefractionModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AngularRadioRefractionModifier_init_(t_AngularRadioRefractionModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::AtmosphericRefractionModel a0((jobject) NULL);
            AngularRadioRefractionModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0))
            {
              INT_CALL(object = AngularRadioRefractionModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AngularRadioRefractionModifier_getParametersDrivers(t_AngularRadioRefractionModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AngularRadioRefractionModifier_modifyWithoutDerivatives(t_AngularRadioRefractionModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_AngularRadioRefractionModifier_get__parametersDrivers(t_AngularRadioRefractionModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaIntegrator.h"
#include "org/hipparchus/ode/nonstiff/ButcherArrayProvider.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EmbeddedRungeKuttaIntegrator::class$ = NULL;
        jmethodID *EmbeddedRungeKuttaIntegrator::mids$ = NULL;
        bool EmbeddedRungeKuttaIntegrator::live$ = false;

        jclass EmbeddedRungeKuttaIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getMaxGrowth_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxGrowth", "()D");
            mids$[mid_getMinReduction_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinReduction", "()D");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getSafety_456d9a2f64d6b28d] = env->getMethodID(cls, "getSafety", "()D");
            mids$[mid_integrate_7efcd57267e426c3] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_setMaxGrowth_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMaxGrowth", "(D)V");
            mids$[mid_setMinReduction_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMinReduction", "(D)V");
            mids$[mid_setSafety_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSafety", "(D)V");
            mids$[mid_createInterpolator_34096714306c5ce7] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaStateInterpolator;");
            mids$[mid_estimateError_8ae23a975a0e5320] = env->getMethodID(cls, "estimateError", "([[D[D[DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble EmbeddedRungeKuttaIntegrator::getMaxGrowth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxGrowth_456d9a2f64d6b28d]);
        }

        jdouble EmbeddedRungeKuttaIntegrator::getMinReduction() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinReduction_456d9a2f64d6b28d]);
        }

        jint EmbeddedRungeKuttaIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
        }

        jdouble EmbeddedRungeKuttaIntegrator::getSafety() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSafety_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::ode::ODEStateAndDerivative EmbeddedRungeKuttaIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_7efcd57267e426c3], a0.this$, a1.this$, a2));
        }

        void EmbeddedRungeKuttaIntegrator::setMaxGrowth(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxGrowth_77e0f9a1f260e2e5], a0);
        }

        void EmbeddedRungeKuttaIntegrator::setMinReduction(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMinReduction_77e0f9a1f260e2e5], a0);
        }

        void EmbeddedRungeKuttaIntegrator::setSafety(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSafety_77e0f9a1f260e2e5], a0);
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
    namespace ode {
      namespace nonstiff {
        static PyObject *t_EmbeddedRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMinReduction(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getOrder(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_getSafety(t_EmbeddedRungeKuttaIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_integrate(t_EmbeddedRungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMinReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_setSafety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__minReduction(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaIntegrator_set__minReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__order(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__safety(t_EmbeddedRungeKuttaIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaIntegrator_set__safety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data);
        static PyGetSetDef t_EmbeddedRungeKuttaIntegrator__fields_[] = {
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaIntegrator, maxGrowth),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaIntegrator, minReduction),
          DECLARE_GET_FIELD(t_EmbeddedRungeKuttaIntegrator, order),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaIntegrator, safety),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EmbeddedRungeKuttaIntegrator__methods_[] = {
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getMaxGrowth, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getMinReduction, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, getSafety, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, setMaxGrowth, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, setMinReduction, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaIntegrator, setSafety, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EmbeddedRungeKuttaIntegrator)[] = {
          { Py_tp_methods, t_EmbeddedRungeKuttaIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EmbeddedRungeKuttaIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EmbeddedRungeKuttaIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator),
          NULL
        };

        DEFINE_TYPE(EmbeddedRungeKuttaIntegrator, t_EmbeddedRungeKuttaIntegrator, EmbeddedRungeKuttaIntegrator);

        void t_EmbeddedRungeKuttaIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EmbeddedRungeKuttaIntegrator), &PY_TYPE_DEF(EmbeddedRungeKuttaIntegrator), module, "EmbeddedRungeKuttaIntegrator", 0);
        }

        void t_EmbeddedRungeKuttaIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaIntegrator), "class_", make_descriptor(EmbeddedRungeKuttaIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaIntegrator), "wrapfn_", make_descriptor(t_EmbeddedRungeKuttaIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EmbeddedRungeKuttaIntegrator::initializeClass, 1)))
            return NULL;
          return t_EmbeddedRungeKuttaIntegrator::wrap_Object(EmbeddedRungeKuttaIntegrator(((t_EmbeddedRungeKuttaIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EmbeddedRungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EmbeddedRungeKuttaIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxGrowth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getMinReduction(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinReduction());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getOrder(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_getSafety(t_EmbeddedRungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSafety());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_integrate(t_EmbeddedRungeKuttaIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(EmbeddedRungeKuttaIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMaxGrowth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxGrowth", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_setMinReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMinReduction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMinReduction", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_setSafety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSafety(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSafety", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxGrowth());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EmbeddedRungeKuttaIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMaxGrowth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxGrowth", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__minReduction(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinReduction());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EmbeddedRungeKuttaIntegrator_set__minReduction(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMinReduction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "minReduction", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__order(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EmbeddedRungeKuttaIntegrator_get__safety(t_EmbeddedRungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSafety());
          return PyFloat_FromDouble((double) value);
        }
        static int t_EmbeddedRungeKuttaIntegrator_set__safety(t_EmbeddedRungeKuttaIntegrator *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSafety(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "safety", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *Rtcm1020Data::class$ = NULL;
              jmethodID *Rtcm1020Data::mids$ = NULL;
              bool Rtcm1020Data::live$ = false;

              jclass Rtcm1020Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1020Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_areAdditionalDataAvailable_e470b6d9e0d979db] = env->getMethodID(cls, "areAdditionalDataAvailable", "()Z");
                  mids$[mid_getBN_f2f64475e4580546] = env->getMethodID(cls, "getBN", "()I");
                  mids$[mid_getDeltaTN_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeltaTN", "()D");
                  mids$[mid_getEn_f2f64475e4580546] = env->getMethodID(cls, "getEn", "()I");
                  mids$[mid_getFT_f2f64475e4580546] = env->getMethodID(cls, "getFT", "()I");
                  mids$[mid_getGlonassNavigationMessage_0543f4eba8117712] = env->getMethodID(cls, "getGlonassNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;");
                  mids$[mid_getGlonassNavigationMessage_fd3df630cc1fdbe1] = env->getMethodID(cls, "getGlonassNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;");
                  mids$[mid_getLNFifthString_f2f64475e4580546] = env->getMethodID(cls, "getLNFifthString", "()I");
                  mids$[mid_getLNThirdString_f2f64475e4580546] = env->getMethodID(cls, "getLNThirdString", "()I");
                  mids$[mid_getM_f2f64475e4580546] = env->getMethodID(cls, "getM", "()I");
                  mids$[mid_getN4_f2f64475e4580546] = env->getMethodID(cls, "getN4", "()I");
                  mids$[mid_getNA_f2f64475e4580546] = env->getMethodID(cls, "getNA", "()I");
                  mids$[mid_getNt_f2f64475e4580546] = env->getMethodID(cls, "getNt", "()I");
                  mids$[mid_getP_f2f64475e4580546] = env->getMethodID(cls, "getP", "()I");
                  mids$[mid_getP1_f2f64475e4580546] = env->getMethodID(cls, "getP1", "()I");
                  mids$[mid_getP2_f2f64475e4580546] = env->getMethodID(cls, "getP2", "()I");
                  mids$[mid_getP3_f2f64475e4580546] = env->getMethodID(cls, "getP3", "()I");
                  mids$[mid_getP4_f2f64475e4580546] = env->getMethodID(cls, "getP4", "()I");
                  mids$[mid_getTauC_456d9a2f64d6b28d] = env->getMethodID(cls, "getTauC", "()D");
                  mids$[mid_getTauGps_456d9a2f64d6b28d] = env->getMethodID(cls, "getTauGps", "()D");
                  mids$[mid_getTk_456d9a2f64d6b28d] = env->getMethodID(cls, "getTk", "()D");
                  mids$[mid_isHealthAvailable_e470b6d9e0d979db] = env->getMethodID(cls, "isHealthAvailable", "()Z");
                  mids$[mid_setAreAdditionalDataAvailable_50a2e0b139e80a58] = env->getMethodID(cls, "setAreAdditionalDataAvailable", "(Z)V");
                  mids$[mid_setBN_0a2a1ac2721c0336] = env->getMethodID(cls, "setBN", "(I)V");
                  mids$[mid_setDeltaTN_77e0f9a1f260e2e5] = env->getMethodID(cls, "setDeltaTN", "(D)V");
                  mids$[mid_setEn_0a2a1ac2721c0336] = env->getMethodID(cls, "setEn", "(I)V");
                  mids$[mid_setFT_0a2a1ac2721c0336] = env->getMethodID(cls, "setFT", "(I)V");
                  mids$[mid_setGlonassNavigationMessage_9f037303855bf75b] = env->getMethodID(cls, "setGlonassNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;)V");
                  mids$[mid_setHealthAvailabilityIndicator_50a2e0b139e80a58] = env->getMethodID(cls, "setHealthAvailabilityIndicator", "(Z)V");
                  mids$[mid_setLNFifthString_0a2a1ac2721c0336] = env->getMethodID(cls, "setLNFifthString", "(I)V");
                  mids$[mid_setLNThirdString_0a2a1ac2721c0336] = env->getMethodID(cls, "setLNThirdString", "(I)V");
                  mids$[mid_setM_0a2a1ac2721c0336] = env->getMethodID(cls, "setM", "(I)V");
                  mids$[mid_setN4_0a2a1ac2721c0336] = env->getMethodID(cls, "setN4", "(I)V");
                  mids$[mid_setNA_0a2a1ac2721c0336] = env->getMethodID(cls, "setNA", "(I)V");
                  mids$[mid_setNt_0a2a1ac2721c0336] = env->getMethodID(cls, "setNt", "(I)V");
                  mids$[mid_setP_0a2a1ac2721c0336] = env->getMethodID(cls, "setP", "(I)V");
                  mids$[mid_setP1_0a2a1ac2721c0336] = env->getMethodID(cls, "setP1", "(I)V");
                  mids$[mid_setP2_0a2a1ac2721c0336] = env->getMethodID(cls, "setP2", "(I)V");
                  mids$[mid_setP3_0a2a1ac2721c0336] = env->getMethodID(cls, "setP3", "(I)V");
                  mids$[mid_setP4_0a2a1ac2721c0336] = env->getMethodID(cls, "setP4", "(I)V");
                  mids$[mid_setTauC_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTauC", "(D)V");
                  mids$[mid_setTauGps_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTauGps", "(D)V");
                  mids$[mid_setTk_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTk", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1020Data::Rtcm1020Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jboolean Rtcm1020Data::areAdditionalDataAvailable() const
              {
                return env->callBooleanMethod(this$, mids$[mid_areAdditionalDataAvailable_e470b6d9e0d979db]);
              }

              jint Rtcm1020Data::getBN() const
              {
                return env->callIntMethod(this$, mids$[mid_getBN_f2f64475e4580546]);
              }

              jdouble Rtcm1020Data::getDeltaTN() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaTN_456d9a2f64d6b28d]);
              }

              jint Rtcm1020Data::getEn() const
              {
                return env->callIntMethod(this$, mids$[mid_getEn_f2f64475e4580546]);
              }

              jint Rtcm1020Data::getFT() const
              {
                return env->callIntMethod(this$, mids$[mid_getFT_f2f64475e4580546]);
              }

              ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage Rtcm1020Data::getGlonassNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessage_0543f4eba8117712]));
              }

              ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage Rtcm1020Data::getGlonassNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessage_fd3df630cc1fdbe1], a0.this$));
              }

              jint Rtcm1020Data::getLNFifthString() const
              {
                return env->callIntMethod(this$, mids$[mid_getLNFifthString_f2f64475e4580546]);
              }

              jint Rtcm1020Data::getLNThirdString() const
              {
                return env->callIntMethod(this$, mids$[mid_getLNThirdString_f2f64475e4580546]);
              }

              jint Rtcm1020Data::getM() const
              {
                return env->callIntMethod(this$, mids$[mid_getM_f2f64475e4580546]);
              }

              jint Rtcm1020Data::getN4() const
              {
                return env->callIntMethod(this$, mids$[mid_getN4_f2f64475e4580546]);
              }

              jint Rtcm1020Data::getNA() const
              {
                return env->callIntMethod(this$, mids$[mid_getNA_f2f64475e4580546]);
              }

              jint Rtcm1020Data::getNt() const
              {
                return env->callIntMethod(this$, mids$[mid_getNt_f2f64475e4580546]);
              }

              jint Rtcm1020Data::getP() const
              {
                return env->callIntMethod(this$, mids$[mid_getP_f2f64475e4580546]);
              }

              jint Rtcm1020Data::getP1() const
              {
                return env->callIntMethod(this$, mids$[mid_getP1_f2f64475e4580546]);
              }

              jint Rtcm1020Data::getP2() const
              {
                return env->callIntMethod(this$, mids$[mid_getP2_f2f64475e4580546]);
              }

              jint Rtcm1020Data::getP3() const
              {
                return env->callIntMethod(this$, mids$[mid_getP3_f2f64475e4580546]);
              }

              jint Rtcm1020Data::getP4() const
              {
                return env->callIntMethod(this$, mids$[mid_getP4_f2f64475e4580546]);
              }

              jdouble Rtcm1020Data::getTauC() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTauC_456d9a2f64d6b28d]);
              }

              jdouble Rtcm1020Data::getTauGps() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTauGps_456d9a2f64d6b28d]);
              }

              jdouble Rtcm1020Data::getTk() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getTk_456d9a2f64d6b28d]);
              }

              jboolean Rtcm1020Data::isHealthAvailable() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isHealthAvailable_e470b6d9e0d979db]);
              }

              void Rtcm1020Data::setAreAdditionalDataAvailable(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAreAdditionalDataAvailable_50a2e0b139e80a58], a0);
              }

              void Rtcm1020Data::setBN(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setBN_0a2a1ac2721c0336], a0);
              }

              void Rtcm1020Data::setDeltaTN(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaTN_77e0f9a1f260e2e5], a0);
              }

              void Rtcm1020Data::setEn(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEn_0a2a1ac2721c0336], a0);
              }

              void Rtcm1020Data::setFT(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFT_0a2a1ac2721c0336], a0);
              }

              void Rtcm1020Data::setGlonassNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGlonassNavigationMessage_9f037303855bf75b], a0.this$);
              }

              void Rtcm1020Data::setHealthAvailabilityIndicator(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setHealthAvailabilityIndicator_50a2e0b139e80a58], a0);
              }

              void Rtcm1020Data::setLNFifthString(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setLNFifthString_0a2a1ac2721c0336], a0);
              }

              void Rtcm1020Data::setLNThirdString(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setLNThirdString_0a2a1ac2721c0336], a0);
              }

              void Rtcm1020Data::setM(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setM_0a2a1ac2721c0336], a0);
              }

              void Rtcm1020Data::setN4(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setN4_0a2a1ac2721c0336], a0);
              }

              void Rtcm1020Data::setNA(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNA_0a2a1ac2721c0336], a0);
              }

              void Rtcm1020Data::setNt(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNt_0a2a1ac2721c0336], a0);
              }

              void Rtcm1020Data::setP(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP_0a2a1ac2721c0336], a0);
              }

              void Rtcm1020Data::setP1(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP1_0a2a1ac2721c0336], a0);
              }

              void Rtcm1020Data::setP2(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP2_0a2a1ac2721c0336], a0);
              }

              void Rtcm1020Data::setP3(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP3_0a2a1ac2721c0336], a0);
              }

              void Rtcm1020Data::setP4(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setP4_0a2a1ac2721c0336], a0);
              }

              void Rtcm1020Data::setTauC(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTauC_77e0f9a1f260e2e5], a0);
              }

              void Rtcm1020Data::setTauGps(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTauGps_77e0f9a1f260e2e5], a0);
              }

              void Rtcm1020Data::setTk(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setTk_77e0f9a1f260e2e5], a0);
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
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {
              static PyObject *t_Rtcm1020Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1020Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1020Data_init_(t_Rtcm1020Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1020Data_areAdditionalDataAvailable(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getBN(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getDeltaTN(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getEn(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getFT(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getGlonassNavigationMessage(t_Rtcm1020Data *self, PyObject *args);
              static PyObject *t_Rtcm1020Data_getLNFifthString(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getLNThirdString(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getM(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getN4(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getNA(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getNt(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP1(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP2(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP3(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getP4(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getTauC(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getTauGps(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_getTk(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_isHealthAvailable(t_Rtcm1020Data *self);
              static PyObject *t_Rtcm1020Data_setAreAdditionalDataAvailable(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setBN(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setDeltaTN(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setEn(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setFT(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setGlonassNavigationMessage(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setHealthAvailabilityIndicator(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setLNFifthString(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setLNThirdString(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setM(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setN4(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setNA(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setNt(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP1(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP2(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP3(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setP4(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setTauC(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setTauGps(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_setTk(t_Rtcm1020Data *self, PyObject *arg);
              static PyObject *t_Rtcm1020Data_get__bN(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__bN(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__deltaTN(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__deltaTN(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__en(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__en(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__fT(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__fT(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__glonassNavigationMessage(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__glonassNavigationMessage(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static int t_Rtcm1020Data_set__healthAvailabilityIndicator(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__healthAvailable(t_Rtcm1020Data *self, void *data);
              static PyObject *t_Rtcm1020Data_get__lNFifthString(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__lNFifthString(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__lNThirdString(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__lNThirdString(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__m(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__m(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__n4(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__n4(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__nA(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__nA(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__nt(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__nt(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p1(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p1(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p2(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p2(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p3(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p3(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__p4(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__p4(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__tauC(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__tauC(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__tauGps(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__tauGps(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1020Data_get__tk(t_Rtcm1020Data *self, void *data);
              static int t_Rtcm1020Data_set__tk(t_Rtcm1020Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1020Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, bN),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, deltaTN),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, en),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, fT),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, glonassNavigationMessage),
                DECLARE_SET_FIELD(t_Rtcm1020Data, healthAvailabilityIndicator),
                DECLARE_GET_FIELD(t_Rtcm1020Data, healthAvailable),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, lNFifthString),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, lNThirdString),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, m),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, n4),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, nA),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, nt),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p1),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p2),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p3),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, p4),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, tauC),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, tauGps),
                DECLARE_GETSET_FIELD(t_Rtcm1020Data, tk),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1020Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1020Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1020Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1020Data, areAdditionalDataAvailable, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getBN, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getDeltaTN, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getEn, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getFT, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getGlonassNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getLNFifthString, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getLNThirdString, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getM, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getN4, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getNA, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getNt, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP1, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP2, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP3, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getP4, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getTauC, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getTauGps, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, getTk, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, isHealthAvailable, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1020Data, setAreAdditionalDataAvailable, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setBN, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setDeltaTN, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setEn, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setFT, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setGlonassNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setHealthAvailabilityIndicator, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setLNFifthString, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setLNThirdString, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setM, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setN4, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setNA, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setNt, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP1, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP2, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP3, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setP4, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setTauC, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setTauGps, METH_O),
                DECLARE_METHOD(t_Rtcm1020Data, setTk, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1020Data)[] = {
                { Py_tp_methods, t_Rtcm1020Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1020Data_init_ },
                { Py_tp_getset, t_Rtcm1020Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1020Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1020Data, t_Rtcm1020Data, Rtcm1020Data);

              void t_Rtcm1020Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1020Data), &PY_TYPE_DEF(Rtcm1020Data), module, "Rtcm1020Data", 0);
              }

              void t_Rtcm1020Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020Data), "class_", make_descriptor(Rtcm1020Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020Data), "wrapfn_", make_descriptor(t_Rtcm1020Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1020Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1020Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1020Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1020Data::wrap_Object(Rtcm1020Data(((t_Rtcm1020Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1020Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1020Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1020Data_init_(t_Rtcm1020Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1020Data object((jobject) NULL);

                INT_CALL(object = Rtcm1020Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1020Data_areAdditionalDataAvailable(t_Rtcm1020Data *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.areAdditionalDataAvailable());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Rtcm1020Data_getBN(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getBN());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getDeltaTN(t_Rtcm1020Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeltaTN());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1020Data_getEn(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getEn());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getFT(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getFT());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getGlonassNavigationMessage(t_Rtcm1020Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getGlonassNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getGlonassNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getGlonassNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_getLNFifthString(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getLNFifthString());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getLNThirdString(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getLNThirdString());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getM(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getM());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getN4(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getN4());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getNA(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNA());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getNt(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNt());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP1(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP1());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP2(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP2());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP3(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP3());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getP4(t_Rtcm1020Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getP4());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1020Data_getTauC(t_Rtcm1020Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTauC());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1020Data_getTauGps(t_Rtcm1020Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTauGps());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1020Data_getTk(t_Rtcm1020Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getTk());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1020Data_isHealthAvailable(t_Rtcm1020Data *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isHealthAvailable());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Rtcm1020Data_setAreAdditionalDataAvailable(t_Rtcm1020Data *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setAreAdditionalDataAvailable(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAreAdditionalDataAvailable", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setBN(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setBN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setBN", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setDeltaTN(t_Rtcm1020Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeltaTN(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeltaTN", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setEn(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setEn(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEn", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setFT(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setFT(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFT", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setGlonassNavigationMessage(t_Rtcm1020Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setGlonassNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGlonassNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setHealthAvailabilityIndicator(t_Rtcm1020Data *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setHealthAvailabilityIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setHealthAvailabilityIndicator", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setLNFifthString(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setLNFifthString(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setLNFifthString", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setLNThirdString(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setLNThirdString(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setLNThirdString", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setM(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setM(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setM", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setN4(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setN4(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setN4", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setNA(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNA(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNA", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setNt(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNt(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNt", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP1(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP1(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP1", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP2(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP2(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP2", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP3(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP3(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP3", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setP4(t_Rtcm1020Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setP4(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setP4", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setTauC(t_Rtcm1020Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTauC(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTauC", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setTauGps(t_Rtcm1020Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTauGps(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTauGps", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_setTk(t_Rtcm1020Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setTk(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTk", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1020Data_get__bN(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getBN());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__bN(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setBN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "bN", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__deltaTN(t_Rtcm1020Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeltaTN());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1020Data_set__deltaTN(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeltaTN(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deltaTN", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__en(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getEn());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__en(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setEn(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "en", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__fT(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getFT());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__fT(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setFT(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "fT", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__glonassNavigationMessage(t_Rtcm1020Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getGlonassNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1020Data_set__glonassNavigationMessage(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setGlonassNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "glonassNavigationMessage", arg);
                return -1;
              }

              static int t_Rtcm1020Data_set__healthAvailabilityIndicator(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jboolean value;
                  if (!parseArg(arg, "Z", &value))
                  {
                    INT_CALL(self->object.setHealthAvailabilityIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "healthAvailabilityIndicator", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__healthAvailable(t_Rtcm1020Data *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isHealthAvailable());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_Rtcm1020Data_get__lNFifthString(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getLNFifthString());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__lNFifthString(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setLNFifthString(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "lNFifthString", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__lNThirdString(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getLNThirdString());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__lNThirdString(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setLNThirdString(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "lNThirdString", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__m(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getM());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__m(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setM(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "m", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__n4(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getN4());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__n4(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setN4(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "n4", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__nA(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNA());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__nA(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNA(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nA", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__nt(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNt());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__nt(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNt(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nt", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p1(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP1());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p1(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP1(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p1", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p2(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP2());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p2(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP2(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p2", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p3(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP3());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p3(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP3(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p3", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__p4(t_Rtcm1020Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getP4());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1020Data_set__p4(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setP4(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "p4", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__tauC(t_Rtcm1020Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTauC());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1020Data_set__tauC(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTauC(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tauC", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__tauGps(t_Rtcm1020Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTauGps());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1020Data_set__tauGps(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTauGps(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tauGps", arg);
                return -1;
              }

              static PyObject *t_Rtcm1020Data_get__tk(t_Rtcm1020Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getTk());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1020Data_set__tk(t_Rtcm1020Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setTk(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "tk", arg);
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
#include "org/orekit/gnss/metric/parser/PythonAbstractEncodedMessage.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonAbstractEncodedMessage::class$ = NULL;
          jmethodID *PythonAbstractEncodedMessage::mids$ = NULL;
          bool PythonAbstractEncodedMessage::live$ = false;

          jclass PythonAbstractEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonAbstractEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_fetchByte_f2f64475e4580546] = env->getMethodID(cls, "fetchByte", "()I");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractEncodedMessage::PythonAbstractEncodedMessage() : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonAbstractEncodedMessage::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonAbstractEncodedMessage::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonAbstractEncodedMessage::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_PythonAbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractEncodedMessage_init_(t_PythonAbstractEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractEncodedMessage_finalize(t_PythonAbstractEncodedMessage *self);
          static PyObject *t_PythonAbstractEncodedMessage_pythonExtension(t_PythonAbstractEncodedMessage *self, PyObject *args);
          static jint JNICALL t_PythonAbstractEncodedMessage_fetchByte0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractEncodedMessage_get__self(t_PythonAbstractEncodedMessage *self, void *data);
          static PyGetSetDef t_PythonAbstractEncodedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractEncodedMessage, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractEncodedMessage)[] = {
            { Py_tp_methods, t_PythonAbstractEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractEncodedMessage_init_ },
            { Py_tp_getset, t_PythonAbstractEncodedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(PythonAbstractEncodedMessage, t_PythonAbstractEncodedMessage, PythonAbstractEncodedMessage);

          void t_PythonAbstractEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractEncodedMessage), &PY_TYPE_DEF(PythonAbstractEncodedMessage), module, "PythonAbstractEncodedMessage", 1);
          }

          void t_PythonAbstractEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncodedMessage), "class_", make_descriptor(PythonAbstractEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncodedMessage), "wrapfn_", make_descriptor(t_PythonAbstractEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncodedMessage), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractEncodedMessage::initializeClass);
            JNINativeMethod methods[] = {
              { "fetchByte", "()I", (void *) t_PythonAbstractEncodedMessage_fetchByte0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractEncodedMessage_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractEncodedMessage::wrap_Object(PythonAbstractEncodedMessage(((t_PythonAbstractEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractEncodedMessage_init_(t_PythonAbstractEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            PythonAbstractEncodedMessage object((jobject) NULL);

            INT_CALL(object = PythonAbstractEncodedMessage());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractEncodedMessage_finalize(t_PythonAbstractEncodedMessage *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractEncodedMessage_pythonExtension(t_PythonAbstractEncodedMessage *self, PyObject *args)
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

          static jint JNICALL t_PythonAbstractEncodedMessage_fetchByte0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncodedMessage::mids$[PythonAbstractEncodedMessage::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "fetchByte", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("fetchByte", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static void JNICALL t_PythonAbstractEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncodedMessage::mids$[PythonAbstractEncodedMessage::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractEncodedMessage::mids$[PythonAbstractEncodedMessage::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractEncodedMessage_get__self(t_PythonAbstractEncodedMessage *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/AbstractCycleSlipDetector.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectors.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractCycleSlipDetector::class$ = NULL;
          jmethodID *AbstractCycleSlipDetector::mids$ = NULL;
          bool AbstractCycleSlipDetector::live$ = false;

          jclass AbstractCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_detect_fa7c1e622bc91b53] = env->getMethodID(cls, "detect", "(Ljava/util/List;)Ljava/util/List;");
              mids$[mid_manageData_a74883e6a7063961] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_getResults_a6156df500549a58] = env->getMethodID(cls, "getResults", "()Ljava/util/List;");
              mids$[mid_getMinMeasurementNumber_f2f64475e4580546] = env->getMethodID(cls, "getMinMeasurementNumber", "()I");
              mids$[mid_getMaxTimeBeetween2Measurement_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxTimeBeetween2Measurement", "()D");
              mids$[mid_getStuffReference_a6156df500549a58] = env->getMethodID(cls, "getStuffReference", "()Ljava/util/List;");
              mids$[mid_cycleSlipDataSet_caa451652427585a] = env->getMethodID(cls, "cycleSlipDataSet", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/gnss/Frequency;)V");
              mids$[mid_setName_7d9ccf00009ef79e] = env->getMethodID(cls, "setName", "(ILorg/orekit/gnss/SatelliteSystem;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List AbstractCycleSlipDetector::detect(const ::java::util::List & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_detect_fa7c1e622bc91b53], a0.this$));
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
        namespace gnss {
          static PyObject *t_AbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractCycleSlipDetector_detect(t_AbstractCycleSlipDetector *self, PyObject *arg);

          static PyMethodDef t_AbstractCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_AbstractCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractCycleSlipDetector, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractCycleSlipDetector, detect, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractCycleSlipDetector)[] = {
            { Py_tp_methods, t_AbstractCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractCycleSlipDetector, t_AbstractCycleSlipDetector, AbstractCycleSlipDetector);

          void t_AbstractCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractCycleSlipDetector), &PY_TYPE_DEF(AbstractCycleSlipDetector), module, "AbstractCycleSlipDetector", 0);
          }

          void t_AbstractCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCycleSlipDetector), "class_", make_descriptor(AbstractCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCycleSlipDetector), "wrapfn_", make_descriptor(t_AbstractCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_AbstractCycleSlipDetector::wrap_Object(AbstractCycleSlipDetector(((t_AbstractCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_AbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractCycleSlipDetector_detect(t_AbstractCycleSlipDetector *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.detect(a0));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CycleSlipDetectorResults));
            }

            PyErr_SetArgsError((PyObject *) self, "detect", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *SmoothStepFactory$FieldSmoothStepFunction::class$ = NULL;
        jmethodID *SmoothStepFactory$FieldSmoothStepFunction::mids$ = NULL;
        bool SmoothStepFactory$FieldSmoothStepFunction::live$ = false;

        jclass SmoothStepFactory$FieldSmoothStepFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/SmoothStepFactory$FieldSmoothStepFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_cc0a3d6abf820939] = env->getMethodID(cls, "value", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_d3398190482814dc] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_d520dcedf02b9ea8] = env->getMethodID(cls, "value", "(DDLorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_checkInputEdges_1d715fa3b7b756e1] = env->getMethodID(cls, "checkInputEdges", "(DD)V");
            mids$[mid_clampInput_d520dcedf02b9ea8] = env->getMethodID(cls, "clampInput", "(DDLorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_normalizeInput_d520dcedf02b9ea8] = env->getMethodID(cls, "normalizeInput", "(DDLorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement SmoothStepFactory$FieldSmoothStepFunction::value(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_cc0a3d6abf820939], a0));
        }

        ::org::hipparchus::CalculusFieldElement SmoothStepFactory$FieldSmoothStepFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_d3398190482814dc], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement SmoothStepFactory$FieldSmoothStepFunction::value(jdouble a0, jdouble a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_d520dcedf02b9ea8], a0, a1, a2.this$));
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
      namespace polynomials {
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_of_(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_value(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args);
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_get__parameters_(t_SmoothStepFactory$FieldSmoothStepFunction *self, void *data);
        static PyGetSetDef t_SmoothStepFactory$FieldSmoothStepFunction__fields_[] = {
          DECLARE_GET_FIELD(t_SmoothStepFactory$FieldSmoothStepFunction, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmoothStepFactory$FieldSmoothStepFunction__methods_[] = {
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, of_, METH_VARARGS),
          DECLARE_METHOD(t_SmoothStepFactory$FieldSmoothStepFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmoothStepFactory$FieldSmoothStepFunction)[] = {
          { Py_tp_methods, t_SmoothStepFactory$FieldSmoothStepFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SmoothStepFactory$FieldSmoothStepFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmoothStepFactory$FieldSmoothStepFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::polynomials::FieldPolynomialFunction),
          NULL
        };

        DEFINE_TYPE(SmoothStepFactory$FieldSmoothStepFunction, t_SmoothStepFactory$FieldSmoothStepFunction, SmoothStepFactory$FieldSmoothStepFunction);
        PyObject *t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(const SmoothStepFactory$FieldSmoothStepFunction& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SmoothStepFactory$FieldSmoothStepFunction *self = (t_SmoothStepFactory$FieldSmoothStepFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SmoothStepFactory$FieldSmoothStepFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SmoothStepFactory$FieldSmoothStepFunction::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SmoothStepFactory$FieldSmoothStepFunction *self = (t_SmoothStepFactory$FieldSmoothStepFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SmoothStepFactory$FieldSmoothStepFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), &PY_TYPE_DEF(SmoothStepFactory$FieldSmoothStepFunction), module, "SmoothStepFactory$FieldSmoothStepFunction", 0);
        }

        void t_SmoothStepFactory$FieldSmoothStepFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), "class_", make_descriptor(SmoothStepFactory$FieldSmoothStepFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), "wrapfn_", make_descriptor(t_SmoothStepFactory$FieldSmoothStepFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmoothStepFactory$FieldSmoothStepFunction::initializeClass, 1)))
            return NULL;
          return t_SmoothStepFactory$FieldSmoothStepFunction::wrap_Object(SmoothStepFactory$FieldSmoothStepFunction(((t_SmoothStepFactory$FieldSmoothStepFunction *) arg)->object.this$));
        }
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmoothStepFactory$FieldSmoothStepFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_of_(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_value(t_SmoothStepFactory$FieldSmoothStepFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "DDK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(SmoothStepFactory$FieldSmoothStepFunction), (PyObject *) self, "value", args, 2);
        }
        static PyObject *t_SmoothStepFactory$FieldSmoothStepFunction_get__parameters_(t_SmoothStepFactory$FieldSmoothStepFunction *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *SensorMeanPlaneCrossing$CrossingResult::class$ = NULL;
        jmethodID *SensorMeanPlaneCrossing$CrossingResult::mids$ = NULL;
        bool SensorMeanPlaneCrossing$CrossingResult::live$ = false;

        jclass SensorMeanPlaneCrossing$CrossingResult::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/SensorMeanPlaneCrossing$CrossingResult");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f30400b29d64a029] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLine_456d9a2f64d6b28d] = env->getMethodID(cls, "getLine", "()D");
            mids$[mid_getTarget_17a952530a808943] = env->getMethodID(cls, "getTarget", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getTargetDirection_17a952530a808943] = env->getMethodID(cls, "getTargetDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getTargetDirectionDerivative_17a952530a808943] = env->getMethodID(cls, "getTargetDirectionDerivative", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SensorMeanPlaneCrossing$CrossingResult::SensorMeanPlaneCrossing$CrossingResult(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f30400b29d64a029, a0.this$, a1, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::time::AbsoluteDate SensorMeanPlaneCrossing$CrossingResult::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
        }

        jdouble SensorMeanPlaneCrossing$CrossingResult::getLine() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing$CrossingResult::getTarget() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTarget_17a952530a808943]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing$CrossingResult::getTargetDirection() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTargetDirection_17a952530a808943]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SensorMeanPlaneCrossing$CrossingResult::getTargetDirectionDerivative() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTargetDirectionDerivative_17a952530a808943]));
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
    namespace rugged {
      namespace linesensor {
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SensorMeanPlaneCrossing$CrossingResult_init_(t_SensorMeanPlaneCrossing$CrossingResult *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getDate(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getLine(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTarget(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTargetDirection(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTargetDirectionDerivative(t_SensorMeanPlaneCrossing$CrossingResult *self);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__date(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__line(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__target(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__targetDirection(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__targetDirectionDerivative(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data);
        static PyGetSetDef t_SensorMeanPlaneCrossing$CrossingResult__fields_[] = {
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, date),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, line),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, target),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, targetDirection),
          DECLARE_GET_FIELD(t_SensorMeanPlaneCrossing$CrossingResult, targetDirectionDerivative),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SensorMeanPlaneCrossing$CrossingResult__methods_[] = {
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getDate, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getLine, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getTarget, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getTargetDirection, METH_NOARGS),
          DECLARE_METHOD(t_SensorMeanPlaneCrossing$CrossingResult, getTargetDirectionDerivative, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SensorMeanPlaneCrossing$CrossingResult)[] = {
          { Py_tp_methods, t_SensorMeanPlaneCrossing$CrossingResult__methods_ },
          { Py_tp_init, (void *) t_SensorMeanPlaneCrossing$CrossingResult_init_ },
          { Py_tp_getset, t_SensorMeanPlaneCrossing$CrossingResult__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SensorMeanPlaneCrossing$CrossingResult)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SensorMeanPlaneCrossing$CrossingResult, t_SensorMeanPlaneCrossing$CrossingResult, SensorMeanPlaneCrossing$CrossingResult);

        void t_SensorMeanPlaneCrossing$CrossingResult::install(PyObject *module)
        {
          installType(&PY_TYPE(SensorMeanPlaneCrossing$CrossingResult), &PY_TYPE_DEF(SensorMeanPlaneCrossing$CrossingResult), module, "SensorMeanPlaneCrossing$CrossingResult", 0);
        }

        void t_SensorMeanPlaneCrossing$CrossingResult::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing$CrossingResult), "class_", make_descriptor(SensorMeanPlaneCrossing$CrossingResult::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing$CrossingResult), "wrapfn_", make_descriptor(t_SensorMeanPlaneCrossing$CrossingResult::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SensorMeanPlaneCrossing$CrossingResult), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SensorMeanPlaneCrossing$CrossingResult::initializeClass, 1)))
            return NULL;
          return t_SensorMeanPlaneCrossing$CrossingResult::wrap_Object(SensorMeanPlaneCrossing$CrossingResult(((t_SensorMeanPlaneCrossing$CrossingResult *) arg)->object.this$));
        }
        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SensorMeanPlaneCrossing$CrossingResult::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SensorMeanPlaneCrossing$CrossingResult_init_(t_SensorMeanPlaneCrossing$CrossingResult *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
          SensorMeanPlaneCrossing$CrossingResult object((jobject) NULL);

          if (!parseArgs(args, "kDkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = SensorMeanPlaneCrossing$CrossingResult(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getDate(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getLine(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLine());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTarget(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getTarget());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTargetDirection(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getTargetDirection());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_getTargetDirectionDerivative(t_SensorMeanPlaneCrossing$CrossingResult *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getTargetDirectionDerivative());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__date(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__line(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLine());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__target(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getTarget());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__targetDirection(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getTargetDirection());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SensorMeanPlaneCrossing$CrossingResult_get__targetDirectionDerivative(t_SensorMeanPlaneCrossing$CrossingResult *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getTargetDirectionDerivative());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/AstronomicalAmplitudeReader.h"
#include "java/io/IOException.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "java/io/InputStream.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *AstronomicalAmplitudeReader::class$ = NULL;
          jmethodID *AstronomicalAmplitudeReader::mids$ = NULL;
          bool AstronomicalAmplitudeReader::live$ = false;

          jclass AstronomicalAmplitudeReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/AstronomicalAmplitudeReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8b8ad8f318d7ad17] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;IIID)V");
              mids$[mid_getAstronomicalAmplitudesMap_d6753b7055940a54] = env->getMethodID(cls, "getAstronomicalAmplitudesMap", "()Ljava/util/Map;");
              mids$[mid_getSupportedNames_0090f7797e403f43] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_stillAcceptsData_e470b6d9e0d979db] = env->getMethodID(cls, "stillAcceptsData", "()Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AstronomicalAmplitudeReader::AstronomicalAmplitudeReader(const ::java::lang::String & a0, jint a1, jint a2, jint a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8b8ad8f318d7ad17, a0.this$, a1, a2, a3, a4)) {}

          ::java::util::Map AstronomicalAmplitudeReader::getAstronomicalAmplitudesMap() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getAstronomicalAmplitudesMap_d6753b7055940a54]));
          }

          ::java::lang::String AstronomicalAmplitudeReader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_0090f7797e403f43]));
          }

          void AstronomicalAmplitudeReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
          }

          jboolean AstronomicalAmplitudeReader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_e470b6d9e0d979db]);
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
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_AstronomicalAmplitudeReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AstronomicalAmplitudeReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AstronomicalAmplitudeReader_init_(t_AstronomicalAmplitudeReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AstronomicalAmplitudeReader_getAstronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self);
          static PyObject *t_AstronomicalAmplitudeReader_getSupportedNames(t_AstronomicalAmplitudeReader *self);
          static PyObject *t_AstronomicalAmplitudeReader_loadData(t_AstronomicalAmplitudeReader *self, PyObject *args);
          static PyObject *t_AstronomicalAmplitudeReader_stillAcceptsData(t_AstronomicalAmplitudeReader *self);
          static PyObject *t_AstronomicalAmplitudeReader_get__astronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self, void *data);
          static PyObject *t_AstronomicalAmplitudeReader_get__supportedNames(t_AstronomicalAmplitudeReader *self, void *data);
          static PyGetSetDef t_AstronomicalAmplitudeReader__fields_[] = {
            DECLARE_GET_FIELD(t_AstronomicalAmplitudeReader, astronomicalAmplitudesMap),
            DECLARE_GET_FIELD(t_AstronomicalAmplitudeReader, supportedNames),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AstronomicalAmplitudeReader__methods_[] = {
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, getAstronomicalAmplitudesMap, METH_NOARGS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_AstronomicalAmplitudeReader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AstronomicalAmplitudeReader)[] = {
            { Py_tp_methods, t_AstronomicalAmplitudeReader__methods_ },
            { Py_tp_init, (void *) t_AstronomicalAmplitudeReader_init_ },
            { Py_tp_getset, t_AstronomicalAmplitudeReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AstronomicalAmplitudeReader)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AstronomicalAmplitudeReader, t_AstronomicalAmplitudeReader, AstronomicalAmplitudeReader);

          void t_AstronomicalAmplitudeReader::install(PyObject *module)
          {
            installType(&PY_TYPE(AstronomicalAmplitudeReader), &PY_TYPE_DEF(AstronomicalAmplitudeReader), module, "AstronomicalAmplitudeReader", 0);
          }

          void t_AstronomicalAmplitudeReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AstronomicalAmplitudeReader), "class_", make_descriptor(AstronomicalAmplitudeReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AstronomicalAmplitudeReader), "wrapfn_", make_descriptor(t_AstronomicalAmplitudeReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AstronomicalAmplitudeReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AstronomicalAmplitudeReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AstronomicalAmplitudeReader::initializeClass, 1)))
              return NULL;
            return t_AstronomicalAmplitudeReader::wrap_Object(AstronomicalAmplitudeReader(((t_AstronomicalAmplitudeReader *) arg)->object.this$));
          }
          static PyObject *t_AstronomicalAmplitudeReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AstronomicalAmplitudeReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AstronomicalAmplitudeReader_init_(t_AstronomicalAmplitudeReader *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jdouble a4;
            AstronomicalAmplitudeReader object((jobject) NULL);

            if (!parseArgs(args, "sIIID", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = AstronomicalAmplitudeReader(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AstronomicalAmplitudeReader_getAstronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getAstronomicalAmplitudesMap());
            return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(Integer), ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_AstronomicalAmplitudeReader_getSupportedNames(t_AstronomicalAmplitudeReader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_AstronomicalAmplitudeReader_loadData(t_AstronomicalAmplitudeReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "loadData", args);
            return NULL;
          }

          static PyObject *t_AstronomicalAmplitudeReader_stillAcceptsData(t_AstronomicalAmplitudeReader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_AstronomicalAmplitudeReader_get__astronomicalAmplitudesMap(t_AstronomicalAmplitudeReader *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getAstronomicalAmplitudesMap());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_AstronomicalAmplitudeReader_get__supportedNames(t_AstronomicalAmplitudeReader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/RombergIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *RombergIntegrator::class$ = NULL;
        jmethodID *RombergIntegrator::mids$ = NULL;
        bool RombergIntegrator::live$ = false;
        jint RombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass RombergIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/RombergIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_b5a15021085cabdb] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_456d9a2f64d6b28d] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ROMBERG_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "ROMBERG_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RombergIntegrator::RombergIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        RombergIntegrator::RombergIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

        RombergIntegrator::RombergIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b5a15021085cabdb, a0, a1, a2, a3)) {}
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
      namespace integration {
        static PyObject *t_RombergIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RombergIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RombergIntegrator_init_(t_RombergIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_RombergIntegrator__methods_[] = {
          DECLARE_METHOD(t_RombergIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RombergIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RombergIntegrator)[] = {
          { Py_tp_methods, t_RombergIntegrator__methods_ },
          { Py_tp_init, (void *) t_RombergIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RombergIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(RombergIntegrator, t_RombergIntegrator, RombergIntegrator);

        void t_RombergIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(RombergIntegrator), &PY_TYPE_DEF(RombergIntegrator), module, "RombergIntegrator", 0);
        }

        void t_RombergIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "class_", make_descriptor(RombergIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "wrapfn_", make_descriptor(t_RombergIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(RombergIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "ROMBERG_MAX_ITERATIONS_COUNT", make_descriptor(RombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_RombergIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RombergIntegrator::initializeClass, 1)))
            return NULL;
          return t_RombergIntegrator::wrap_Object(RombergIntegrator(((t_RombergIntegrator *) arg)->object.this$));
        }
        static PyObject *t_RombergIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RombergIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RombergIntegrator_init_(t_RombergIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              RombergIntegrator object((jobject) NULL);

              INT_CALL(object = RombergIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              RombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = RombergIntegrator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              jint a3;
              RombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = RombergIntegrator(a0, a1, a2, a3));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/filtering/kalman/extended/NonLinearProcess.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {

          ::java::lang::Class *ExtendedKalmanFilter::class$ = NULL;
          jmethodID *ExtendedKalmanFilter::mids$ = NULL;
          bool ExtendedKalmanFilter::live$ = false;

          jclass ExtendedKalmanFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/extended/ExtendedKalmanFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1c852476e94d0e17] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/hipparchus/filtering/kalman/extended/NonLinearProcess;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
              mids$[mid_estimationStep_01cd341bc5eb698c] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ExtendedKalmanFilter::ExtendedKalmanFilter(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::hipparchus::filtering::kalman::extended::NonLinearProcess & a1, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a2) : ::org::hipparchus::filtering::kalman::AbstractKalmanFilter(env->newObject(initializeClass, &mids$, mid_init$_1c852476e94d0e17, a0.this$, a1.this$, a2.this$)) {}

          ::org::hipparchus::filtering::kalman::ProcessEstimate ExtendedKalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_01cd341bc5eb698c], a0.this$));
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
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        namespace extended {
          static PyObject *t_ExtendedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ExtendedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ExtendedKalmanFilter_of_(t_ExtendedKalmanFilter *self, PyObject *args);
          static int t_ExtendedKalmanFilter_init_(t_ExtendedKalmanFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ExtendedKalmanFilter_estimationStep(t_ExtendedKalmanFilter *self, PyObject *args);
          static PyObject *t_ExtendedKalmanFilter_get__parameters_(t_ExtendedKalmanFilter *self, void *data);
          static PyGetSetDef t_ExtendedKalmanFilter__fields_[] = {
            DECLARE_GET_FIELD(t_ExtendedKalmanFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ExtendedKalmanFilter__methods_[] = {
            DECLARE_METHOD(t_ExtendedKalmanFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ExtendedKalmanFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ExtendedKalmanFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_ExtendedKalmanFilter, estimationStep, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ExtendedKalmanFilter)[] = {
            { Py_tp_methods, t_ExtendedKalmanFilter__methods_ },
            { Py_tp_init, (void *) t_ExtendedKalmanFilter_init_ },
            { Py_tp_getset, t_ExtendedKalmanFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ExtendedKalmanFilter)[] = {
            &PY_TYPE_DEF(::org::hipparchus::filtering::kalman::AbstractKalmanFilter),
            NULL
          };

          DEFINE_TYPE(ExtendedKalmanFilter, t_ExtendedKalmanFilter, ExtendedKalmanFilter);
          PyObject *t_ExtendedKalmanFilter::wrap_Object(const ExtendedKalmanFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ExtendedKalmanFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ExtendedKalmanFilter *self = (t_ExtendedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ExtendedKalmanFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ExtendedKalmanFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ExtendedKalmanFilter *self = (t_ExtendedKalmanFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ExtendedKalmanFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(ExtendedKalmanFilter), &PY_TYPE_DEF(ExtendedKalmanFilter), module, "ExtendedKalmanFilter", 0);
          }

          void t_ExtendedKalmanFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedKalmanFilter), "class_", make_descriptor(ExtendedKalmanFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedKalmanFilter), "wrapfn_", make_descriptor(t_ExtendedKalmanFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedKalmanFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ExtendedKalmanFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ExtendedKalmanFilter::initializeClass, 1)))
              return NULL;
            return t_ExtendedKalmanFilter::wrap_Object(ExtendedKalmanFilter(((t_ExtendedKalmanFilter *) arg)->object.this$));
          }
          static PyObject *t_ExtendedKalmanFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ExtendedKalmanFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ExtendedKalmanFilter_of_(t_ExtendedKalmanFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ExtendedKalmanFilter_init_(t_ExtendedKalmanFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::extended::NonLinearProcess a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::filtering::kalman::ProcessEstimate a2((jobject) NULL);
            ExtendedKalmanFilter object((jobject) NULL);

            if (!parseArgs(args, "kKk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::filtering::kalman::extended::NonLinearProcess::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &a1, &p1, ::org::hipparchus::filtering::kalman::extended::t_NonLinearProcess::parameters_, &a2))
            {
              INT_CALL(object = ExtendedKalmanFilter(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ExtendedKalmanFilter_estimationStep(t_ExtendedKalmanFilter *self, PyObject *args)
          {
            ::org::hipparchus::filtering::kalman::Measurement a0((jobject) NULL);
            ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::filtering::kalman::Measurement::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.estimationStep(a0));
              return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
            }

            return callSuper(PY_TYPE(ExtendedKalmanFilter), (PyObject *) self, "estimationStep", args, 2);
          }
          static PyObject *t_ExtendedKalmanFilter_get__parameters_(t_ExtendedKalmanFilter *self, void *data)
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
#include "org/orekit/orbits/FieldOrbitHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldOrbitHermiteInterpolator::class$ = NULL;
      jmethodID *FieldOrbitHermiteInterpolator::mids$ = NULL;
      bool FieldOrbitHermiteInterpolator::live$ = false;

      jclass FieldOrbitHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldOrbitHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b1992bd1bb70f476] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_2ec8e00deddf59e8] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_2844b958be24763f] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_8ee7bc978fec63e6] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getPVAFilter_237181d932324188] = env->getMethodID(cls, "getPVAFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_interpolate_7aa8759b5cd6f696] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/orbits/FieldOrbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b1992bd1bb70f476, a0.this$)) {}

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2ec8e00deddf59e8, a0, a1.this$)) {}

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_2844b958be24763f, a0, a1.this$, a2.this$)) {}

      FieldOrbitHermiteInterpolator::FieldOrbitHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::orbits::AbstractFieldOrbitInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8ee7bc978fec63e6, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter FieldOrbitHermiteInterpolator::getPVAFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getPVAFilter_237181d932324188]));
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
      static PyObject *t_FieldOrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldOrbitHermiteInterpolator_of_(t_FieldOrbitHermiteInterpolator *self, PyObject *args);
      static int t_FieldOrbitHermiteInterpolator_init_(t_FieldOrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldOrbitHermiteInterpolator_getPVAFilter(t_FieldOrbitHermiteInterpolator *self);
      static PyObject *t_FieldOrbitHermiteInterpolator_get__pVAFilter(t_FieldOrbitHermiteInterpolator *self, void *data);
      static PyObject *t_FieldOrbitHermiteInterpolator_get__parameters_(t_FieldOrbitHermiteInterpolator *self, void *data);
      static PyGetSetDef t_FieldOrbitHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldOrbitHermiteInterpolator, pVAFilter),
        DECLARE_GET_FIELD(t_FieldOrbitHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldOrbitHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldOrbitHermiteInterpolator, getPVAFilter, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldOrbitHermiteInterpolator)[] = {
        { Py_tp_methods, t_FieldOrbitHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldOrbitHermiteInterpolator_init_ },
        { Py_tp_getset, t_FieldOrbitHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldOrbitHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::AbstractFieldOrbitInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldOrbitHermiteInterpolator, t_FieldOrbitHermiteInterpolator, FieldOrbitHermiteInterpolator);
      PyObject *t_FieldOrbitHermiteInterpolator::wrap_Object(const FieldOrbitHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitHermiteInterpolator *self = (t_FieldOrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldOrbitHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldOrbitHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldOrbitHermiteInterpolator *self = (t_FieldOrbitHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldOrbitHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldOrbitHermiteInterpolator), &PY_TYPE_DEF(FieldOrbitHermiteInterpolator), module, "FieldOrbitHermiteInterpolator", 0);
      }

      void t_FieldOrbitHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitHermiteInterpolator), "class_", make_descriptor(FieldOrbitHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitHermiteInterpolator), "wrapfn_", make_descriptor(t_FieldOrbitHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrbitHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldOrbitHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldOrbitHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldOrbitHermiteInterpolator::wrap_Object(FieldOrbitHermiteInterpolator(((t_FieldOrbitHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldOrbitHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldOrbitHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldOrbitHermiteInterpolator_of_(t_FieldOrbitHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldOrbitHermiteInterpolator_init_(t_FieldOrbitHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            FieldOrbitHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = FieldOrbitHermiteInterpolator(a0, a1, a2, a3));
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

      static PyObject *t_FieldOrbitHermiteInterpolator_getPVAFilter(t_FieldOrbitHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }
      static PyObject *t_FieldOrbitHermiteInterpolator_get__parameters_(t_FieldOrbitHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldOrbitHermiteInterpolator_get__pVAFilter(t_FieldOrbitHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVAFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/NdmWriter.h"
#include "java/io/IOException.h"
#include "org/orekit/files/ccsds/ndm/Ndm.h"
#include "org/orekit/files/ccsds/utils/generation/Generator.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/WriterBuilder.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *NdmWriter::class$ = NULL;
          jmethodID *NdmWriter::mids$ = NULL;
          bool NdmWriter::live$ = false;

          jclass NdmWriter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/NdmWriter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_32e229bc29547e9c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/WriterBuilder;)V");
              mids$[mid_writeComment_76b5b98a4c48c4ea] = env->getMethodID(cls, "writeComment", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Ljava/lang/String;)V");
              mids$[mid_writeConstituent_922bd8359c08f6d1] = env->getMethodID(cls, "writeConstituent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/NdmConstituent;)V");
              mids$[mid_writeMessage_1b376ed24f005a37] = env->getMethodID(cls, "writeMessage", "(Lorg/orekit/files/ccsds/utils/generation/Generator;Lorg/orekit/files/ccsds/ndm/Ndm;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NdmWriter::NdmWriter(const ::org::orekit::files::ccsds::ndm::WriterBuilder & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_32e229bc29547e9c, a0.this$)) {}

          void NdmWriter::writeComment(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_writeComment_76b5b98a4c48c4ea], a0.this$, a1.this$);
          }

          void NdmWriter::writeConstituent(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::NdmConstituent & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_writeConstituent_922bd8359c08f6d1], a0.this$, a1.this$);
          }

          void NdmWriter::writeMessage(const ::org::orekit::files::ccsds::utils::generation::Generator & a0, const ::org::orekit::files::ccsds::ndm::Ndm & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_writeMessage_1b376ed24f005a37], a0.this$, a1.this$);
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
          static PyObject *t_NdmWriter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmWriter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NdmWriter_init_(t_NdmWriter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NdmWriter_writeComment(t_NdmWriter *self, PyObject *args);
          static PyObject *t_NdmWriter_writeConstituent(t_NdmWriter *self, PyObject *args);
          static PyObject *t_NdmWriter_writeMessage(t_NdmWriter *self, PyObject *args);

          static PyMethodDef t_NdmWriter__methods_[] = {
            DECLARE_METHOD(t_NdmWriter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmWriter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmWriter, writeComment, METH_VARARGS),
            DECLARE_METHOD(t_NdmWriter, writeConstituent, METH_VARARGS),
            DECLARE_METHOD(t_NdmWriter, writeMessage, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NdmWriter)[] = {
            { Py_tp_methods, t_NdmWriter__methods_ },
            { Py_tp_init, (void *) t_NdmWriter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NdmWriter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NdmWriter, t_NdmWriter, NdmWriter);

          void t_NdmWriter::install(PyObject *module)
          {
            installType(&PY_TYPE(NdmWriter), &PY_TYPE_DEF(NdmWriter), module, "NdmWriter", 0);
          }

          void t_NdmWriter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmWriter), "class_", make_descriptor(NdmWriter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmWriter), "wrapfn_", make_descriptor(t_NdmWriter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmWriter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NdmWriter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NdmWriter::initializeClass, 1)))
              return NULL;
            return t_NdmWriter::wrap_Object(NdmWriter(((t_NdmWriter *) arg)->object.this$));
          }
          static PyObject *t_NdmWriter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NdmWriter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NdmWriter_init_(t_NdmWriter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::ndm::WriterBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            NdmWriter object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::ndm::WriterBuilder::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::t_WriterBuilder::parameters_))
            {
              INT_CALL(object = NdmWriter(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NdmWriter_writeComment(t_NdmWriter *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.writeComment(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeComment", args);
            return NULL;
          }

          static PyObject *t_NdmWriter_writeConstituent(t_NdmWriter *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
            ::org::orekit::files::ccsds::ndm::NdmConstituent a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::t_NdmConstituent::parameters_))
            {
              OBJ_CALL(self->object.writeConstituent(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeConstituent", args);
            return NULL;
          }

          static PyObject *t_NdmWriter_writeMessage(t_NdmWriter *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::generation::Generator a0((jobject) NULL);
            ::org::orekit::files::ccsds::ndm::Ndm a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::utils::generation::Generator::initializeClass, ::org::orekit::files::ccsds::ndm::Ndm::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.writeMessage(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "writeMessage", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/EulerIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *EulerIntegratorBuilder::class$ = NULL;
        jmethodID *EulerIntegratorBuilder::mids$ = NULL;
        bool EulerIntegratorBuilder::live$ = false;

        jclass EulerIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/EulerIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_501b0015ccc7d54e] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EulerIntegratorBuilder::EulerIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator EulerIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_501b0015ccc7d54e], a0.this$, a1.this$));
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
      namespace conversion {
        static PyObject *t_EulerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EulerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EulerIntegratorBuilder_init_(t_EulerIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EulerIntegratorBuilder_buildIntegrator(t_EulerIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_EulerIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_EulerIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EulerIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EulerIntegratorBuilder)[] = {
          { Py_tp_methods, t_EulerIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_EulerIntegratorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EulerIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EulerIntegratorBuilder, t_EulerIntegratorBuilder, EulerIntegratorBuilder);

        void t_EulerIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(EulerIntegratorBuilder), &PY_TYPE_DEF(EulerIntegratorBuilder), module, "EulerIntegratorBuilder", 0);
        }

        void t_EulerIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegratorBuilder), "class_", make_descriptor(EulerIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegratorBuilder), "wrapfn_", make_descriptor(t_EulerIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EulerIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EulerIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EulerIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_EulerIntegratorBuilder::wrap_Object(EulerIntegratorBuilder(((t_EulerIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_EulerIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EulerIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EulerIntegratorBuilder_init_(t_EulerIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          EulerIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = EulerIntegratorBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EulerIntegratorBuilder_buildIntegrator(t_EulerIntegratorBuilder *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::OrbitType a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::ode::AbstractIntegrator result((jobject) NULL);

          if (!parseArgs(args, "kK", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1));
            return ::org::hipparchus::ode::t_AbstractIntegrator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildIntegrator", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/Well44497b.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well44497b::class$ = NULL;
      jmethodID *Well44497b::mids$ = NULL;
      bool Well44497b::live$ = false;

      jclass Well44497b::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well44497b");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_3b603738d1eb3233] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_fefb08975c10f0a1] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_f2f64475e4580546] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well44497b::Well44497b() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      Well44497b::Well44497b(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3b603738d1eb3233, a0.this$)) {}

      Well44497b::Well44497b(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      Well44497b::Well44497b(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_fefb08975c10f0a1, a0)) {}

      jint Well44497b::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_f2f64475e4580546]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_Well44497b_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well44497b_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well44497b_init_(t_Well44497b *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well44497b_nextInt(t_Well44497b *self, PyObject *args);

      static PyMethodDef t_Well44497b__methods_[] = {
        DECLARE_METHOD(t_Well44497b, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497b, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497b, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well44497b)[] = {
        { Py_tp_methods, t_Well44497b__methods_ },
        { Py_tp_init, (void *) t_Well44497b_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well44497b)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well44497b, t_Well44497b, Well44497b);

      void t_Well44497b::install(PyObject *module)
      {
        installType(&PY_TYPE(Well44497b), &PY_TYPE_DEF(Well44497b), module, "Well44497b", 0);
      }

      void t_Well44497b::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497b), "class_", make_descriptor(Well44497b::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497b), "wrapfn_", make_descriptor(t_Well44497b::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497b), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well44497b_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well44497b::initializeClass, 1)))
          return NULL;
        return t_Well44497b::wrap_Object(Well44497b(((t_Well44497b *) arg)->object.this$));
      }
      static PyObject *t_Well44497b_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well44497b::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well44497b_init_(t_Well44497b *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well44497b object((jobject) NULL);

            INT_CALL(object = Well44497b());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well44497b object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well44497b(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well44497b object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well44497b(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well44497b object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well44497b(a0));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_Well44497b_nextInt(t_Well44497b *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well44497b), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/definitions/Units.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *Units::class$ = NULL;
          jmethodID *Units::mids$ = NULL;
          bool Units::live$ = false;
          ::org::orekit::utils::units::Unit *Units::DEG_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::DEG_PER_S_1_2 = NULL;
          ::org::orekit::utils::units::Unit *Units::DEG_PER_S_3_2 = NULL;
          ::org::orekit::utils::units::Unit *Units::HECTO_PASCAL = NULL;
          ::org::orekit::utils::units::Unit *Units::HZ_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KG_M2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM2_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KM2_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM3_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_KG = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S3 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S4 = NULL;
          ::org::orekit::utils::units::Unit *Units::M3_PER_KG = NULL;
          ::org::orekit::utils::units::Unit *Units::M3_PER_KGS = NULL;
          ::org::orekit::utils::units::Unit *Units::M3_PER_KGS2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M4 = NULL;
          ::org::orekit::utils::units::Unit *Units::M4_PER_KG = NULL;
          ::org::orekit::utils::units::Unit *Units::M4_PER_KG2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::M_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::NANO_TESLA = NULL;
          ::org::orekit::utils::units::Unit *Units::NB_PER_Y = NULL;
          ::org::orekit::utils::units::Unit *Units::N_M = NULL;
          ::org::orekit::utils::units::Unit *Units::N_M_S = NULL;
          ::org::orekit::utils::units::Unit *Units::ONE_PER_ER = NULL;
          ::org::orekit::utils::units::Unit *Units::ONE_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::REV_PER_DAY = NULL;
          ::org::orekit::utils::units::Unit *Units::REV_PER_DAY2_SCALED = NULL;
          ::org::orekit::utils::units::Unit *Units::REV_PER_DAY3_SCALED = NULL;
          ::org::orekit::utils::units::Unit *Units::W_PER_KG = NULL;

          jclass Units::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/Units");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEG_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "DEG_PER_S", "Lorg/orekit/utils/units/Unit;"));
              DEG_PER_S_1_2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "DEG_PER_S_1_2", "Lorg/orekit/utils/units/Unit;"));
              DEG_PER_S_3_2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "DEG_PER_S_3_2", "Lorg/orekit/utils/units/Unit;"));
              HECTO_PASCAL = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "HECTO_PASCAL", "Lorg/orekit/utils/units/Unit;"));
              HZ_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "HZ_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KG_M2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KG_M2", "Lorg/orekit/utils/units/Unit;"));
              KM2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM2", "Lorg/orekit/utils/units/Unit;"));
              KM2_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM2_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KM2_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM2_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              KM3_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM3_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              KM_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KM_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              M2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S3 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S3", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S4 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S4", "Lorg/orekit/utils/units/Unit;"));
              M3_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M3_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              M3_PER_KGS = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M3_PER_KGS", "Lorg/orekit/utils/units/Unit;"));
              M3_PER_KGS2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M3_PER_KGS2", "Lorg/orekit/utils/units/Unit;"));
              M4 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M4", "Lorg/orekit/utils/units/Unit;"));
              M4_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M4_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              M4_PER_KG2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M4_PER_KG2", "Lorg/orekit/utils/units/Unit;"));
              M_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M_PER_S", "Lorg/orekit/utils/units/Unit;"));
              M_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              NANO_TESLA = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "NANO_TESLA", "Lorg/orekit/utils/units/Unit;"));
              NB_PER_Y = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "NB_PER_Y", "Lorg/orekit/utils/units/Unit;"));
              N_M = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "N_M", "Lorg/orekit/utils/units/Unit;"));
              N_M_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "N_M_S", "Lorg/orekit/utils/units/Unit;"));
              ONE_PER_ER = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "ONE_PER_ER", "Lorg/orekit/utils/units/Unit;"));
              ONE_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "ONE_PER_S", "Lorg/orekit/utils/units/Unit;"));
              REV_PER_DAY = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "REV_PER_DAY", "Lorg/orekit/utils/units/Unit;"));
              REV_PER_DAY2_SCALED = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "REV_PER_DAY2_SCALED", "Lorg/orekit/utils/units/Unit;"));
              REV_PER_DAY3_SCALED = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "REV_PER_DAY3_SCALED", "Lorg/orekit/utils/units/Unit;"));
              W_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "W_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              live$ = true;
            }
            return (jclass) class$->this$;
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
          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_Units__methods_[] = {
            DECLARE_METHOD(t_Units, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Units, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Units)[] = {
            { Py_tp_methods, t_Units__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Units)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Units, t_Units, Units);

          void t_Units::install(PyObject *module)
          {
            installType(&PY_TYPE(Units), &PY_TYPE_DEF(Units), module, "Units", 0);
          }

          void t_Units::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "class_", make_descriptor(Units::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "wrapfn_", make_descriptor(t_Units::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "boxfn_", make_descriptor(boxObject));
            env->getClass(Units::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "DEG_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::DEG_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "DEG_PER_S_1_2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::DEG_PER_S_1_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "DEG_PER_S_3_2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::DEG_PER_S_3_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "HECTO_PASCAL", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::HECTO_PASCAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "HZ_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::HZ_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KG_M2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KG_M2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM2_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM2_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM2_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM2_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM3_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM3_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_KG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S3", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S4", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M3_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M3_PER_KG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M3_PER_KGS", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M3_PER_KGS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M3_PER_KGS2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M3_PER_KGS2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M4", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M4_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M4_PER_KG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M4_PER_KG2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M4_PER_KG2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "NANO_TESLA", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::NANO_TESLA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "NB_PER_Y", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::NB_PER_Y)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "N_M", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::N_M)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "N_M_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::N_M_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "ONE_PER_ER", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::ONE_PER_ER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "ONE_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::ONE_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "REV_PER_DAY", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::REV_PER_DAY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "REV_PER_DAY2_SCALED", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::REV_PER_DAY2_SCALED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "REV_PER_DAY3_SCALED", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::REV_PER_DAY3_SCALED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "W_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::W_PER_KG)));
          }

          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Units::initializeClass, 1)))
              return NULL;
            return t_Units::wrap_Object(Units(((t_Units *) arg)->object.this$));
          }
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Units::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonNormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonNormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonNormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonNormalizedSphericalHarmonicsProvider::live$ = false;

          jclass PythonNormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonNormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_456d9a2f64d6b28d] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_f2f64475e4580546] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_f2f64475e4580546] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_aaa854c403487cf3] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_b3b39360f3c8a6ac] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_5d593e1d60308d01] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonNormalizedSphericalHarmonicsProvider::PythonNormalizedSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonNormalizedSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonNormalizedSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonNormalizedSphericalHarmonicsProvider::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonNormalizedSphericalHarmonicsProvider_init_(t_PythonNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_finalize(t_PythonNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_pythonExtension(t_PythonNormalizedSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonNormalizedSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_get__self(t_PythonNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonNormalizedSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonNormalizedSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonNormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonNormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNormalizedSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonNormalizedSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonNormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonNormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonNormalizedSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonNormalizedSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonNormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonNormalizedSphericalHarmonicsProvider, t_PythonNormalizedSphericalHarmonicsProvider, PythonNormalizedSphericalHarmonicsProvider);

          void t_PythonNormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonNormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonNormalizedSphericalHarmonicsProvider), module, "PythonNormalizedSphericalHarmonicsProvider", 1);
          }

          void t_PythonNormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNormalizedSphericalHarmonicsProvider), "class_", make_descriptor(PythonNormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonNormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonNormalizedSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getTideSystem5 },
              { "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;", (void *) t_PythonNormalizedSphericalHarmonicsProvider_onDate6 },
              { "pythonDecRef", "()V", (void *) t_PythonNormalizedSphericalHarmonicsProvider_pythonDecRef7 },
            };
            env->registerNatives(cls, methods, 8);
          }

          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonNormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonNormalizedSphericalHarmonicsProvider::wrap_Object(PythonNormalizedSphericalHarmonicsProvider(((t_PythonNormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonNormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonNormalizedSphericalHarmonicsProvider_init_(t_PythonNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonNormalizedSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonNormalizedSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_finalize(t_PythonNormalizedSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_pythonExtension(t_PythonNormalizedSphericalHarmonicsProvider *self, PyObject *args)
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

          static jdouble JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getAe", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAe", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jint JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxDegree", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxDegree", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jint JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxOrder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxOrder", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jdouble JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getMu", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMu", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getReferenceDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getReferenceDate", result);
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

          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
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

          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "onDate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, &value))
            {
              throwTypeError("onDate", result);
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

          static void JNICALL t_PythonNormalizedSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_get__self(t_PythonNormalizedSphericalHarmonicsProvider *self, void *data)
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
#include "org/orekit/propagation/numerical/GLONASSNumericalPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/DataContext.h"
#include "org/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *GLONASSNumericalPropagator::class$ = NULL;
        jmethodID *GLONASSNumericalPropagator::mids$ = NULL;
        bool GLONASSNumericalPropagator::live$ = false;

        jclass GLONASSNumericalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/GLONASSNumericalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d6c6075679c991b2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/nonstiff/ClassicalRungeKuttaIntegrator;Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;Lorg/orekit/frames/Frame;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/data/DataContext;Z)V");
            mids$[mid_getGLONASSOrbitalElements_bf10fc365bc8e89d] = env->getMethodID(cls, "getGLONASSOrbitalElements", "()Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;");
            mids$[mid_propagate_889031abe87f3b14] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_createMapper_083e2bc1612e9def] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/StateMapper;");
            mids$[mid_getMainStateEquations_9c7da9606951e4f0] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/ODEIntegrator;)Lorg/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GLONASSNumericalPropagator::GLONASSNumericalPropagator(const ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator & a0, const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::attitudes::AttitudeProvider & a3, jdouble a4, const ::org::orekit::data::DataContext & a5, jboolean a6) : ::org::orekit::propagation::integration::AbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_d6c6075679c991b2, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$, a6)) {}

        ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements GLONASSNumericalPropagator::getGLONASSOrbitalElements() const
        {
          return ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements(env->callObjectMethod(this$, mids$[mid_getGLONASSOrbitalElements_bf10fc365bc8e89d]));
        }

        ::org::orekit::propagation::SpacecraftState GLONASSNumericalPropagator::propagate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_889031abe87f3b14], a0.this$));
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
      namespace numerical {
        static PyObject *t_GLONASSNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GLONASSNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GLONASSNumericalPropagator_init_(t_GLONASSNumericalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GLONASSNumericalPropagator_getGLONASSOrbitalElements(t_GLONASSNumericalPropagator *self);
        static PyObject *t_GLONASSNumericalPropagator_propagate(t_GLONASSNumericalPropagator *self, PyObject *args);
        static PyObject *t_GLONASSNumericalPropagator_get__gLONASSOrbitalElements(t_GLONASSNumericalPropagator *self, void *data);
        static PyGetSetDef t_GLONASSNumericalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_GLONASSNumericalPropagator, gLONASSOrbitalElements),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GLONASSNumericalPropagator__methods_[] = {
          DECLARE_METHOD(t_GLONASSNumericalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GLONASSNumericalPropagator, getGLONASSOrbitalElements, METH_NOARGS),
          DECLARE_METHOD(t_GLONASSNumericalPropagator, propagate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GLONASSNumericalPropagator)[] = {
          { Py_tp_methods, t_GLONASSNumericalPropagator__methods_ },
          { Py_tp_init, (void *) t_GLONASSNumericalPropagator_init_ },
          { Py_tp_getset, t_GLONASSNumericalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GLONASSNumericalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(GLONASSNumericalPropagator, t_GLONASSNumericalPropagator, GLONASSNumericalPropagator);

        void t_GLONASSNumericalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(GLONASSNumericalPropagator), &PY_TYPE_DEF(GLONASSNumericalPropagator), module, "GLONASSNumericalPropagator", 0);
        }

        void t_GLONASSNumericalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagator), "class_", make_descriptor(GLONASSNumericalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagator), "wrapfn_", make_descriptor(t_GLONASSNumericalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSNumericalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GLONASSNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GLONASSNumericalPropagator::initializeClass, 1)))
            return NULL;
          return t_GLONASSNumericalPropagator::wrap_Object(GLONASSNumericalPropagator(((t_GLONASSNumericalPropagator *) arg)->object.this$));
        }
        static PyObject *t_GLONASSNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GLONASSNumericalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GLONASSNumericalPropagator_init_(t_GLONASSNumericalPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator a0((jobject) NULL);
          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a1((jobject) NULL);
          ::org::orekit::frames::Frame a2((jobject) NULL);
          ::org::orekit::attitudes::AttitudeProvider a3((jobject) NULL);
          jdouble a4;
          ::org::orekit::data::DataContext a5((jobject) NULL);
          jboolean a6;
          GLONASSNumericalPropagator object((jobject) NULL);

          if (!parseArgs(args, "kkkkDkZ", ::org::hipparchus::ode::nonstiff::ClassicalRungeKuttaIntegrator::initializeClass, ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = GLONASSNumericalPropagator(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GLONASSNumericalPropagator_getGLONASSOrbitalElements(t_GLONASSNumericalPropagator *self)
        {
          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements result((jobject) NULL);
          OBJ_CALL(result = self->object.getGLONASSOrbitalElements());
          return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(result);
        }

        static PyObject *t_GLONASSNumericalPropagator_propagate(t_GLONASSNumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.propagate(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(GLONASSNumericalPropagator), (PyObject *) self, "propagate", args, 2);
        }

        static PyObject *t_GLONASSNumericalPropagator_get__gLONASSOrbitalElements(t_GLONASSNumericalPropagator *self, void *data)
        {
          ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements value((jobject) NULL);
          OBJ_CALL(value = self->object.getGLONASSOrbitalElements());
          return ::org::orekit::propagation::analytical::gnss::data::t_GLONASSOrbitalElements::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsBashforthFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsBashforthFieldIntegrator::class$ = NULL;
        jmethodID *AdamsBashforthFieldIntegrator::mids$ = NULL;
        bool AdamsBashforthFieldIntegrator::live$ = false;

        jclass AdamsBashforthFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsBashforthFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a9398ed2a13d6b42] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDD[D[D)V");
            mids$[mid_init$_b90e9d65ac061479] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDDDD)V");
            mids$[mid_errorEstimation_e2c124c0ae6f0f15] = env->getMethodID(cls, "errorEstimation", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/FieldMatrix;)D");
            mids$[mid_finalizeStep_2e4197dad990b4d5] = env->getMethodID(cls, "finalizeStep", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsBashforthFieldIntegrator::AdamsBashforthFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, const JArray< jdouble > & a4, const JArray< jdouble > & a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a9398ed2a13d6b42, a0.this$, a1, a2, a3, a4.this$, a5.this$)) {}

        AdamsBashforthFieldIntegrator::AdamsBashforthFieldIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5) : ::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b90e9d65ac061479, a0.this$, a1, a2, a3, a4, a5)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_AdamsBashforthFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsBashforthFieldIntegrator_of_(t_AdamsBashforthFieldIntegrator *self, PyObject *args);
        static int t_AdamsBashforthFieldIntegrator_init_(t_AdamsBashforthFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsBashforthFieldIntegrator_get__parameters_(t_AdamsBashforthFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdamsBashforthFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsBashforthFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsBashforthFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsBashforthFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsBashforthFieldIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsBashforthFieldIntegrator)[] = {
          { Py_tp_methods, t_AdamsBashforthFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsBashforthFieldIntegrator_init_ },
          { Py_tp_getset, t_AdamsBashforthFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsBashforthFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdamsFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsBashforthFieldIntegrator, t_AdamsBashforthFieldIntegrator, AdamsBashforthFieldIntegrator);
        PyObject *t_AdamsBashforthFieldIntegrator::wrap_Object(const AdamsBashforthFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegrator *self = (t_AdamsBashforthFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsBashforthFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsBashforthFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsBashforthFieldIntegrator *self = (t_AdamsBashforthFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsBashforthFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsBashforthFieldIntegrator), &PY_TYPE_DEF(AdamsBashforthFieldIntegrator), module, "AdamsBashforthFieldIntegrator", 0);
        }

        void t_AdamsBashforthFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegrator), "class_", make_descriptor(AdamsBashforthFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegrator), "wrapfn_", make_descriptor(t_AdamsBashforthFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsBashforthFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsBashforthFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsBashforthFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsBashforthFieldIntegrator::wrap_Object(AdamsBashforthFieldIntegrator(((t_AdamsBashforthFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsBashforthFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsBashforthFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsBashforthFieldIntegrator_of_(t_AdamsBashforthFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsBashforthFieldIntegrator_init_(t_AdamsBashforthFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              JArray< jdouble > a4((jobject) NULL);
              JArray< jdouble > a5((jobject) NULL);
              AdamsBashforthFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsBashforthFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              AdamsBashforthFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = AdamsBashforthFieldIntegrator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_AdamsBashforthFieldIntegrator_get__parameters_(t_AdamsBashforthFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ODEJacobiansProvider.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/NamedParameterJacobianProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEJacobiansProvider::class$ = NULL;
      jmethodID *ODEJacobiansProvider::mids$ = NULL;
      bool ODEJacobiansProvider::live$ = false;

      jclass ODEJacobiansProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEJacobiansProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeMainStateJacobian_bcd2923a18d32c0d] = env->getMethodID(cls, "computeMainStateJacobian", "(D[D[D)[[D");
          mids$[mid_computeParameterJacobian_b64b3db9d797dca8] = env->getMethodID(cls, "computeParameterJacobian", "(D[D[DLjava/lang/String;)[D");
          mids$[mid_getParametersNames_a6156df500549a58] = env->getMethodID(cls, "getParametersNames", "()Ljava/util/List;");
          mids$[mid_isSupported_6b161f495ea569b8] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > ODEJacobiansProvider::computeMainStateJacobian(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_computeMainStateJacobian_bcd2923a18d32c0d], a0, a1.this$, a2.this$));
      }

      JArray< jdouble > ODEJacobiansProvider::computeParameterJacobian(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::java::lang::String & a3) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeParameterJacobian_b64b3db9d797dca8], a0, a1.this$, a2.this$, a3.this$));
      }

      ::java::util::List ODEJacobiansProvider::getParametersNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersNames_a6156df500549a58]));
      }

      jboolean ODEJacobiansProvider::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_6b161f495ea569b8], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_ODEJacobiansProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEJacobiansProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEJacobiansProvider_computeMainStateJacobian(t_ODEJacobiansProvider *self, PyObject *args);
      static PyObject *t_ODEJacobiansProvider_computeParameterJacobian(t_ODEJacobiansProvider *self, PyObject *args);
      static PyObject *t_ODEJacobiansProvider_getParametersNames(t_ODEJacobiansProvider *self);
      static PyObject *t_ODEJacobiansProvider_isSupported(t_ODEJacobiansProvider *self, PyObject *arg);
      static PyObject *t_ODEJacobiansProvider_get__parametersNames(t_ODEJacobiansProvider *self, void *data);
      static PyGetSetDef t_ODEJacobiansProvider__fields_[] = {
        DECLARE_GET_FIELD(t_ODEJacobiansProvider, parametersNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEJacobiansProvider__methods_[] = {
        DECLARE_METHOD(t_ODEJacobiansProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEJacobiansProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEJacobiansProvider, computeMainStateJacobian, METH_VARARGS),
        DECLARE_METHOD(t_ODEJacobiansProvider, computeParameterJacobian, METH_VARARGS),
        DECLARE_METHOD(t_ODEJacobiansProvider, getParametersNames, METH_NOARGS),
        DECLARE_METHOD(t_ODEJacobiansProvider, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEJacobiansProvider)[] = {
        { Py_tp_methods, t_ODEJacobiansProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ODEJacobiansProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEJacobiansProvider)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::OrdinaryDifferentialEquation),
        NULL
      };

      DEFINE_TYPE(ODEJacobiansProvider, t_ODEJacobiansProvider, ODEJacobiansProvider);

      void t_ODEJacobiansProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEJacobiansProvider), &PY_TYPE_DEF(ODEJacobiansProvider), module, "ODEJacobiansProvider", 0);
      }

      void t_ODEJacobiansProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEJacobiansProvider), "class_", make_descriptor(ODEJacobiansProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEJacobiansProvider), "wrapfn_", make_descriptor(t_ODEJacobiansProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEJacobiansProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEJacobiansProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEJacobiansProvider::initializeClass, 1)))
          return NULL;
        return t_ODEJacobiansProvider::wrap_Object(ODEJacobiansProvider(((t_ODEJacobiansProvider *) arg)->object.this$));
      }
      static PyObject *t_ODEJacobiansProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEJacobiansProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ODEJacobiansProvider_computeMainStateJacobian(t_ODEJacobiansProvider *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.computeMainStateJacobian(a0, a1, a2));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "computeMainStateJacobian", args);
        return NULL;
      }

      static PyObject *t_ODEJacobiansProvider_computeParameterJacobian(t_ODEJacobiansProvider *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D[Ds", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeParameterJacobian(a0, a1, a2, a3));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeParameterJacobian", args);
        return NULL;
      }

      static PyObject *t_ODEJacobiansProvider_getParametersNames(t_ODEJacobiansProvider *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_ODEJacobiansProvider_isSupported(t_ODEJacobiansProvider *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_ODEJacobiansProvider_get__parametersNames(t_ODEJacobiansProvider *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "org/hipparchus/fraction/BigFraction$ConvergenceTest.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/fraction/BigFractionField.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Boolean.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFraction::class$ = NULL;
      jmethodID *BigFraction::mids$ = NULL;
      bool BigFraction::live$ = false;
      BigFraction *BigFraction::FOUR_FIFTHS = NULL;
      BigFraction *BigFraction::MINUS_ONE = NULL;
      BigFraction *BigFraction::ONE = NULL;
      BigFraction *BigFraction::ONE_FIFTH = NULL;
      BigFraction *BigFraction::ONE_HALF = NULL;
      BigFraction *BigFraction::ONE_QUARTER = NULL;
      BigFraction *BigFraction::ONE_THIRD = NULL;
      BigFraction *BigFraction::THREE_FIFTHS = NULL;
      BigFraction *BigFraction::THREE_QUARTERS = NULL;
      BigFraction *BigFraction::TWO = NULL;
      BigFraction *BigFraction::TWO_FIFTHS = NULL;
      BigFraction *BigFraction::TWO_QUARTERS = NULL;
      BigFraction *BigFraction::TWO_THIRDS = NULL;
      BigFraction *BigFraction::ZERO = NULL;

      jclass BigFraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_fefb08975c10f0a1] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_init$_2e88f70c685271db] = env->getMethodID(cls, "<init>", "(DJ)V");
          mids$[mid_init$_56c10d001ee56f39] = env->getMethodID(cls, "<init>", "(JJ)V");
          mids$[mid_init$_b05c288d5068eccb] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_abs_c16be17dc5e53511] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_add_6b80d875d7eb2939] = env->getMethodID(cls, "add", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_add_7a7ef07914e4c82c] = env->getMethodID(cls, "add", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_add_82ed7d805db56f5a] = env->getMethodID(cls, "add", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_compareTo_0887fc20c1874b54] = env->getMethodID(cls, "compareTo", "(Lorg/hipparchus/fraction/BigFraction;)I");
          mids$[mid_convergent_896247fe01223ff9] = env->getStaticMethodID(cls, "convergent", "(DILorg/hipparchus/fraction/BigFraction$ConvergenceTest;)Lorg/hipparchus/util/Pair;");
          mids$[mid_convergents_d9c8edb42f215879] = env->getStaticMethodID(cls, "convergents", "(DI)Ljava/util/stream/Stream;");
          mids$[mid_divide_6b80d875d7eb2939] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_divide_7a7ef07914e4c82c] = env->getMethodID(cls, "divide", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_divide_82ed7d805db56f5a] = env->getMethodID(cls, "divide", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_doubleValue_456d9a2f64d6b28d] = env->getMethodID(cls, "doubleValue", "()D");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_floatValue_966c782d3223854d] = env->getMethodID(cls, "floatValue", "()F");
          mids$[mid_getDenominatorAsInt_f2f64475e4580546] = env->getMethodID(cls, "getDenominatorAsInt", "()I");
          mids$[mid_getDenominatorAsLong_a27fc9afd27e559d] = env->getMethodID(cls, "getDenominatorAsLong", "()J");
          mids$[mid_getField_5eaa6afab444a02c] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/fraction/BigFractionField;");
          mids$[mid_getNumeratorAsInt_f2f64475e4580546] = env->getMethodID(cls, "getNumeratorAsInt", "()I");
          mids$[mid_getNumeratorAsLong_a27fc9afd27e559d] = env->getMethodID(cls, "getNumeratorAsLong", "()J");
          mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getReducedFraction_1d71751127da178f] = env->getStaticMethodID(cls, "getReducedFraction", "(II)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_intValue_f2f64475e4580546] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInteger_e470b6d9e0d979db] = env->getMethodID(cls, "isInteger", "()Z");
          mids$[mid_longValue_a27fc9afd27e559d] = env->getMethodID(cls, "longValue", "()J");
          mids$[mid_multiply_6b80d875d7eb2939] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_multiply_7a7ef07914e4c82c] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_multiply_82ed7d805db56f5a] = env->getMethodID(cls, "multiply", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_negate_c16be17dc5e53511] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_percentageValue_456d9a2f64d6b28d] = env->getMethodID(cls, "percentageValue", "()D");
          mids$[mid_pow_0ba5fed9597b693e] = env->getMethodID(cls, "pow", "(D)D");
          mids$[mid_pow_7a7ef07914e4c82c] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_pow_82ed7d805db56f5a] = env->getMethodID(cls, "pow", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_reciprocal_c16be17dc5e53511] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_reduce_c16be17dc5e53511] = env->getMethodID(cls, "reduce", "()Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_signum_f2f64475e4580546] = env->getMethodID(cls, "signum", "()I");
          mids$[mid_subtract_6b80d875d7eb2939] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/fraction/BigFraction;)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_subtract_7a7ef07914e4c82c] = env->getMethodID(cls, "subtract", "(I)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_subtract_82ed7d805db56f5a] = env->getMethodID(cls, "subtract", "(J)Lorg/hipparchus/fraction/BigFraction;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FOUR_FIFTHS = new BigFraction(env->getStaticObjectField(cls, "FOUR_FIFTHS", "Lorg/hipparchus/fraction/BigFraction;"));
          MINUS_ONE = new BigFraction(env->getStaticObjectField(cls, "MINUS_ONE", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE = new BigFraction(env->getStaticObjectField(cls, "ONE", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_FIFTH = new BigFraction(env->getStaticObjectField(cls, "ONE_FIFTH", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_HALF = new BigFraction(env->getStaticObjectField(cls, "ONE_HALF", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_QUARTER = new BigFraction(env->getStaticObjectField(cls, "ONE_QUARTER", "Lorg/hipparchus/fraction/BigFraction;"));
          ONE_THIRD = new BigFraction(env->getStaticObjectField(cls, "ONE_THIRD", "Lorg/hipparchus/fraction/BigFraction;"));
          THREE_FIFTHS = new BigFraction(env->getStaticObjectField(cls, "THREE_FIFTHS", "Lorg/hipparchus/fraction/BigFraction;"));
          THREE_QUARTERS = new BigFraction(env->getStaticObjectField(cls, "THREE_QUARTERS", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO = new BigFraction(env->getStaticObjectField(cls, "TWO", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO_FIFTHS = new BigFraction(env->getStaticObjectField(cls, "TWO_FIFTHS", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO_QUARTERS = new BigFraction(env->getStaticObjectField(cls, "TWO_QUARTERS", "Lorg/hipparchus/fraction/BigFraction;"));
          TWO_THIRDS = new BigFraction(env->getStaticObjectField(cls, "TWO_THIRDS", "Lorg/hipparchus/fraction/BigFraction;"));
          ZERO = new BigFraction(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/fraction/BigFraction;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BigFraction::BigFraction(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

      BigFraction::BigFraction(jint a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      BigFraction::BigFraction(jlong a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_fefb08975c10f0a1, a0)) {}

      BigFraction::BigFraction(jint a0, jint a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

      BigFraction::BigFraction(jdouble a0, jlong a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_2e88f70c685271db, a0, a1)) {}

      BigFraction::BigFraction(jlong a0, jlong a1) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_56c10d001ee56f39, a0, a1)) {}

      BigFraction::BigFraction(jdouble a0, jdouble a1, jint a2) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_b05c288d5068eccb, a0, a1, a2)) {}

      BigFraction BigFraction::abs() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_abs_c16be17dc5e53511]));
      }

      BigFraction BigFraction::add(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_add_6b80d875d7eb2939], a0.this$));
      }

      BigFraction BigFraction::add(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_add_7a7ef07914e4c82c], a0));
      }

      BigFraction BigFraction::add(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_add_82ed7d805db56f5a], a0));
      }

      jint BigFraction::compareTo(const BigFraction & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_compareTo_0887fc20c1874b54], a0.this$);
      }

      ::org::hipparchus::util::Pair BigFraction::convergent(jdouble a0, jint a1, const ::org::hipparchus::fraction::BigFraction$ConvergenceTest & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::Pair(env->callStaticObjectMethod(cls, mids$[mid_convergent_896247fe01223ff9], a0, a1, a2.this$));
      }

      ::java::util::stream::Stream BigFraction::convergents(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_convergents_d9c8edb42f215879], a0, a1));
      }

      BigFraction BigFraction::divide(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_divide_6b80d875d7eb2939], a0.this$));
      }

      BigFraction BigFraction::divide(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_divide_7a7ef07914e4c82c], a0));
      }

      BigFraction BigFraction::divide(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_divide_82ed7d805db56f5a], a0));
      }

      jdouble BigFraction::doubleValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_doubleValue_456d9a2f64d6b28d]);
      }

      jboolean BigFraction::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      jfloat BigFraction::floatValue() const
      {
        return env->callFloatMethod(this$, mids$[mid_floatValue_966c782d3223854d]);
      }

      jint BigFraction::getDenominatorAsInt() const
      {
        return env->callIntMethod(this$, mids$[mid_getDenominatorAsInt_f2f64475e4580546]);
      }

      jlong BigFraction::getDenominatorAsLong() const
      {
        return env->callLongMethod(this$, mids$[mid_getDenominatorAsLong_a27fc9afd27e559d]);
      }

      ::org::hipparchus::fraction::BigFractionField BigFraction::getField() const
      {
        return ::org::hipparchus::fraction::BigFractionField(env->callObjectMethod(this$, mids$[mid_getField_5eaa6afab444a02c]));
      }

      jint BigFraction::getNumeratorAsInt() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumeratorAsInt_f2f64475e4580546]);
      }

      jlong BigFraction::getNumeratorAsLong() const
      {
        return env->callLongMethod(this$, mids$[mid_getNumeratorAsLong_a27fc9afd27e559d]);
      }

      jdouble BigFraction::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
      }

      BigFraction BigFraction::getReducedFraction(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return BigFraction(env->callStaticObjectMethod(cls, mids$[mid_getReducedFraction_1d71751127da178f], a0, a1));
      }

      jint BigFraction::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      jint BigFraction::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_f2f64475e4580546]);
      }

      jboolean BigFraction::isInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInteger_e470b6d9e0d979db]);
      }

      jlong BigFraction::longValue() const
      {
        return env->callLongMethod(this$, mids$[mid_longValue_a27fc9afd27e559d]);
      }

      BigFraction BigFraction::multiply(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_multiply_6b80d875d7eb2939], a0.this$));
      }

      BigFraction BigFraction::multiply(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_multiply_7a7ef07914e4c82c], a0));
      }

      BigFraction BigFraction::multiply(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_multiply_82ed7d805db56f5a], a0));
      }

      BigFraction BigFraction::negate() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_negate_c16be17dc5e53511]));
      }

      jdouble BigFraction::percentageValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_percentageValue_456d9a2f64d6b28d]);
      }

      jdouble BigFraction::pow(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_pow_0ba5fed9597b693e], a0);
      }

      BigFraction BigFraction::pow(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_pow_7a7ef07914e4c82c], a0));
      }

      BigFraction BigFraction::pow(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_pow_82ed7d805db56f5a], a0));
      }

      BigFraction BigFraction::reciprocal() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_reciprocal_c16be17dc5e53511]));
      }

      BigFraction BigFraction::reduce() const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_reduce_c16be17dc5e53511]));
      }

      jint BigFraction::signum() const
      {
        return env->callIntMethod(this$, mids$[mid_signum_f2f64475e4580546]);
      }

      BigFraction BigFraction::subtract(const BigFraction & a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_subtract_6b80d875d7eb2939], a0.this$));
      }

      BigFraction BigFraction::subtract(jint a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_subtract_7a7ef07914e4c82c], a0));
      }

      BigFraction BigFraction::subtract(jlong a0) const
      {
        return BigFraction(env->callObjectMethod(this$, mids$[mid_subtract_82ed7d805db56f5a], a0));
      }

      ::java::lang::String BigFraction::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_BigFraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFraction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BigFraction_init_(t_BigFraction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BigFraction_abs(t_BigFraction *self);
      static PyObject *t_BigFraction_add(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_compareTo(t_BigFraction *self, PyObject *arg);
      static PyObject *t_BigFraction_convergent(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFraction_convergents(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFraction_divide(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_doubleValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_equals(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_floatValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_getDenominatorAsInt(t_BigFraction *self);
      static PyObject *t_BigFraction_getDenominatorAsLong(t_BigFraction *self);
      static PyObject *t_BigFraction_getField(t_BigFraction *self);
      static PyObject *t_BigFraction_getNumeratorAsInt(t_BigFraction *self);
      static PyObject *t_BigFraction_getNumeratorAsLong(t_BigFraction *self);
      static PyObject *t_BigFraction_getReal(t_BigFraction *self);
      static PyObject *t_BigFraction_getReducedFraction(PyTypeObject *type, PyObject *args);
      static PyObject *t_BigFraction_hashCode(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_intValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_isInteger(t_BigFraction *self);
      static PyObject *t_BigFraction_longValue(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_multiply(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_negate(t_BigFraction *self);
      static PyObject *t_BigFraction_percentageValue(t_BigFraction *self);
      static PyObject *t_BigFraction_pow(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_reciprocal(t_BigFraction *self);
      static PyObject *t_BigFraction_reduce(t_BigFraction *self);
      static PyObject *t_BigFraction_signum(t_BigFraction *self);
      static PyObject *t_BigFraction_subtract(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_toString(t_BigFraction *self, PyObject *args);
      static PyObject *t_BigFraction_get__denominatorAsInt(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__denominatorAsLong(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__field(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__integer(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__numeratorAsInt(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__numeratorAsLong(t_BigFraction *self, void *data);
      static PyObject *t_BigFraction_get__real(t_BigFraction *self, void *data);
      static PyGetSetDef t_BigFraction__fields_[] = {
        DECLARE_GET_FIELD(t_BigFraction, denominatorAsInt),
        DECLARE_GET_FIELD(t_BigFraction, denominatorAsLong),
        DECLARE_GET_FIELD(t_BigFraction, field),
        DECLARE_GET_FIELD(t_BigFraction, integer),
        DECLARE_GET_FIELD(t_BigFraction, numeratorAsInt),
        DECLARE_GET_FIELD(t_BigFraction, numeratorAsLong),
        DECLARE_GET_FIELD(t_BigFraction, real),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigFraction__methods_[] = {
        DECLARE_METHOD(t_BigFraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, abs, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, add, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, compareTo, METH_O),
        DECLARE_METHOD(t_BigFraction, convergent, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, convergents, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, divide, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, doubleValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, floatValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, getDenominatorAsInt, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getDenominatorAsLong, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getField, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getNumeratorAsInt, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getNumeratorAsLong, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getReal, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, getReducedFraction, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_BigFraction, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, intValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, isInteger, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, longValue, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, multiply, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, negate, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, percentageValue, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, pow, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, reduce, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, signum, METH_NOARGS),
        DECLARE_METHOD(t_BigFraction, subtract, METH_VARARGS),
        DECLARE_METHOD(t_BigFraction, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFraction)[] = {
        { Py_tp_methods, t_BigFraction__methods_ },
        { Py_tp_init, (void *) t_BigFraction_init_ },
        { Py_tp_getset, t_BigFraction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFraction)[] = {
        &PY_TYPE_DEF(::java::lang::Number),
        NULL
      };

      DEFINE_TYPE(BigFraction, t_BigFraction, BigFraction);

      void t_BigFraction::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFraction), &PY_TYPE_DEF(BigFraction), module, "BigFraction", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ConvergenceTest", make_descriptor(&PY_TYPE_DEF(BigFraction$ConvergenceTest)));
      }

      void t_BigFraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "class_", make_descriptor(BigFraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "wrapfn_", make_descriptor(t_BigFraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "boxfn_", make_descriptor(boxObject));
        env->getClass(BigFraction::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "FOUR_FIFTHS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::FOUR_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "MINUS_ONE", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::MINUS_ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_FIFTH", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_FIFTH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_HALF", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_HALF)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_QUARTER", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_QUARTER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ONE_THIRD", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ONE_THIRD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "THREE_FIFTHS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::THREE_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "THREE_QUARTERS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::THREE_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO_FIFTHS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO_FIFTHS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO_QUARTERS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO_QUARTERS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "TWO_THIRDS", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::TWO_THIRDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction), "ZERO", make_descriptor(t_BigFraction::wrap_Object(*BigFraction::ZERO)));
      }

      static PyObject *t_BigFraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFraction::initializeClass, 1)))
          return NULL;
        return t_BigFraction::wrap_Object(BigFraction(((t_BigFraction *) arg)->object.this$));
      }
      static PyObject *t_BigFraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BigFraction_init_(t_BigFraction *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = BigFraction(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = BigFraction(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = BigFraction(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jint a1;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = BigFraction(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            jlong a1;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "DJ", &a0, &a1))
            {
              INT_CALL(object = BigFraction(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            jlong a1;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              INT_CALL(object = BigFraction(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            BigFraction object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = BigFraction(a0, a1, a2));
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

      static PyObject *t_BigFraction_abs(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_add(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_BigFraction_compareTo(t_BigFraction *self, PyObject *arg)
      {
        BigFraction a0((jobject) NULL);
        jint result;

        if (!parseArg(arg, "k", BigFraction::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compareTo(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
        return NULL;
      }

      static PyObject *t_BigFraction_convergent(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::org::hipparchus::fraction::BigFraction$ConvergenceTest a2((jobject) NULL);
        ::org::hipparchus::util::Pair result((jobject) NULL);

        if (!parseArgs(args, "DIk", ::org::hipparchus::fraction::BigFraction$ConvergenceTest::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFraction::convergent(a0, a1, a2));
          return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(BigFraction), ::java::lang::PY_TYPE(Boolean));
        }

        PyErr_SetArgsError(type, "convergent", args);
        return NULL;
      }

      static PyObject *t_BigFraction_convergents(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jint a1;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArgs(args, "DI", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFraction::convergents(a0, a1));
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(BigFraction));
        }

        PyErr_SetArgsError(type, "convergents", args);
        return NULL;
      }

      static PyObject *t_BigFraction_divide(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_BigFraction_doubleValue(t_BigFraction *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.doubleValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "doubleValue", args, 2);
      }

      static PyObject *t_BigFraction_equals(t_BigFraction *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigFraction_floatValue(t_BigFraction *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.floatValue());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "floatValue", args, 2);
      }

      static PyObject *t_BigFraction_getDenominatorAsInt(t_BigFraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDenominatorAsInt());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigFraction_getDenominatorAsLong(t_BigFraction *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.getDenominatorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_BigFraction_getField(t_BigFraction *self)
      {
        ::org::hipparchus::fraction::BigFractionField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::fraction::t_BigFractionField::wrap_Object(result);
      }

      static PyObject *t_BigFraction_getNumeratorAsInt(t_BigFraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumeratorAsInt());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigFraction_getNumeratorAsLong(t_BigFraction *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.getNumeratorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_BigFraction_getReal(t_BigFraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigFraction_getReducedFraction(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;
        BigFraction result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fraction::BigFraction::getReducedFraction(a0, a1));
          return t_BigFraction::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getReducedFraction", args);
        return NULL;
      }

      static PyObject *t_BigFraction_hashCode(t_BigFraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigFraction_intValue(t_BigFraction *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.intValue());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "intValue", args, 2);
      }

      static PyObject *t_BigFraction_isInteger(t_BigFraction *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_BigFraction_longValue(t_BigFraction *self, PyObject *args)
      {
        jlong result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.longValue());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "longValue", args, 2);
      }

      static PyObject *t_BigFraction_multiply(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_BigFraction_negate(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_percentageValue(t_BigFraction *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.percentageValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_BigFraction_pow(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_BigFraction_reciprocal(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_reduce(t_BigFraction *self)
      {
        BigFraction result((jobject) NULL);
        OBJ_CALL(result = self->object.reduce());
        return t_BigFraction::wrap_Object(result);
      }

      static PyObject *t_BigFraction_signum(t_BigFraction *self)
      {
        jint result;
        OBJ_CALL(result = self->object.signum());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BigFraction_subtract(t_BigFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            BigFraction a0((jobject) NULL);
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "k", BigFraction::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jint a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
          {
            jlong a0;
            BigFraction result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_BigFraction::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_BigFraction_toString(t_BigFraction *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(BigFraction), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_BigFraction_get__denominatorAsInt(t_BigFraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDenominatorAsInt());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BigFraction_get__denominatorAsLong(t_BigFraction *self, void *data)
      {
        jlong value;
        OBJ_CALL(value = self->object.getDenominatorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) value);
      }

      static PyObject *t_BigFraction_get__field(t_BigFraction *self, void *data)
      {
        ::org::hipparchus::fraction::BigFractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::fraction::t_BigFractionField::wrap_Object(value);
      }

      static PyObject *t_BigFraction_get__integer(t_BigFraction *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_BigFraction_get__numeratorAsInt(t_BigFraction *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumeratorAsInt());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BigFraction_get__numeratorAsLong(t_BigFraction *self, void *data)
      {
        jlong value;
        OBJ_CALL(value = self->object.getNumeratorAsLong());
        return PyLong_FromLongLong((PY_LONG_LONG) value);
      }

      static PyObject *t_BigFraction_get__real(t_BigFraction *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/correlation/KendallsCorrelation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace correlation {

        ::java::lang::Class *KendallsCorrelation::class$ = NULL;
        jmethodID *KendallsCorrelation::mids$ = NULL;
        bool KendallsCorrelation::live$ = false;

        jclass KendallsCorrelation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/correlation/KendallsCorrelation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_d660c7a97bf55272] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_computeCorrelationMatrix_d983e368b64b23a3] = env->getMethodID(cls, "computeCorrelationMatrix", "([[D)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeCorrelationMatrix_e00cd33aedcc5bd0] = env->getMethodID(cls, "computeCorrelationMatrix", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_correlation_1ce76fb6ff382da9] = env->getMethodID(cls, "correlation", "([D[D)D");
            mids$[mid_getCorrelationMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getCorrelationMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        KendallsCorrelation::KendallsCorrelation() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        KendallsCorrelation::KendallsCorrelation(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d660c7a97bf55272, a0.this$)) {}

        KendallsCorrelation::KendallsCorrelation(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

        ::org::hipparchus::linear::RealMatrix KendallsCorrelation::computeCorrelationMatrix(const JArray< JArray< jdouble > > & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_d983e368b64b23a3], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix KendallsCorrelation::computeCorrelationMatrix(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeCorrelationMatrix_e00cd33aedcc5bd0], a0.this$));
        }

        jdouble KendallsCorrelation::correlation(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_correlation_1ce76fb6ff382da9], a0.this$, a1.this$);
        }

        ::org::hipparchus::linear::RealMatrix KendallsCorrelation::getCorrelationMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCorrelationMatrix_7116bbecdd8ceb21]));
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
      namespace correlation {
        static PyObject *t_KendallsCorrelation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_KendallsCorrelation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_KendallsCorrelation_init_(t_KendallsCorrelation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_KendallsCorrelation_computeCorrelationMatrix(t_KendallsCorrelation *self, PyObject *args);
        static PyObject *t_KendallsCorrelation_correlation(t_KendallsCorrelation *self, PyObject *args);
        static PyObject *t_KendallsCorrelation_getCorrelationMatrix(t_KendallsCorrelation *self);
        static PyObject *t_KendallsCorrelation_get__correlationMatrix(t_KendallsCorrelation *self, void *data);
        static PyGetSetDef t_KendallsCorrelation__fields_[] = {
          DECLARE_GET_FIELD(t_KendallsCorrelation, correlationMatrix),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_KendallsCorrelation__methods_[] = {
          DECLARE_METHOD(t_KendallsCorrelation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KendallsCorrelation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_KendallsCorrelation, computeCorrelationMatrix, METH_VARARGS),
          DECLARE_METHOD(t_KendallsCorrelation, correlation, METH_VARARGS),
          DECLARE_METHOD(t_KendallsCorrelation, getCorrelationMatrix, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(KendallsCorrelation)[] = {
          { Py_tp_methods, t_KendallsCorrelation__methods_ },
          { Py_tp_init, (void *) t_KendallsCorrelation_init_ },
          { Py_tp_getset, t_KendallsCorrelation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(KendallsCorrelation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(KendallsCorrelation, t_KendallsCorrelation, KendallsCorrelation);

        void t_KendallsCorrelation::install(PyObject *module)
        {
          installType(&PY_TYPE(KendallsCorrelation), &PY_TYPE_DEF(KendallsCorrelation), module, "KendallsCorrelation", 0);
        }

        void t_KendallsCorrelation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(KendallsCorrelation), "class_", make_descriptor(KendallsCorrelation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KendallsCorrelation), "wrapfn_", make_descriptor(t_KendallsCorrelation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(KendallsCorrelation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_KendallsCorrelation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, KendallsCorrelation::initializeClass, 1)))
            return NULL;
          return t_KendallsCorrelation::wrap_Object(KendallsCorrelation(((t_KendallsCorrelation *) arg)->object.this$));
        }
        static PyObject *t_KendallsCorrelation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, KendallsCorrelation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_KendallsCorrelation_init_(t_KendallsCorrelation *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              KendallsCorrelation object((jobject) NULL);

              INT_CALL(object = KendallsCorrelation());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              KendallsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                INT_CALL(object = KendallsCorrelation(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              KendallsCorrelation object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                INT_CALL(object = KendallsCorrelation(a0));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_KendallsCorrelation_computeCorrelationMatrix(t_KendallsCorrelation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jdouble > > a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "[[D", &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.computeCorrelationMatrix(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeCorrelationMatrix", args);
          return NULL;
        }

        static PyObject *t_KendallsCorrelation_correlation(t_KendallsCorrelation *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.correlation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "correlation", args);
          return NULL;
        }

        static PyObject *t_KendallsCorrelation_getCorrelationMatrix(t_KendallsCorrelation *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_KendallsCorrelation_get__correlationMatrix(t_KendallsCorrelation *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrelationMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/DfpField.h"
#include "org/hipparchus/dfp/DfpField.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpField::class$ = NULL;
      jmethodID *DfpField::mids$ = NULL;
      bool DfpField::live$ = false;
      jint DfpField::FLAG_DIV_ZERO = (jint) 0;
      jint DfpField::FLAG_INEXACT = (jint) 0;
      jint DfpField::FLAG_INVALID = (jint) 0;
      jint DfpField::FLAG_OVERFLOW = (jint) 0;
      jint DfpField::FLAG_UNDERFLOW = (jint) 0;

      jclass DfpField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_clearIEEEFlags_7ae3461a92a43152] = env->getMethodID(cls, "clearIEEEFlags", "()V");
          mids$[mid_computeExp_5f4c8a207222b7cd] = env->getStaticMethodID(cls, "computeExp", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_computeLn_c2256d3172717411] = env->getStaticMethodID(cls, "computeLn", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getDegToRad_20a565cdc6596121] = env->getMethodID(cls, "getDegToRad", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getE_20a565cdc6596121] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getESplit_53f64053b72856d9] = env->getMethodID(cls, "getESplit", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getExtendedField_42067aa86adf9969] = env->getMethodID(cls, "getExtendedField", "(IZ)Lorg/hipparchus/dfp/DfpField;");
          mids$[mid_getIEEEFlags_f2f64475e4580546] = env->getMethodID(cls, "getIEEEFlags", "()I");
          mids$[mid_getLn10_20a565cdc6596121] = env->getMethodID(cls, "getLn10", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn2_20a565cdc6596121] = env->getMethodID(cls, "getLn2", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn2Split_53f64053b72856d9] = env->getMethodID(cls, "getLn2Split", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn5_20a565cdc6596121] = env->getMethodID(cls, "getLn5", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getLn5Split_53f64053b72856d9] = env->getMethodID(cls, "getLn5Split", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getOne_20a565cdc6596121] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getPi_20a565cdc6596121] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getPiSplit_53f64053b72856d9] = env->getMethodID(cls, "getPiSplit", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getRadToDeg_20a565cdc6596121] = env->getMethodID(cls, "getRadToDeg", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getRadixDigits_f2f64475e4580546] = env->getMethodID(cls, "getRadixDigits", "()I");
          mids$[mid_getRoundingMode_bcea9c91bc9ea72e] = env->getMethodID(cls, "getRoundingMode", "()Lorg/hipparchus/dfp/DfpField$RoundingMode;");
          mids$[mid_getRuntimeClass_8f66acc08d2a174c] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getSqr2_20a565cdc6596121] = env->getMethodID(cls, "getSqr2", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr2Reciprocal_20a565cdc6596121] = env->getMethodID(cls, "getSqr2Reciprocal", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr2Split_53f64053b72856d9] = env->getMethodID(cls, "getSqr2Split", "()[Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr3_20a565cdc6596121] = env->getMethodID(cls, "getSqr3", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getSqr3Reciprocal_20a565cdc6596121] = env->getMethodID(cls, "getSqr3Reciprocal", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getTwo_20a565cdc6596121] = env->getMethodID(cls, "getTwo", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getZero_20a565cdc6596121] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_newDfp_20a565cdc6596121] = env->getMethodID(cls, "newDfp", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_3f89d25657eee84e] = env->getMethodID(cls, "newDfp", "(Ljava/lang/String;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_f0d5166eeb6b0680] = env->getMethodID(cls, "newDfp", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_970ab21c4d121514] = env->getMethodID(cls, "newDfp", "(B)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_5caa6ddeafdf80db] = env->getMethodID(cls, "newDfp", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_f72d07eb955b446b] = env->getMethodID(cls, "newDfp", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_aaf2a1c8efdefd0f] = env->getMethodID(cls, "newDfp", "(J)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newDfp_7c8aa6cad7f772b2] = env->getMethodID(cls, "newDfp", "(BB)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_setIEEEFlags_0a2a1ac2721c0336] = env->getMethodID(cls, "setIEEEFlags", "(I)V");
          mids$[mid_setIEEEFlagsBits_0a2a1ac2721c0336] = env->getMethodID(cls, "setIEEEFlagsBits", "(I)V");
          mids$[mid_setRoundingMode_e773112af5ce88fd] = env->getMethodID(cls, "setRoundingMode", "(Lorg/hipparchus/dfp/DfpField$RoundingMode;)V");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FLAG_DIV_ZERO = env->getStaticIntField(cls, "FLAG_DIV_ZERO");
          FLAG_INEXACT = env->getStaticIntField(cls, "FLAG_INEXACT");
          FLAG_INVALID = env->getStaticIntField(cls, "FLAG_INVALID");
          FLAG_OVERFLOW = env->getStaticIntField(cls, "FLAG_OVERFLOW");
          FLAG_UNDERFLOW = env->getStaticIntField(cls, "FLAG_UNDERFLOW");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DfpField::DfpField(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      void DfpField::clearIEEEFlags() const
      {
        env->callVoidMethod(this$, mids$[mid_clearIEEEFlags_7ae3461a92a43152]);
      }

      ::org::hipparchus::dfp::Dfp DfpField::computeExp(const ::org::hipparchus::dfp::Dfp & a0, const ::org::hipparchus::dfp::Dfp & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_computeExp_5f4c8a207222b7cd], a0.this$, a1.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpField::computeLn(const ::org::hipparchus::dfp::Dfp & a0, const ::org::hipparchus::dfp::Dfp & a1, const ::org::hipparchus::dfp::Dfp & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::dfp::Dfp(env->callStaticObjectMethod(cls, mids$[mid_computeLn_c2256d3172717411], a0.this$, a1.this$, a2.this$));
      }

      jboolean DfpField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      ::org::hipparchus::dfp::Dfp DfpField::getDegToRad() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getDegToRad_20a565cdc6596121]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getE() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getE_20a565cdc6596121]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getESplit() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getESplit_53f64053b72856d9]));
      }

      DfpField DfpField::getExtendedField(jint a0, jboolean a1) const
      {
        return DfpField(env->callObjectMethod(this$, mids$[mid_getExtendedField_42067aa86adf9969], a0, a1));
      }

      jint DfpField::getIEEEFlags() const
      {
        return env->callIntMethod(this$, mids$[mid_getIEEEFlags_f2f64475e4580546]);
      }

      ::org::hipparchus::dfp::Dfp DfpField::getLn10() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getLn10_20a565cdc6596121]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getLn2() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getLn2_20a565cdc6596121]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getLn2Split() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getLn2Split_53f64053b72856d9]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getLn5() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getLn5_20a565cdc6596121]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getLn5Split() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getLn5Split_53f64053b72856d9]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getOne() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getOne_20a565cdc6596121]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getPi() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getPi_20a565cdc6596121]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getPiSplit() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getPiSplit_53f64053b72856d9]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getRadToDeg() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getRadToDeg_20a565cdc6596121]));
      }

      jint DfpField::getRadixDigits() const
      {
        return env->callIntMethod(this$, mids$[mid_getRadixDigits_f2f64475e4580546]);
      }

      ::org::hipparchus::dfp::DfpField$RoundingMode DfpField::getRoundingMode() const
      {
        return ::org::hipparchus::dfp::DfpField$RoundingMode(env->callObjectMethod(this$, mids$[mid_getRoundingMode_bcea9c91bc9ea72e]));
      }

      ::java::lang::Class DfpField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_8f66acc08d2a174c]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr2() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr2_20a565cdc6596121]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr2Reciprocal() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr2Reciprocal_20a565cdc6596121]));
      }

      JArray< ::org::hipparchus::dfp::Dfp > DfpField::getSqr2Split() const
      {
        return JArray< ::org::hipparchus::dfp::Dfp >(env->callObjectMethod(this$, mids$[mid_getSqr2Split_53f64053b72856d9]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr3() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr3_20a565cdc6596121]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getSqr3Reciprocal() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getSqr3Reciprocal_20a565cdc6596121]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getTwo() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getTwo_20a565cdc6596121]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::getZero() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_getZero_20a565cdc6596121]));
      }

      jint DfpField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp() const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_20a565cdc6596121]));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_3f89d25657eee84e], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(const ::org::hipparchus::dfp::Dfp & a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_f0d5166eeb6b0680], a0.this$));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jbyte a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_970ab21c4d121514], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jdouble a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_5caa6ddeafdf80db], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jint a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_f72d07eb955b446b], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jlong a0) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_aaf2a1c8efdefd0f], a0));
      }

      ::org::hipparchus::dfp::Dfp DfpField::newDfp(jbyte a0, jbyte a1) const
      {
        return ::org::hipparchus::dfp::Dfp(env->callObjectMethod(this$, mids$[mid_newDfp_7c8aa6cad7f772b2], a0, a1));
      }

      void DfpField::setIEEEFlags(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setIEEEFlags_0a2a1ac2721c0336], a0);
      }

      void DfpField::setIEEEFlagsBits(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setIEEEFlagsBits_0a2a1ac2721c0336], a0);
      }

      void DfpField::setRoundingMode(const ::org::hipparchus::dfp::DfpField$RoundingMode & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setRoundingMode_e773112af5ce88fd], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_DfpField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpField_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DfpField_init_(t_DfpField *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DfpField_clearIEEEFlags(t_DfpField *self);
      static PyObject *t_DfpField_computeExp(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpField_computeLn(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpField_equals(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_getDegToRad(t_DfpField *self);
      static PyObject *t_DfpField_getE(t_DfpField *self);
      static PyObject *t_DfpField_getESplit(t_DfpField *self);
      static PyObject *t_DfpField_getExtendedField(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_getIEEEFlags(t_DfpField *self);
      static PyObject *t_DfpField_getLn10(t_DfpField *self);
      static PyObject *t_DfpField_getLn2(t_DfpField *self);
      static PyObject *t_DfpField_getLn2Split(t_DfpField *self);
      static PyObject *t_DfpField_getLn5(t_DfpField *self);
      static PyObject *t_DfpField_getLn5Split(t_DfpField *self);
      static PyObject *t_DfpField_getOne(t_DfpField *self);
      static PyObject *t_DfpField_getPi(t_DfpField *self);
      static PyObject *t_DfpField_getPiSplit(t_DfpField *self);
      static PyObject *t_DfpField_getRadToDeg(t_DfpField *self);
      static PyObject *t_DfpField_getRadixDigits(t_DfpField *self);
      static PyObject *t_DfpField_getRoundingMode(t_DfpField *self);
      static PyObject *t_DfpField_getRuntimeClass(t_DfpField *self);
      static PyObject *t_DfpField_getSqr2(t_DfpField *self);
      static PyObject *t_DfpField_getSqr2Reciprocal(t_DfpField *self);
      static PyObject *t_DfpField_getSqr2Split(t_DfpField *self);
      static PyObject *t_DfpField_getSqr3(t_DfpField *self);
      static PyObject *t_DfpField_getSqr3Reciprocal(t_DfpField *self);
      static PyObject *t_DfpField_getTwo(t_DfpField *self);
      static PyObject *t_DfpField_getZero(t_DfpField *self);
      static PyObject *t_DfpField_hashCode(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_newDfp(t_DfpField *self, PyObject *args);
      static PyObject *t_DfpField_setIEEEFlags(t_DfpField *self, PyObject *arg);
      static PyObject *t_DfpField_setIEEEFlagsBits(t_DfpField *self, PyObject *arg);
      static PyObject *t_DfpField_setRoundingMode(t_DfpField *self, PyObject *arg);
      static PyObject *t_DfpField_get__degToRad(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__e(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__eSplit(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__iEEEFlags(t_DfpField *self, void *data);
      static int t_DfpField_set__iEEEFlags(t_DfpField *self, PyObject *arg, void *data);
      static int t_DfpField_set__iEEEFlagsBits(t_DfpField *self, PyObject *arg, void *data);
      static PyObject *t_DfpField_get__ln10(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln2(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln2Split(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln5(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__ln5Split(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__one(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__pi(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__piSplit(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__radToDeg(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__radixDigits(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__roundingMode(t_DfpField *self, void *data);
      static int t_DfpField_set__roundingMode(t_DfpField *self, PyObject *arg, void *data);
      static PyObject *t_DfpField_get__runtimeClass(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr2(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr2Reciprocal(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr2Split(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr3(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__sqr3Reciprocal(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__two(t_DfpField *self, void *data);
      static PyObject *t_DfpField_get__zero(t_DfpField *self, void *data);
      static PyGetSetDef t_DfpField__fields_[] = {
        DECLARE_GET_FIELD(t_DfpField, degToRad),
        DECLARE_GET_FIELD(t_DfpField, e),
        DECLARE_GET_FIELD(t_DfpField, eSplit),
        DECLARE_GETSET_FIELD(t_DfpField, iEEEFlags),
        DECLARE_SET_FIELD(t_DfpField, iEEEFlagsBits),
        DECLARE_GET_FIELD(t_DfpField, ln10),
        DECLARE_GET_FIELD(t_DfpField, ln2),
        DECLARE_GET_FIELD(t_DfpField, ln2Split),
        DECLARE_GET_FIELD(t_DfpField, ln5),
        DECLARE_GET_FIELD(t_DfpField, ln5Split),
        DECLARE_GET_FIELD(t_DfpField, one),
        DECLARE_GET_FIELD(t_DfpField, pi),
        DECLARE_GET_FIELD(t_DfpField, piSplit),
        DECLARE_GET_FIELD(t_DfpField, radToDeg),
        DECLARE_GET_FIELD(t_DfpField, radixDigits),
        DECLARE_GETSET_FIELD(t_DfpField, roundingMode),
        DECLARE_GET_FIELD(t_DfpField, runtimeClass),
        DECLARE_GET_FIELD(t_DfpField, sqr2),
        DECLARE_GET_FIELD(t_DfpField, sqr2Reciprocal),
        DECLARE_GET_FIELD(t_DfpField, sqr2Split),
        DECLARE_GET_FIELD(t_DfpField, sqr3),
        DECLARE_GET_FIELD(t_DfpField, sqr3Reciprocal),
        DECLARE_GET_FIELD(t_DfpField, two),
        DECLARE_GET_FIELD(t_DfpField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DfpField__methods_[] = {
        DECLARE_METHOD(t_DfpField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField, clearIEEEFlags, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, computeExp, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpField, computeLn, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpField, equals, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, getDegToRad, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getE, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getESplit, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getExtendedField, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, getIEEEFlags, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn10, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn2, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn2Split, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn5, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getLn5Split, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getPi, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getPiSplit, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRadToDeg, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRadixDigits, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRoundingMode, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr2, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr2Reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr2Split, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr3, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getSqr3Reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getTwo, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_DfpField, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, newDfp, METH_VARARGS),
        DECLARE_METHOD(t_DfpField, setIEEEFlags, METH_O),
        DECLARE_METHOD(t_DfpField, setIEEEFlagsBits, METH_O),
        DECLARE_METHOD(t_DfpField, setRoundingMode, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpField)[] = {
        { Py_tp_methods, t_DfpField__methods_ },
        { Py_tp_init, (void *) t_DfpField_init_ },
        { Py_tp_getset, t_DfpField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DfpField, t_DfpField, DfpField);

      void t_DfpField::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpField), &PY_TYPE_DEF(DfpField), module, "DfpField", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "RoundingMode", make_descriptor(&PY_TYPE_DEF(DfpField$RoundingMode)));
      }

      void t_DfpField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "class_", make_descriptor(DfpField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "wrapfn_", make_descriptor(t_DfpField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "boxfn_", make_descriptor(boxObject));
        env->getClass(DfpField::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_DIV_ZERO", make_descriptor(DfpField::FLAG_DIV_ZERO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_INEXACT", make_descriptor(DfpField::FLAG_INEXACT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_INVALID", make_descriptor(DfpField::FLAG_INVALID));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_OVERFLOW", make_descriptor(DfpField::FLAG_OVERFLOW));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField), "FLAG_UNDERFLOW", make_descriptor(DfpField::FLAG_UNDERFLOW));
      }

      static PyObject *t_DfpField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpField::initializeClass, 1)))
          return NULL;
        return t_DfpField::wrap_Object(DfpField(((t_DfpField *) arg)->object.this$));
      }
      static PyObject *t_DfpField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DfpField_init_(t_DfpField *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        DfpField object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = DfpField(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DfpField_clearIEEEFlags(t_DfpField *self)
      {
        OBJ_CALL(self->object.clearIEEEFlags());
        Py_RETURN_NONE;
      }

      static PyObject *t_DfpField_computeExp(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp a1((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpField::computeExp(a0, a1));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "computeExp", args);
        return NULL;
      }

      static PyObject *t_DfpField_computeLn(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
        ::org::hipparchus::dfp::Dfp a1((jobject) NULL);
        ::org::hipparchus::dfp::Dfp a2((jobject) NULL);
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, ::org::hipparchus::dfp::Dfp::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpField::computeLn(a0, a1, a2));
          return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "computeLn", args);
        return NULL;
      }

      static PyObject *t_DfpField_equals(t_DfpField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(DfpField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_DfpField_getDegToRad(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getDegToRad());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getE(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getE());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getESplit(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getESplit());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getExtendedField(t_DfpField *self, PyObject *args)
      {
        jint a0;
        jboolean a1;
        DfpField result((jobject) NULL);

        if (!parseArgs(args, "IZ", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getExtendedField(a0, a1));
          return t_DfpField::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getExtendedField", args);
        return NULL;
      }

      static PyObject *t_DfpField_getIEEEFlags(t_DfpField *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIEEEFlags());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DfpField_getLn10(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn10());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getLn2(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getLn2Split(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn2Split());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getLn5(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn5());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getLn5Split(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getLn5Split());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getOne(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getPi(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getPiSplit(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPiSplit());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getRadToDeg(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getRadToDeg());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getRadixDigits(t_DfpField *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRadixDigits());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DfpField_getRoundingMode(t_DfpField *self)
      {
        ::org::hipparchus::dfp::DfpField$RoundingMode result((jobject) NULL);
        OBJ_CALL(result = self->object.getRoundingMode());
        return ::org::hipparchus::dfp::t_DfpField$RoundingMode::wrap_Object(result);
      }

      static PyObject *t_DfpField_getRuntimeClass(t_DfpField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::dfp::PY_TYPE(Dfp));
      }

      static PyObject *t_DfpField_getSqr2(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getSqr2Reciprocal(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr2Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getSqr2Split(t_DfpField *self)
      {
        JArray< ::org::hipparchus::dfp::Dfp > result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr2Split());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_getSqr3(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr3());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getSqr3Reciprocal(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getSqr3Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getTwo(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getTwo());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_getZero(t_DfpField *self)
      {
        ::org::hipparchus::dfp::Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
      }

      static PyObject *t_DfpField_hashCode(t_DfpField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(DfpField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_DfpField_newDfp(t_DfpField *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);
            OBJ_CALL(result = self->object.newDfp());
            return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::dfp::Dfp a0((jobject) NULL);
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::dfp::Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "B", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          {
            jlong a0;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.newDfp(a0));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jbyte a0;
            jbyte a1;
            ::org::hipparchus::dfp::Dfp result((jobject) NULL);

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = self->object.newDfp(a0, a1));
              return ::org::hipparchus::dfp::t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "newDfp", args);
        return NULL;
      }

      static PyObject *t_DfpField_setIEEEFlags(t_DfpField *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setIEEEFlags(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setIEEEFlags", arg);
        return NULL;
      }

      static PyObject *t_DfpField_setIEEEFlagsBits(t_DfpField *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setIEEEFlagsBits(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setIEEEFlagsBits", arg);
        return NULL;
      }

      static PyObject *t_DfpField_setRoundingMode(t_DfpField *self, PyObject *arg)
      {
        ::org::hipparchus::dfp::DfpField$RoundingMode a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::dfp::DfpField$RoundingMode::initializeClass, &a0, &p0, ::org::hipparchus::dfp::t_DfpField$RoundingMode::parameters_))
        {
          OBJ_CALL(self->object.setRoundingMode(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setRoundingMode", arg);
        return NULL;
      }

      static PyObject *t_DfpField_get__degToRad(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getDegToRad());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__e(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__eSplit(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getESplit());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__iEEEFlags(t_DfpField *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIEEEFlags());
        return PyLong_FromLong((long) value);
      }
      static int t_DfpField_set__iEEEFlags(t_DfpField *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setIEEEFlags(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "iEEEFlags", arg);
        return -1;
      }

      static int t_DfpField_set__iEEEFlagsBits(t_DfpField *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setIEEEFlagsBits(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "iEEEFlagsBits", arg);
        return -1;
      }

      static PyObject *t_DfpField_get__ln10(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn10());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__ln2(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__ln2Split(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn2Split());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__ln5(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn5());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__ln5Split(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getLn5Split());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__one(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__pi(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__piSplit(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPiSplit());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__radToDeg(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getRadToDeg());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__radixDigits(t_DfpField *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRadixDigits());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_DfpField_get__roundingMode(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::DfpField$RoundingMode value((jobject) NULL);
        OBJ_CALL(value = self->object.getRoundingMode());
        return ::org::hipparchus::dfp::t_DfpField$RoundingMode::wrap_Object(value);
      }
      static int t_DfpField_set__roundingMode(t_DfpField *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::dfp::DfpField$RoundingMode value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::dfp::DfpField$RoundingMode::initializeClass, &value))
          {
            INT_CALL(self->object.setRoundingMode(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "roundingMode", arg);
        return -1;
      }

      static PyObject *t_DfpField_get__runtimeClass(t_DfpField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr2(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr2());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr2Reciprocal(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr2Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr2Split(t_DfpField *self, void *data)
      {
        JArray< ::org::hipparchus::dfp::Dfp > value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr2Split());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::dfp::t_Dfp::wrap_jobject);
      }

      static PyObject *t_DfpField_get__sqr3(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr3());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__sqr3Reciprocal(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getSqr3Reciprocal());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__two(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getTwo());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }

      static PyObject *t_DfpField_get__zero(t_DfpField *self, void *data)
      {
        ::org::hipparchus::dfp::Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::dfp::t_Dfp::wrap_Object(value);
      }
    }
  }
}
