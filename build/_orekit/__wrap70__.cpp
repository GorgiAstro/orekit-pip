#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresOptimizer::class$ = NULL;
            jmethodID *LeastSquaresOptimizer::mids$ = NULL;
            bool LeastSquaresOptimizer::live$ = false;

            jclass LeastSquaresOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_optimize_15b17ff9a423a2d3] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum LeastSquaresOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_15b17ff9a423a2d3], a0.this$));
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {
            static PyObject *t_LeastSquaresOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresOptimizer_optimize(t_LeastSquaresOptimizer *self, PyObject *arg);

            static PyMethodDef t_LeastSquaresOptimizer__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresOptimizer, optimize, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresOptimizer)[] = {
              { Py_tp_methods, t_LeastSquaresOptimizer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresOptimizer, t_LeastSquaresOptimizer, LeastSquaresOptimizer);

            void t_LeastSquaresOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresOptimizer), &PY_TYPE_DEF(LeastSquaresOptimizer), module, "LeastSquaresOptimizer", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "Optimum", make_descriptor(&PY_TYPE_DEF(LeastSquaresOptimizer$Optimum)));
            }

            void t_LeastSquaresOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "class_", make_descriptor(LeastSquaresOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "wrapfn_", make_descriptor(t_LeastSquaresOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresOptimizer::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresOptimizer::wrap_Object(LeastSquaresOptimizer(((t_LeastSquaresOptimizer *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresOptimizer_optimize(t_LeastSquaresOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "optimize", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBodies::class$ = NULL;
      jmethodID *CelestialBodies::mids$ = NULL;
      bool CelestialBodies::live$ = false;

      jclass CelestialBodies::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBodies");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBody_29f199e59c05cc68] = env->getMethodID(cls, "getBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarth_798caa59db6076aa] = env->getMethodID(cls, "getEarth", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getEarthMoonBarycenter_798caa59db6076aa] = env->getMethodID(cls, "getEarthMoonBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getJupiter_798caa59db6076aa] = env->getMethodID(cls, "getJupiter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMars_798caa59db6076aa] = env->getMethodID(cls, "getMars", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMercury_798caa59db6076aa] = env->getMethodID(cls, "getMercury", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getMoon_798caa59db6076aa] = env->getMethodID(cls, "getMoon", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getNeptune_798caa59db6076aa] = env->getMethodID(cls, "getNeptune", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getPluto_798caa59db6076aa] = env->getMethodID(cls, "getPluto", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSaturn_798caa59db6076aa] = env->getMethodID(cls, "getSaturn", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSolarSystemBarycenter_798caa59db6076aa] = env->getMethodID(cls, "getSolarSystemBarycenter", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getSun_798caa59db6076aa] = env->getMethodID(cls, "getSun", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getUranus_798caa59db6076aa] = env->getMethodID(cls, "getUranus", "()Lorg/orekit/bodies/CelestialBody;");
          mids$[mid_getVenus_798caa59db6076aa] = env->getMethodID(cls, "getVenus", "()Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_29f199e59c05cc68], a0.this$));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getEarth() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarth_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getEarthMoonBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getEarthMoonBarycenter_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getJupiter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getJupiter_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getMars() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMars_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getMercury() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMercury_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getMoon() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getMoon_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getNeptune() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getNeptune_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getPluto() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getPluto_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getSaturn() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSaturn_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getSolarSystemBarycenter() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSolarSystemBarycenter_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getSun() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getSun_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getUranus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getUranus_798caa59db6076aa]));
      }

      ::org::orekit::bodies::CelestialBody CelestialBodies::getVenus() const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getVenus_798caa59db6076aa]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_CelestialBodies_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodies_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodies_getBody(t_CelestialBodies *self, PyObject *arg);
      static PyObject *t_CelestialBodies_getEarth(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getEarthMoonBarycenter(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getJupiter(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getMars(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getMercury(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getMoon(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getNeptune(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getPluto(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getSaturn(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getSolarSystemBarycenter(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getSun(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getUranus(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_getVenus(t_CelestialBodies *self);
      static PyObject *t_CelestialBodies_get__earth(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__earthMoonBarycenter(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__jupiter(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__mars(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__mercury(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__moon(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__neptune(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__pluto(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__saturn(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__solarSystemBarycenter(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__sun(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__uranus(t_CelestialBodies *self, void *data);
      static PyObject *t_CelestialBodies_get__venus(t_CelestialBodies *self, void *data);
      static PyGetSetDef t_CelestialBodies__fields_[] = {
        DECLARE_GET_FIELD(t_CelestialBodies, earth),
        DECLARE_GET_FIELD(t_CelestialBodies, earthMoonBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodies, jupiter),
        DECLARE_GET_FIELD(t_CelestialBodies, mars),
        DECLARE_GET_FIELD(t_CelestialBodies, mercury),
        DECLARE_GET_FIELD(t_CelestialBodies, moon),
        DECLARE_GET_FIELD(t_CelestialBodies, neptune),
        DECLARE_GET_FIELD(t_CelestialBodies, pluto),
        DECLARE_GET_FIELD(t_CelestialBodies, saturn),
        DECLARE_GET_FIELD(t_CelestialBodies, solarSystemBarycenter),
        DECLARE_GET_FIELD(t_CelestialBodies, sun),
        DECLARE_GET_FIELD(t_CelestialBodies, uranus),
        DECLARE_GET_FIELD(t_CelestialBodies, venus),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CelestialBodies__methods_[] = {
        DECLARE_METHOD(t_CelestialBodies, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodies, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodies, getBody, METH_O),
        DECLARE_METHOD(t_CelestialBodies, getEarth, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getEarthMoonBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getJupiter, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getMars, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getMercury, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getMoon, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getNeptune, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getPluto, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getSaturn, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getSolarSystemBarycenter, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getSun, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getUranus, METH_NOARGS),
        DECLARE_METHOD(t_CelestialBodies, getVenus, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodies)[] = {
        { Py_tp_methods, t_CelestialBodies__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CelestialBodies__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodies)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodies, t_CelestialBodies, CelestialBodies);

      void t_CelestialBodies::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodies), &PY_TYPE_DEF(CelestialBodies), module, "CelestialBodies", 0);
      }

      void t_CelestialBodies::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodies), "class_", make_descriptor(CelestialBodies::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodies), "wrapfn_", make_descriptor(t_CelestialBodies::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodies), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBodies_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodies::initializeClass, 1)))
          return NULL;
        return t_CelestialBodies::wrap_Object(CelestialBodies(((t_CelestialBodies *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodies_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodies::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBodies_getBody(t_CelestialBodies *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getBody", arg);
        return NULL;
      }

      static PyObject *t_CelestialBodies_getEarth(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getEarthMoonBarycenter(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getJupiter(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getMars(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getMercury(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getMoon(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getNeptune(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getPluto(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getSaturn(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getSolarSystemBarycenter(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getSun(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getUranus(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_getVenus(t_CelestialBodies *self)
      {
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);
        OBJ_CALL(result = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
      }

      static PyObject *t_CelestialBodies_get__earth(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarth());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__earthMoonBarycenter(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarthMoonBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__jupiter(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getJupiter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__mars(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMars());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__mercury(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMercury());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__moon(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getMoon());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__neptune(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeptune());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__pluto(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getPluto());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__saturn(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSaturn());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__solarSystemBarycenter(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolarSystemBarycenter());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__sun(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getSun());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__uranus(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getUranus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }

      static PyObject *t_CelestialBodies_get__venus(t_CelestialBodies *self, void *data)
      {
        ::org::orekit::bodies::CelestialBody value((jobject) NULL);
        OBJ_CALL(value = self->object.getVenus());
        return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "org/hipparchus/geometry/Point.h"
#include "java/util/Iterator.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/euclidean/oned/Interval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *IntervalsSet::class$ = NULL;
          jmethodID *IntervalsSet::mids$ = NULL;
          bool IntervalsSet::live$ = false;

          jclass IntervalsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/IntervalsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_3e72dd0bd3a69a59] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_b832ff2fd1b54c87] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_asList_a6156df500549a58] = env->getMethodID(cls, "asList", "()Ljava/util/List;");
              mids$[mid_buildNew_1122d43a099e75c6] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/euclidean/oned/IntervalsSet;");
              mids$[mid_getInf_456d9a2f64d6b28d] = env->getMethodID(cls, "getInf", "()D");
              mids$[mid_getSup_456d9a2f64d6b28d] = env->getMethodID(cls, "getSup", "()D");
              mids$[mid_iterator_035c6167e6569aac] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
              mids$[mid_projectToBoundary_a3932f0f8ec705f8] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");
              mids$[mid_computeGeometricalProperties_7ae3461a92a43152] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IntervalsSet::IntervalsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          IntervalsSet::IntervalsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_3e72dd0bd3a69a59, a0.this$, a1)) {}

          IntervalsSet::IntervalsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_b832ff2fd1b54c87, a0.this$, a1)) {}

          IntervalsSet::IntervalsSet(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

          ::java::util::List IntervalsSet::asList() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_asList_a6156df500549a58]));
          }

          IntervalsSet IntervalsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return IntervalsSet(env->callObjectMethod(this$, mids$[mid_buildNew_1122d43a099e75c6], a0.this$));
          }

          jdouble IntervalsSet::getInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInf_456d9a2f64d6b28d]);
          }

          jdouble IntervalsSet::getSup() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSup_456d9a2f64d6b28d]);
          }

          ::java::util::Iterator IntervalsSet::iterator() const
          {
            return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_035c6167e6569aac]));
          }

          ::org::hipparchus::geometry::partitioning::BoundaryProjection IntervalsSet::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_a3932f0f8ec705f8], a0.this$));
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
    namespace geometry {
      namespace euclidean {
        namespace oned {
          static PyObject *t_IntervalsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IntervalsSet_of_(t_IntervalsSet *self, PyObject *args);
          static int t_IntervalsSet_init_(t_IntervalsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IntervalsSet_asList(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_buildNew(t_IntervalsSet *self, PyObject *args);
          static PyObject *t_IntervalsSet_getInf(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_getSup(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_iterator(t_IntervalsSet *self);
          static PyObject *t_IntervalsSet_projectToBoundary(t_IntervalsSet *self, PyObject *args);
          static PyObject *t_IntervalsSet_get__inf(t_IntervalsSet *self, void *data);
          static PyObject *t_IntervalsSet_get__sup(t_IntervalsSet *self, void *data);
          static PyObject *t_IntervalsSet_get__parameters_(t_IntervalsSet *self, void *data);
          static PyGetSetDef t_IntervalsSet__fields_[] = {
            DECLARE_GET_FIELD(t_IntervalsSet, inf),
            DECLARE_GET_FIELD(t_IntervalsSet, sup),
            DECLARE_GET_FIELD(t_IntervalsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IntervalsSet__methods_[] = {
            DECLARE_METHOD(t_IntervalsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IntervalsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_IntervalsSet, asList, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_IntervalsSet, getInf, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, getSup, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, iterator, METH_NOARGS),
            DECLARE_METHOD(t_IntervalsSet, projectToBoundary, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IntervalsSet)[] = {
            { Py_tp_methods, t_IntervalsSet__methods_ },
            { Py_tp_init, (void *) t_IntervalsSet_init_ },
            { Py_tp_getset, t_IntervalsSet__fields_ },
            { Py_tp_iter, (void *) ((PyObject *(*)(t_IntervalsSet *)) get_generic_iterator< t_IntervalsSet >) },
            { Py_tp_iternext, (void *) 0 },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IntervalsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(IntervalsSet, t_IntervalsSet, IntervalsSet);
          PyObject *t_IntervalsSet::wrap_Object(const IntervalsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_IntervalsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalsSet *self = (t_IntervalsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_IntervalsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_IntervalsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IntervalsSet *self = (t_IntervalsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_IntervalsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(IntervalsSet), &PY_TYPE_DEF(IntervalsSet), module, "IntervalsSet", 0);
          }

          void t_IntervalsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalsSet), "class_", make_descriptor(IntervalsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalsSet), "wrapfn_", make_descriptor(t_IntervalsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IntervalsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IntervalsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IntervalsSet::initializeClass, 1)))
              return NULL;
            return t_IntervalsSet::wrap_Object(IntervalsSet(((t_IntervalsSet *) arg)->object.this$));
          }
          static PyObject *t_IntervalsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IntervalsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IntervalsSet_of_(t_IntervalsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_IntervalsSet_init_(t_IntervalsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = IntervalsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = IntervalsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = IntervalsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                IntervalsSet object((jobject) NULL);

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  INT_CALL(object = IntervalsSet(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D);
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

          static PyObject *t_IntervalsSet_asList(t_IntervalsSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.asList());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Interval));
          }

          static PyObject *t_IntervalsSet_buildNew(t_IntervalsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            IntervalsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_IntervalsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(IntervalsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_IntervalsSet_getInf(t_IntervalsSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IntervalsSet_getSup(t_IntervalsSet *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSup());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_IntervalsSet_iterator(t_IntervalsSet *self)
          {
            ::java::util::Iterator result((jobject) NULL);
            OBJ_CALL(result = self->object.iterator());
            return ::java::util::t_Iterator::wrap_Object(result, ::java::lang::PY_TYPE(Object));
          }

          static PyObject *t_IntervalsSet_projectToBoundary(t_IntervalsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.projectToBoundary(a0));
              return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            return callSuper(PY_TYPE(IntervalsSet), (PyObject *) self, "projectToBoundary", args, 2);
          }
          static PyObject *t_IntervalsSet_get__parameters_(t_IntervalsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_IntervalsSet_get__inf(t_IntervalsSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_IntervalsSet_get__sup(t_IntervalsSet *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSup());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventState$EventOccurrence.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventState$EventOccurrence::class$ = NULL;
        jmethodID *FieldEventState$EventOccurrence::mids$ = NULL;
        bool FieldEventState$EventOccurrence::live$ = false;

        jclass FieldEventState$EventOccurrence::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventState$EventOccurrence");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAction_8c7583beb4e5a879] = env->getMethodID(cls, "getAction", "()Lorg/hipparchus/ode/events/Action;");
            mids$[mid_getNewState_a553824829fc2514] = env->getMethodID(cls, "getNewState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getStopDate_09b0a926600dfc14] = env->getMethodID(cls, "getStopDate", "()Lorg/orekit/time/FieldAbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::events::Action FieldEventState$EventOccurrence::getAction() const
        {
          return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_getAction_8c7583beb4e5a879]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldEventState$EventOccurrence::getNewState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getNewState_a553824829fc2514]));
        }

        ::org::orekit::time::FieldAbsoluteDate FieldEventState$EventOccurrence::getStopDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopDate_09b0a926600dfc14]));
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
        static PyObject *t_FieldEventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState$EventOccurrence_of_(t_FieldEventState$EventOccurrence *self, PyObject *args);
        static PyObject *t_FieldEventState$EventOccurrence_getAction(t_FieldEventState$EventOccurrence *self);
        static PyObject *t_FieldEventState$EventOccurrence_getNewState(t_FieldEventState$EventOccurrence *self);
        static PyObject *t_FieldEventState$EventOccurrence_getStopDate(t_FieldEventState$EventOccurrence *self);
        static PyObject *t_FieldEventState$EventOccurrence_get__action(t_FieldEventState$EventOccurrence *self, void *data);
        static PyObject *t_FieldEventState$EventOccurrence_get__newState(t_FieldEventState$EventOccurrence *self, void *data);
        static PyObject *t_FieldEventState$EventOccurrence_get__stopDate(t_FieldEventState$EventOccurrence *self, void *data);
        static PyObject *t_FieldEventState$EventOccurrence_get__parameters_(t_FieldEventState$EventOccurrence *self, void *data);
        static PyGetSetDef t_FieldEventState$EventOccurrence__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, action),
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, newState),
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, stopDate),
          DECLARE_GET_FIELD(t_FieldEventState$EventOccurrence, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventState$EventOccurrence__methods_[] = {
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, getAction, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, getNewState, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState$EventOccurrence, getStopDate, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventState$EventOccurrence)[] = {
          { Py_tp_methods, t_FieldEventState$EventOccurrence__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventState$EventOccurrence__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventState$EventOccurrence)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventState$EventOccurrence, t_FieldEventState$EventOccurrence, FieldEventState$EventOccurrence);
        PyObject *t_FieldEventState$EventOccurrence::wrap_Object(const FieldEventState$EventOccurrence& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState$EventOccurrence::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState$EventOccurrence *self = (t_FieldEventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventState$EventOccurrence::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventState$EventOccurrence::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState$EventOccurrence *self = (t_FieldEventState$EventOccurrence *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventState$EventOccurrence::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventState$EventOccurrence), &PY_TYPE_DEF(FieldEventState$EventOccurrence), module, "FieldEventState$EventOccurrence", 0);
        }

        void t_FieldEventState$EventOccurrence::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState$EventOccurrence), "class_", make_descriptor(FieldEventState$EventOccurrence::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState$EventOccurrence), "wrapfn_", make_descriptor(t_FieldEventState$EventOccurrence::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState$EventOccurrence), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventState$EventOccurrence_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventState$EventOccurrence::initializeClass, 1)))
            return NULL;
          return t_FieldEventState$EventOccurrence::wrap_Object(FieldEventState$EventOccurrence(((t_FieldEventState$EventOccurrence *) arg)->object.this$));
        }
        static PyObject *t_FieldEventState$EventOccurrence_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventState$EventOccurrence::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventState$EventOccurrence_of_(t_FieldEventState$EventOccurrence *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventState$EventOccurrence_getAction(t_FieldEventState$EventOccurrence *self)
        {
          ::org::hipparchus::ode::events::Action result((jobject) NULL);
          OBJ_CALL(result = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
        }

        static PyObject *t_FieldEventState$EventOccurrence_getNewState(t_FieldEventState$EventOccurrence *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getNewState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventState$EventOccurrence_getStopDate(t_FieldEventState$EventOccurrence *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_FieldEventState$EventOccurrence_get__parameters_(t_FieldEventState$EventOccurrence *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventState$EventOccurrence_get__action(t_FieldEventState$EventOccurrence *self, void *data)
        {
          ::org::hipparchus::ode::events::Action value((jobject) NULL);
          OBJ_CALL(value = self->object.getAction());
          return ::org::hipparchus::ode::events::t_Action::wrap_Object(value);
        }

        static PyObject *t_FieldEventState$EventOccurrence_get__newState(t_FieldEventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getNewState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }

        static PyObject *t_FieldEventState$EventOccurrence_get__stopDate(t_FieldEventState$EventOccurrence *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/ForwardingRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *ForwardingRandomGenerator::class$ = NULL;
      jmethodID *ForwardingRandomGenerator::mids$ = NULL;
      bool ForwardingRandomGenerator::live$ = false;

      jclass ForwardingRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/ForwardingRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextBoolean_e470b6d9e0d979db] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_9c4b35f0a6dc87f3] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_125b1e9f043b29f8] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_966c782d3223854d] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_456d9a2f64d6b28d] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_f2f64475e4580546] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_38565d58479aa24a] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_a27fc9afd27e559d] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_955f7541fca701ab] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_3b603738d1eb3233] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_0a2a1ac2721c0336] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_fefb08975c10f0a1] = env->getMethodID(cls, "setSeed", "(J)V");
          mids$[mid_delegate_6c5b70fd21e949cf] = env->getMethodID(cls, "delegate", "()Lorg/hipparchus/random/RandomGenerator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean ForwardingRandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_e470b6d9e0d979db]);
      }

      void ForwardingRandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_9c4b35f0a6dc87f3], a0.this$);
      }

      void ForwardingRandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_125b1e9f043b29f8], a0.this$, a1, a2);
      }

      jdouble ForwardingRandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_456d9a2f64d6b28d]);
      }

      jfloat ForwardingRandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_966c782d3223854d]);
      }

      jdouble ForwardingRandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_456d9a2f64d6b28d]);
      }

      jint ForwardingRandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_f2f64475e4580546]);
      }

      jint ForwardingRandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_38565d58479aa24a], a0);
      }

      jlong ForwardingRandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_a27fc9afd27e559d]);
      }

      jlong ForwardingRandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_955f7541fca701ab], a0);
      }

      void ForwardingRandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3b603738d1eb3233], a0.this$);
      }

      void ForwardingRandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_0a2a1ac2721c0336], a0);
      }

      void ForwardingRandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_fefb08975c10f0a1], a0);
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
      static PyObject *t_ForwardingRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForwardingRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForwardingRandomGenerator_nextBoolean(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextBytes(t_ForwardingRandomGenerator *self, PyObject *args);
      static PyObject *t_ForwardingRandomGenerator_nextDouble(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextFloat(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextGaussian(t_ForwardingRandomGenerator *self);
      static PyObject *t_ForwardingRandomGenerator_nextInt(t_ForwardingRandomGenerator *self, PyObject *args);
      static PyObject *t_ForwardingRandomGenerator_nextLong(t_ForwardingRandomGenerator *self, PyObject *args);
      static PyObject *t_ForwardingRandomGenerator_setSeed(t_ForwardingRandomGenerator *self, PyObject *args);
      static int t_ForwardingRandomGenerator_set__seed(t_ForwardingRandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_ForwardingRandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_ForwardingRandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ForwardingRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_ForwardingRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextBoolean, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextDouble, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextFloat, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_ForwardingRandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ForwardingRandomGenerator)[] = {
        { Py_tp_methods, t_ForwardingRandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ForwardingRandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ForwardingRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ForwardingRandomGenerator, t_ForwardingRandomGenerator, ForwardingRandomGenerator);

      void t_ForwardingRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(ForwardingRandomGenerator), &PY_TYPE_DEF(ForwardingRandomGenerator), module, "ForwardingRandomGenerator", 0);
      }

      void t_ForwardingRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForwardingRandomGenerator), "class_", make_descriptor(ForwardingRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForwardingRandomGenerator), "wrapfn_", make_descriptor(t_ForwardingRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForwardingRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ForwardingRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ForwardingRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_ForwardingRandomGenerator::wrap_Object(ForwardingRandomGenerator(((t_ForwardingRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_ForwardingRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ForwardingRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ForwardingRandomGenerator_nextBoolean(t_ForwardingRandomGenerator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.nextBoolean());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextBytes(t_ForwardingRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextBytes", args);
        return NULL;
      }

      static PyObject *t_ForwardingRandomGenerator_nextDouble(t_ForwardingRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextFloat(t_ForwardingRandomGenerator *self)
      {
        jfloat result;
        OBJ_CALL(result = self->object.nextFloat());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextGaussian(t_ForwardingRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ForwardingRandomGenerator_nextInt(t_ForwardingRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextInt", args);
        return NULL;
      }

      static PyObject *t_ForwardingRandomGenerator_nextLong(t_ForwardingRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.nextLong());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.nextLong(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextLong", args);
        return NULL;
      }

      static PyObject *t_ForwardingRandomGenerator_setSeed(t_ForwardingRandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setSeed", args);
        return NULL;
      }

      static int t_ForwardingRandomGenerator_set__seed(t_ForwardingRandomGenerator *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/TLEPropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/analytical/tle/TLEPropagator.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Object.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/propagation/conversion/TLEPropagatorBuilder.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *TLEPropagatorBuilder::class$ = NULL;
        jmethodID *TLEPropagatorBuilder::mids$ = NULL;
        bool TLEPropagatorBuilder::live$ = false;

        jclass TLEPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/TLEPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a62c74463f877056] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)V");
            mids$[mid_init$_321a504eebdd5b34] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/data/DataContext;Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)V");
            mids$[mid_buildLeastSquaresModel_31c4fcde5bc19fc3] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_6af7ded75f6f8b1c] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/analytical/tle/TLEPropagator;");
            mids$[mid_copy_213db2109b338194] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/TLEPropagatorBuilder;");
            mids$[mid_getTemplateTLE_32ddbfc0b67883b1] = env->getMethodID(cls, "getTemplateTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TLEPropagatorBuilder::TLEPropagatorBuilder(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_a62c74463f877056, a0.this$, a1.this$, a2, a3.this$)) {}

        TLEPropagatorBuilder::TLEPropagatorBuilder(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::orbits::PositionAngleType & a1, jdouble a2, const ::org::orekit::data::DataContext & a3, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_321a504eebdd5b34, a0.this$, a1.this$, a2, a3.this$, a4.this$)) {}

        ::org::orekit::estimation::leastsquares::AbstractBatchLSModel TLEPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::AbstractBatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_31c4fcde5bc19fc3], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::analytical::tle::TLEPropagator TLEPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::analytical::tle::TLEPropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_6af7ded75f6f8b1c], a0.this$));
        }

        TLEPropagatorBuilder TLEPropagatorBuilder::copy() const
        {
          return TLEPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_213db2109b338194]));
        }

        ::org::orekit::propagation::analytical::tle::TLE TLEPropagatorBuilder::getTemplateTLE() const
        {
          return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_getTemplateTLE_32ddbfc0b67883b1]));
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
        static PyObject *t_TLEPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TLEPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TLEPropagatorBuilder_init_(t_TLEPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TLEPropagatorBuilder_buildLeastSquaresModel(t_TLEPropagatorBuilder *self, PyObject *args);
        static PyObject *t_TLEPropagatorBuilder_buildPropagator(t_TLEPropagatorBuilder *self, PyObject *args);
        static PyObject *t_TLEPropagatorBuilder_copy(t_TLEPropagatorBuilder *self, PyObject *args);
        static PyObject *t_TLEPropagatorBuilder_getTemplateTLE(t_TLEPropagatorBuilder *self);
        static PyObject *t_TLEPropagatorBuilder_get__templateTLE(t_TLEPropagatorBuilder *self, void *data);
        static PyGetSetDef t_TLEPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_TLEPropagatorBuilder, templateTLE),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TLEPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_TLEPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, copy, METH_VARARGS),
          DECLARE_METHOD(t_TLEPropagatorBuilder, getTemplateTLE, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TLEPropagatorBuilder)[] = {
          { Py_tp_methods, t_TLEPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_TLEPropagatorBuilder_init_ },
          { Py_tp_getset, t_TLEPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TLEPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(TLEPropagatorBuilder, t_TLEPropagatorBuilder, TLEPropagatorBuilder);

        void t_TLEPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(TLEPropagatorBuilder), &PY_TYPE_DEF(TLEPropagatorBuilder), module, "TLEPropagatorBuilder", 0);
        }

        void t_TLEPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagatorBuilder), "class_", make_descriptor(TLEPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagatorBuilder), "wrapfn_", make_descriptor(t_TLEPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TLEPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TLEPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TLEPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_TLEPropagatorBuilder::wrap_Object(TLEPropagatorBuilder(((t_TLEPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_TLEPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TLEPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TLEPropagatorBuilder_init_(t_TLEPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a3((jobject) NULL);
              TLEPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3))
              {
                INT_CALL(object = TLEPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a4((jobject) NULL);
              TLEPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kKDkk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2, &a3, &a4))
              {
                INT_CALL(object = TLEPropagatorBuilder(a0, a1, a2, a3, a4));
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

        static PyObject *t_TLEPropagatorBuilder_buildLeastSquaresModel(t_TLEPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_AbstractBatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(TLEPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_TLEPropagatorBuilder_buildPropagator(t_TLEPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::analytical::tle::TLEPropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::analytical::tle::t_TLEPropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(TLEPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_TLEPropagatorBuilder_copy(t_TLEPropagatorBuilder *self, PyObject *args)
        {
          TLEPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_TLEPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(TLEPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_TLEPropagatorBuilder_getTemplateTLE(t_TLEPropagatorBuilder *self)
        {
          ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
          OBJ_CALL(result = self->object.getTemplateTLE());
          return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
        }

        static PyObject *t_TLEPropagatorBuilder_get__templateTLE(t_TLEPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::analytical::tle::TLE value((jobject) NULL);
          OBJ_CALL(value = self->object.getTemplateTLE());
          return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/GlobalMappingFunctionModel.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *GlobalMappingFunctionModel::class$ = NULL;
          jmethodID *GlobalMappingFunctionModel::mids$ = NULL;
          bool GlobalMappingFunctionModel::live$ = false;

          jclass GlobalMappingFunctionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/GlobalMappingFunctionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_6d73d536a2f24dd5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
              mids$[mid_mappingFactors_6def5a87906f3de8] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_mappingFactors_67294ed37389436d] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalMappingFunctionModel::GlobalMappingFunctionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          GlobalMappingFunctionModel::GlobalMappingFunctionModel(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6d73d536a2f24dd5, a0.this$)) {}

          JArray< jdouble > GlobalMappingFunctionModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6def5a87906f3de8], a0, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > GlobalMappingFunctionModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_67294ed37389436d], a0.this$, a1.this$, a2.this$));
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_GlobalMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalMappingFunctionModel_init_(t_GlobalMappingFunctionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalMappingFunctionModel_mappingFactors(t_GlobalMappingFunctionModel *self, PyObject *args);

          static PyMethodDef t_GlobalMappingFunctionModel__methods_[] = {
            DECLARE_METHOD(t_GlobalMappingFunctionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalMappingFunctionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalMappingFunctionModel, mappingFactors, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalMappingFunctionModel)[] = {
            { Py_tp_methods, t_GlobalMappingFunctionModel__methods_ },
            { Py_tp_init, (void *) t_GlobalMappingFunctionModel_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalMappingFunctionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalMappingFunctionModel, t_GlobalMappingFunctionModel, GlobalMappingFunctionModel);

          void t_GlobalMappingFunctionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalMappingFunctionModel), &PY_TYPE_DEF(GlobalMappingFunctionModel), module, "GlobalMappingFunctionModel", 0);
          }

          void t_GlobalMappingFunctionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalMappingFunctionModel), "class_", make_descriptor(GlobalMappingFunctionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalMappingFunctionModel), "wrapfn_", make_descriptor(t_GlobalMappingFunctionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalMappingFunctionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlobalMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalMappingFunctionModel::initializeClass, 1)))
              return NULL;
            return t_GlobalMappingFunctionModel::wrap_Object(GlobalMappingFunctionModel(((t_GlobalMappingFunctionModel *) arg)->object.this$));
          }
          static PyObject *t_GlobalMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalMappingFunctionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalMappingFunctionModel_init_(t_GlobalMappingFunctionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                GlobalMappingFunctionModel object((jobject) NULL);

                INT_CALL(object = GlobalMappingFunctionModel());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                GlobalMappingFunctionModel object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
                {
                  INT_CALL(object = GlobalMappingFunctionModel(a0));
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

          static PyObject *t_GlobalMappingFunctionModel_mappingFactors(t_GlobalMappingFunctionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventsLogger$FieldLoggedEvent.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventsLogger$FieldLoggedEvent::class$ = NULL;
        jmethodID *FieldEventsLogger$FieldLoggedEvent::mids$ = NULL;
        bool FieldEventsLogger$FieldLoggedEvent::live$ = false;

        jclass FieldEventsLogger$FieldLoggedEvent::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventsLogger$FieldLoggedEvent");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEventDetector_9afb3f6694da2222] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_getState_a553824829fc2514] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_isIncreasing_e470b6d9e0d979db] = env->getMethodID(cls, "isIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventsLogger$FieldLoggedEvent::getEventDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_9afb3f6694da2222]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldEventsLogger$FieldLoggedEvent::getState() const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_a553824829fc2514]));
        }

        jboolean FieldEventsLogger$FieldLoggedEvent::isIncreasing() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isIncreasing_e470b6d9e0d979db]);
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
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_of_(t_FieldEventsLogger$FieldLoggedEvent *self, PyObject *args);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getEventDetector(t_FieldEventsLogger$FieldLoggedEvent *self);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getState(t_FieldEventsLogger$FieldLoggedEvent *self);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_isIncreasing(t_FieldEventsLogger$FieldLoggedEvent *self);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__eventDetector(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__increasing(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__state(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__parameters_(t_FieldEventsLogger$FieldLoggedEvent *self, void *data);
        static PyGetSetDef t_FieldEventsLogger$FieldLoggedEvent__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, eventDetector),
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, increasing),
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, state),
          DECLARE_GET_FIELD(t_FieldEventsLogger$FieldLoggedEvent, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventsLogger$FieldLoggedEvent__methods_[] = {
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, getState, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventsLogger$FieldLoggedEvent, isIncreasing, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventsLogger$FieldLoggedEvent)[] = {
          { Py_tp_methods, t_FieldEventsLogger$FieldLoggedEvent__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEventsLogger$FieldLoggedEvent__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventsLogger$FieldLoggedEvent)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventsLogger$FieldLoggedEvent, t_FieldEventsLogger$FieldLoggedEvent, FieldEventsLogger$FieldLoggedEvent);
        PyObject *t_FieldEventsLogger$FieldLoggedEvent::wrap_Object(const FieldEventsLogger$FieldLoggedEvent& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger$FieldLoggedEvent::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger$FieldLoggedEvent *self = (t_FieldEventsLogger$FieldLoggedEvent *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventsLogger$FieldLoggedEvent::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger$FieldLoggedEvent::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger$FieldLoggedEvent *self = (t_FieldEventsLogger$FieldLoggedEvent *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventsLogger$FieldLoggedEvent::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventsLogger$FieldLoggedEvent), &PY_TYPE_DEF(FieldEventsLogger$FieldLoggedEvent), module, "FieldEventsLogger$FieldLoggedEvent", 0);
        }

        void t_FieldEventsLogger$FieldLoggedEvent::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger$FieldLoggedEvent), "class_", make_descriptor(FieldEventsLogger$FieldLoggedEvent::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger$FieldLoggedEvent), "wrapfn_", make_descriptor(t_FieldEventsLogger$FieldLoggedEvent::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger$FieldLoggedEvent), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventsLogger$FieldLoggedEvent::initializeClass, 1)))
            return NULL;
          return t_FieldEventsLogger$FieldLoggedEvent::wrap_Object(FieldEventsLogger$FieldLoggedEvent(((t_FieldEventsLogger$FieldLoggedEvent *) arg)->object.this$));
        }
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventsLogger$FieldLoggedEvent::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_of_(t_FieldEventsLogger$FieldLoggedEvent *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getEventDetector(t_FieldEventsLogger$FieldLoggedEvent *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_getState(t_FieldEventsLogger$FieldLoggedEvent *self)
        {
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_isIncreasing(t_FieldEventsLogger$FieldLoggedEvent *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isIncreasing());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__parameters_(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__eventDetector(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__increasing(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isIncreasing());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldEventsLogger$FieldLoggedEvent_get__state(t_FieldEventsLogger$FieldLoggedEvent *self, void *data)
        {
          ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GPSScale::class$ = NULL;
      jmethodID *GPSScale::mids$ = NULL;
      bool GPSScale::live$ = false;

      jclass GPSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GPSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String GPSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jdouble GPSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GPSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_7bc0fd76ee915b72], a0.this$));
      }

      jdouble GPSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1], a0.this$, a1.this$);
      }

      ::java::lang::String GPSScale::toString() const
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
  namespace orekit {
    namespace time {
      static PyObject *t_GPSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GPSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GPSScale_getName(t_GPSScale *self);
      static PyObject *t_GPSScale_offsetFromTAI(t_GPSScale *self, PyObject *args);
      static PyObject *t_GPSScale_offsetToTAI(t_GPSScale *self, PyObject *args);
      static PyObject *t_GPSScale_toString(t_GPSScale *self, PyObject *args);
      static PyObject *t_GPSScale_get__name(t_GPSScale *self, void *data);
      static PyGetSetDef t_GPSScale__fields_[] = {
        DECLARE_GET_FIELD(t_GPSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GPSScale__methods_[] = {
        DECLARE_METHOD(t_GPSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GPSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GPSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GPSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GPSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_GPSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GPSScale)[] = {
        { Py_tp_methods, t_GPSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GPSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GPSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GPSScale, t_GPSScale, GPSScale);

      void t_GPSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GPSScale), &PY_TYPE_DEF(GPSScale), module, "GPSScale", 0);
      }

      void t_GPSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GPSScale), "class_", make_descriptor(GPSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GPSScale), "wrapfn_", make_descriptor(t_GPSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GPSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GPSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GPSScale::initializeClass, 1)))
          return NULL;
        return t_GPSScale::wrap_Object(GPSScale(((t_GPSScale *) arg)->object.this$));
      }
      static PyObject *t_GPSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GPSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GPSScale_getName(t_GPSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GPSScale_offsetFromTAI(t_GPSScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_GPSScale_offsetToTAI(t_GPSScale *self, PyObject *args)
      {
        ::org::orekit::time::DateComponents a0((jobject) NULL);
        ::org::orekit::time::TimeComponents a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "kk", ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.offsetToTAI(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "offsetToTAI", args);
        return NULL;
      }

      static PyObject *t_GPSScale_toString(t_GPSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GPSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GPSScale_get__name(t_GPSScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *Maneuvrable::class$ = NULL;
            jmethodID *Maneuvrable::mids$ = NULL;
            bool Maneuvrable::live$ = false;
            Maneuvrable *Maneuvrable::NO = NULL;
            Maneuvrable *Maneuvrable::N_A = NULL;
            Maneuvrable *Maneuvrable::YES = NULL;

            jclass Maneuvrable::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/Maneuvrable");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getEnum_40263e8d06abaefc] = env->getStaticMethodID(cls, "getEnum", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");
                mids$[mid_getValue_0090f7797e403f43] = env->getMethodID(cls, "getValue", "()Ljava/lang/String;");
                mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_valueOf_40263e8d06abaefc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");
                mids$[mid_values_593b45927b42658a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                NO = new Maneuvrable(env->getStaticObjectField(cls, "NO", "Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;"));
                N_A = new Maneuvrable(env->getStaticObjectField(cls, "N_A", "Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;"));
                YES = new Maneuvrable(env->getStaticObjectField(cls, "YES", "Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Maneuvrable Maneuvrable::getEnum(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return Maneuvrable(env->callStaticObjectMethod(cls, mids$[mid_getEnum_40263e8d06abaefc], a0.this$));
            }

            ::java::lang::String Maneuvrable::getValue() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getValue_0090f7797e403f43]));
            }

            ::java::lang::String Maneuvrable::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
            }

            Maneuvrable Maneuvrable::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return Maneuvrable(env->callStaticObjectMethod(cls, mids$[mid_valueOf_40263e8d06abaefc], a0.this$));
            }

            JArray< Maneuvrable > Maneuvrable::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< Maneuvrable >(env->callStaticObjectMethod(cls, mids$[mid_values_593b45927b42658a]));
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
            static PyObject *t_Maneuvrable_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Maneuvrable_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Maneuvrable_of_(t_Maneuvrable *self, PyObject *args);
            static PyObject *t_Maneuvrable_getEnum(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Maneuvrable_getValue(t_Maneuvrable *self);
            static PyObject *t_Maneuvrable_toString(t_Maneuvrable *self, PyObject *args);
            static PyObject *t_Maneuvrable_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_Maneuvrable_values(PyTypeObject *type);
            static PyObject *t_Maneuvrable_get__value(t_Maneuvrable *self, void *data);
            static PyObject *t_Maneuvrable_get__parameters_(t_Maneuvrable *self, void *data);
            static PyGetSetDef t_Maneuvrable__fields_[] = {
              DECLARE_GET_FIELD(t_Maneuvrable, value),
              DECLARE_GET_FIELD(t_Maneuvrable, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Maneuvrable__methods_[] = {
              DECLARE_METHOD(t_Maneuvrable, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, of_, METH_VARARGS),
              DECLARE_METHOD(t_Maneuvrable, getEnum, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, getValue, METH_NOARGS),
              DECLARE_METHOD(t_Maneuvrable, toString, METH_VARARGS),
              DECLARE_METHOD(t_Maneuvrable, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_Maneuvrable, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Maneuvrable)[] = {
              { Py_tp_methods, t_Maneuvrable__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_Maneuvrable__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Maneuvrable)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(Maneuvrable, t_Maneuvrable, Maneuvrable);
            PyObject *t_Maneuvrable::wrap_Object(const Maneuvrable& object, PyTypeObject *p0)
            {
              PyObject *obj = t_Maneuvrable::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Maneuvrable *self = (t_Maneuvrable *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_Maneuvrable::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_Maneuvrable::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Maneuvrable *self = (t_Maneuvrable *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_Maneuvrable::install(PyObject *module)
            {
              installType(&PY_TYPE(Maneuvrable), &PY_TYPE_DEF(Maneuvrable), module, "Maneuvrable", 0);
            }

            void t_Maneuvrable::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "class_", make_descriptor(Maneuvrable::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "wrapfn_", make_descriptor(t_Maneuvrable::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "boxfn_", make_descriptor(boxObject));
              env->getClass(Maneuvrable::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "NO", make_descriptor(t_Maneuvrable::wrap_Object(*Maneuvrable::NO)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "N_A", make_descriptor(t_Maneuvrable::wrap_Object(*Maneuvrable::N_A)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuvrable), "YES", make_descriptor(t_Maneuvrable::wrap_Object(*Maneuvrable::YES)));
            }

            static PyObject *t_Maneuvrable_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Maneuvrable::initializeClass, 1)))
                return NULL;
              return t_Maneuvrable::wrap_Object(Maneuvrable(((t_Maneuvrable *) arg)->object.this$));
            }
            static PyObject *t_Maneuvrable_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Maneuvrable::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Maneuvrable_of_(t_Maneuvrable *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_Maneuvrable_getEnum(PyTypeObject *type, PyObject *arg)
            {
              ::java::lang::String a0((jobject) NULL);
              Maneuvrable result((jobject) NULL);

              if (!parseArg(arg, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::getEnum(a0));
                return t_Maneuvrable::wrap_Object(result);
              }

              PyErr_SetArgsError(type, "getEnum", arg);
              return NULL;
            }

            static PyObject *t_Maneuvrable_getValue(t_Maneuvrable *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getValue());
              return j2p(result);
            }

            static PyObject *t_Maneuvrable_toString(t_Maneuvrable *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(Maneuvrable), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_Maneuvrable_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              Maneuvrable result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::valueOf(a0));
                return t_Maneuvrable::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_Maneuvrable_values(PyTypeObject *type)
            {
              JArray< Maneuvrable > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::values());
              return JArray<jobject>(result.this$).wrap(t_Maneuvrable::wrap_jobject);
            }
            static PyObject *t_Maneuvrable_get__parameters_(t_Maneuvrable *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_Maneuvrable_get__value(t_Maneuvrable *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getValue());
              return j2p(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/ViennaModelCoefficientsLoader.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/orekit/time/DateTimeComponents.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/troposphere/ViennaModelType.h"
#include "org/orekit/data/DataLoader.h"
#include "java/text/ParseException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaModelCoefficientsLoader::class$ = NULL;
          jmethodID *ViennaModelCoefficientsLoader::mids$ = NULL;
          bool ViennaModelCoefficientsLoader::live$ = false;
          ::java::lang::String *ViennaModelCoefficientsLoader::DEFAULT_SUPPORTED_NAMES = NULL;

          jclass ViennaModelCoefficientsLoader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaModelCoefficientsLoader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_320383c73b780816] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/models/earth/troposphere/ViennaModelType;)V");
              mids$[mid_init$_7cde855d7ec2fcd3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/troposphere/ViennaModelType;)V");
              mids$[mid_init$_5ac77ae5b8feddee] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDLorg/orekit/models/earth/troposphere/ViennaModelType;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getA_7cdc325af0834901] = env->getMethodID(cls, "getA", "()[D");
              mids$[mid_getSupportedNames_0090f7797e403f43] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_getZenithDelay_7cdc325af0834901] = env->getMethodID(cls, "getZenithDelay", "()[D");
              mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_loadViennaCoefficients_7ae3461a92a43152] = env->getMethodID(cls, "loadViennaCoefficients", "()V");
              mids$[mid_loadViennaCoefficients_994b26ed44999e86] = env->getMethodID(cls, "loadViennaCoefficients", "(Lorg/orekit/time/DateTimeComponents;)V");
              mids$[mid_stillAcceptsData_e470b6d9e0d979db] = env->getMethodID(cls, "stillAcceptsData", "()Z");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaModelCoefficientsLoader::ViennaModelCoefficientsLoader(jdouble a0, jdouble a1, const ::org::orekit::models::earth::troposphere::ViennaModelType & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_320383c73b780816, a0, a1, a2.this$)) {}

          ViennaModelCoefficientsLoader::ViennaModelCoefficientsLoader(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::troposphere::ViennaModelType & a3) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_7cde855d7ec2fcd3, a0.this$, a1, a2, a3.this$)) {}

          ViennaModelCoefficientsLoader::ViennaModelCoefficientsLoader(const ::java::lang::String & a0, jdouble a1, jdouble a2, const ::org::orekit::models::earth::troposphere::ViennaModelType & a3, const ::org::orekit::data::DataProvidersManager & a4) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_5ac77ae5b8feddee, a0.this$, a1, a2, a3.this$, a4.this$)) {}

          JArray< jdouble > ViennaModelCoefficientsLoader::getA() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getA_7cdc325af0834901]));
          }

          ::java::lang::String ViennaModelCoefficientsLoader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_0090f7797e403f43]));
          }

          JArray< jdouble > ViennaModelCoefficientsLoader::getZenithDelay() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getZenithDelay_7cdc325af0834901]));
          }

          void ViennaModelCoefficientsLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
          }

          void ViennaModelCoefficientsLoader::loadViennaCoefficients() const
          {
            env->callVoidMethod(this$, mids$[mid_loadViennaCoefficients_7ae3461a92a43152]);
          }

          void ViennaModelCoefficientsLoader::loadViennaCoefficients(const ::org::orekit::time::DateTimeComponents & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_loadViennaCoefficients_994b26ed44999e86], a0.this$);
          }

          jboolean ViennaModelCoefficientsLoader::stillAcceptsData() const
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_ViennaModelCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaModelCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ViennaModelCoefficientsLoader_init_(t_ViennaModelCoefficientsLoader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ViennaModelCoefficientsLoader_getA(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_getSupportedNames(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_getZenithDelay(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_loadData(t_ViennaModelCoefficientsLoader *self, PyObject *args);
          static PyObject *t_ViennaModelCoefficientsLoader_loadViennaCoefficients(t_ViennaModelCoefficientsLoader *self, PyObject *args);
          static PyObject *t_ViennaModelCoefficientsLoader_stillAcceptsData(t_ViennaModelCoefficientsLoader *self);
          static PyObject *t_ViennaModelCoefficientsLoader_get__a(t_ViennaModelCoefficientsLoader *self, void *data);
          static PyObject *t_ViennaModelCoefficientsLoader_get__supportedNames(t_ViennaModelCoefficientsLoader *self, void *data);
          static PyObject *t_ViennaModelCoefficientsLoader_get__zenithDelay(t_ViennaModelCoefficientsLoader *self, void *data);
          static PyGetSetDef t_ViennaModelCoefficientsLoader__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaModelCoefficientsLoader, a),
            DECLARE_GET_FIELD(t_ViennaModelCoefficientsLoader, supportedNames),
            DECLARE_GET_FIELD(t_ViennaModelCoefficientsLoader, zenithDelay),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaModelCoefficientsLoader__methods_[] = {
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, getA, METH_NOARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, getZenithDelay, METH_NOARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, loadViennaCoefficients, METH_VARARGS),
            DECLARE_METHOD(t_ViennaModelCoefficientsLoader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaModelCoefficientsLoader)[] = {
            { Py_tp_methods, t_ViennaModelCoefficientsLoader__methods_ },
            { Py_tp_init, (void *) t_ViennaModelCoefficientsLoader_init_ },
            { Py_tp_getset, t_ViennaModelCoefficientsLoader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaModelCoefficientsLoader)[] = {
            &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
            NULL
          };

          DEFINE_TYPE(ViennaModelCoefficientsLoader, t_ViennaModelCoefficientsLoader, ViennaModelCoefficientsLoader);

          void t_ViennaModelCoefficientsLoader::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaModelCoefficientsLoader), &PY_TYPE_DEF(ViennaModelCoefficientsLoader), module, "ViennaModelCoefficientsLoader", 0);
          }

          void t_ViennaModelCoefficientsLoader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "class_", make_descriptor(ViennaModelCoefficientsLoader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "wrapfn_", make_descriptor(t_ViennaModelCoefficientsLoader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "boxfn_", make_descriptor(boxObject));
            env->getClass(ViennaModelCoefficientsLoader::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaModelCoefficientsLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*ViennaModelCoefficientsLoader::DEFAULT_SUPPORTED_NAMES)));
          }

          static PyObject *t_ViennaModelCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaModelCoefficientsLoader::initializeClass, 1)))
              return NULL;
            return t_ViennaModelCoefficientsLoader::wrap_Object(ViennaModelCoefficientsLoader(((t_ViennaModelCoefficientsLoader *) arg)->object.this$));
          }
          static PyObject *t_ViennaModelCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaModelCoefficientsLoader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ViennaModelCoefficientsLoader_init_(t_ViennaModelCoefficientsLoader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::models::earth::troposphere::ViennaModelType a2((jobject) NULL);
                PyTypeObject **p2;
                ViennaModelCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "DDK", ::org::orekit::models::earth::troposphere::ViennaModelType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::models::earth::troposphere::t_ViennaModelType::parameters_))
                {
                  INT_CALL(object = ViennaModelCoefficientsLoader(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::troposphere::ViennaModelType a3((jobject) NULL);
                PyTypeObject **p3;
                ViennaModelCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "sDDK", ::org::orekit::models::earth::troposphere::ViennaModelType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::troposphere::t_ViennaModelType::parameters_))
                {
                  INT_CALL(object = ViennaModelCoefficientsLoader(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::java::lang::String a0((jobject) NULL);
                jdouble a1;
                jdouble a2;
                ::org::orekit::models::earth::troposphere::ViennaModelType a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::orekit::data::DataProvidersManager a4((jobject) NULL);
                ViennaModelCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "sDDKk", ::org::orekit::models::earth::troposphere::ViennaModelType::initializeClass, ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::models::earth::troposphere::t_ViennaModelType::parameters_, &a4))
                {
                  INT_CALL(object = ViennaModelCoefficientsLoader(a0, a1, a2, a3, a4));
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

          static PyObject *t_ViennaModelCoefficientsLoader_getA(t_ViennaModelCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getA());
            return result.wrap();
          }

          static PyObject *t_ViennaModelCoefficientsLoader_getSupportedNames(t_ViennaModelCoefficientsLoader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_ViennaModelCoefficientsLoader_getZenithDelay(t_ViennaModelCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getZenithDelay());
            return result.wrap();
          }

          static PyObject *t_ViennaModelCoefficientsLoader_loadData(t_ViennaModelCoefficientsLoader *self, PyObject *args)
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

          static PyObject *t_ViennaModelCoefficientsLoader_loadViennaCoefficients(t_ViennaModelCoefficientsLoader *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                OBJ_CALL(self->object.loadViennaCoefficients());
                Py_RETURN_NONE;
              }
              break;
             case 1:
              {
                ::org::orekit::time::DateTimeComponents a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::DateTimeComponents::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.loadViennaCoefficients(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "loadViennaCoefficients", args);
            return NULL;
          }

          static PyObject *t_ViennaModelCoefficientsLoader_stillAcceptsData(t_ViennaModelCoefficientsLoader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_ViennaModelCoefficientsLoader_get__a(t_ViennaModelCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getA());
            return value.wrap();
          }

          static PyObject *t_ViennaModelCoefficientsLoader_get__supportedNames(t_ViennaModelCoefficientsLoader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }

          static PyObject *t_ViennaModelCoefficientsLoader_get__zenithDelay(t_ViennaModelCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getZenithDelay());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/Arc.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/S1Point.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *Arc::class$ = NULL;
          jmethodID *Arc::mids$ = NULL;
          bool Arc::live$ = false;

          jclass Arc::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/Arc");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_checkPoint_69d64add2aa21689] = env->getMethodID(cls, "checkPoint", "(D)Lorg/hipparchus/geometry/partitioning/Region$Location;");
              mids$[mid_getBarycenter_456d9a2f64d6b28d] = env->getMethodID(cls, "getBarycenter", "()D");
              mids$[mid_getInf_456d9a2f64d6b28d] = env->getMethodID(cls, "getInf", "()D");
              mids$[mid_getOffset_0382ebde94e45116] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/spherical/oned/S1Point;)D");
              mids$[mid_getOffset_0ba5fed9597b693e] = env->getMethodID(cls, "getOffset", "(D)D");
              mids$[mid_getSize_456d9a2f64d6b28d] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_getSup_456d9a2f64d6b28d] = env->getMethodID(cls, "getSup", "()D");
              mids$[mid_getTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getTolerance", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Arc::Arc(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

          ::org::hipparchus::geometry::partitioning::Region$Location Arc::checkPoint(jdouble a0) const
          {
            return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_69d64add2aa21689], a0));
          }

          jdouble Arc::getBarycenter() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBarycenter_456d9a2f64d6b28d]);
          }

          jdouble Arc::getInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getInf_456d9a2f64d6b28d]);
          }

          jdouble Arc::getOffset(const ::org::hipparchus::geometry::spherical::oned::S1Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_0382ebde94e45116], a0.this$);
          }

          jdouble Arc::getOffset(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_0ba5fed9597b693e], a0);
          }

          jdouble Arc::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_456d9a2f64d6b28d]);
          }

          jdouble Arc::getSup() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSup_456d9a2f64d6b28d]);
          }

          jdouble Arc::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_456d9a2f64d6b28d]);
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
    namespace geometry {
      namespace spherical {
        namespace oned {
          static PyObject *t_Arc_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Arc_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Arc_init_(t_Arc *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Arc_checkPoint(t_Arc *self, PyObject *arg);
          static PyObject *t_Arc_getBarycenter(t_Arc *self);
          static PyObject *t_Arc_getInf(t_Arc *self);
          static PyObject *t_Arc_getOffset(t_Arc *self, PyObject *args);
          static PyObject *t_Arc_getSize(t_Arc *self);
          static PyObject *t_Arc_getSup(t_Arc *self);
          static PyObject *t_Arc_getTolerance(t_Arc *self);
          static PyObject *t_Arc_get__barycenter(t_Arc *self, void *data);
          static PyObject *t_Arc_get__inf(t_Arc *self, void *data);
          static PyObject *t_Arc_get__size(t_Arc *self, void *data);
          static PyObject *t_Arc_get__sup(t_Arc *self, void *data);
          static PyObject *t_Arc_get__tolerance(t_Arc *self, void *data);
          static PyGetSetDef t_Arc__fields_[] = {
            DECLARE_GET_FIELD(t_Arc, barycenter),
            DECLARE_GET_FIELD(t_Arc, inf),
            DECLARE_GET_FIELD(t_Arc, size),
            DECLARE_GET_FIELD(t_Arc, sup),
            DECLARE_GET_FIELD(t_Arc, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Arc__methods_[] = {
            DECLARE_METHOD(t_Arc, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Arc, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Arc, checkPoint, METH_O),
            DECLARE_METHOD(t_Arc, getBarycenter, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getInf, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Arc, getSize, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getSup, METH_NOARGS),
            DECLARE_METHOD(t_Arc, getTolerance, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Arc)[] = {
            { Py_tp_methods, t_Arc__methods_ },
            { Py_tp_init, (void *) t_Arc_init_ },
            { Py_tp_getset, t_Arc__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Arc)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Arc, t_Arc, Arc);

          void t_Arc::install(PyObject *module)
          {
            installType(&PY_TYPE(Arc), &PY_TYPE_DEF(Arc), module, "Arc", 0);
          }

          void t_Arc::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Arc), "class_", make_descriptor(Arc::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Arc), "wrapfn_", make_descriptor(t_Arc::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Arc), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Arc_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Arc::initializeClass, 1)))
              return NULL;
            return t_Arc::wrap_Object(Arc(((t_Arc *) arg)->object.this$));
          }
          static PyObject *t_Arc_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Arc::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Arc_init_(t_Arc *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            Arc object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = Arc(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Arc_checkPoint(t_Arc *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.checkPoint(a0));
              return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "checkPoint", arg);
            return NULL;
          }

          static PyObject *t_Arc_getBarycenter(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBarycenter());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getInf(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getOffset(t_Arc *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::spherical::oned::S1Point a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::spherical::oned::S1Point::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Arc_getSize(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSize());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getSup(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSup());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_getTolerance(t_Arc *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Arc_get__barycenter(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBarycenter());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__inf(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__size(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSize());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__sup(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSup());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Arc_get__tolerance(t_Arc *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/GzipFilter.h"
#include "org/orekit/data/DataFilter.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *GzipFilter::class$ = NULL;
      jmethodID *GzipFilter::mids$ = NULL;
      bool GzipFilter::live$ = false;

      jclass GzipFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/GzipFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_filter_446488bfc679a21b] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GzipFilter::GzipFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ::org::orekit::data::DataSource GzipFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_446488bfc679a21b], a0.this$));
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
      static PyObject *t_GzipFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GzipFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GzipFilter_init_(t_GzipFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GzipFilter_filter(t_GzipFilter *self, PyObject *arg);

      static PyMethodDef t_GzipFilter__methods_[] = {
        DECLARE_METHOD(t_GzipFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GzipFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GzipFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GzipFilter)[] = {
        { Py_tp_methods, t_GzipFilter__methods_ },
        { Py_tp_init, (void *) t_GzipFilter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GzipFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GzipFilter, t_GzipFilter, GzipFilter);

      void t_GzipFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(GzipFilter), &PY_TYPE_DEF(GzipFilter), module, "GzipFilter", 0);
      }

      void t_GzipFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GzipFilter), "class_", make_descriptor(GzipFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GzipFilter), "wrapfn_", make_descriptor(t_GzipFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GzipFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GzipFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GzipFilter::initializeClass, 1)))
          return NULL;
        return t_GzipFilter::wrap_Object(GzipFilter(((t_GzipFilter *) arg)->object.this$));
      }
      static PyObject *t_GzipFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GzipFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GzipFilter_init_(t_GzipFilter *self, PyObject *args, PyObject *kwds)
      {
        GzipFilter object((jobject) NULL);

        INT_CALL(object = GzipFilter());
        self->object = object;

        return 0;
      }

      static PyObject *t_GzipFilter_filter(t_GzipFilter *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.filter(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/ODEFixedStepHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *ODEFixedStepHandler::class$ = NULL;
        jmethodID *ODEFixedStepHandler::mids$ = NULL;
        bool ODEFixedStepHandler::live$ = false;

        jclass ODEFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/ODEFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_handleStep_83d861eaf544ffd0] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/ODEStateAndDerivative;Z)V");
            mids$[mid_init_85808f3d6374b436] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ODEFixedStepHandler::handleStep(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jboolean a1) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_83d861eaf544ffd0], a0.this$, a1);
        }

        void ODEFixedStepHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_85808f3d6374b436], a0.this$, a1);
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
      namespace sampling {
        static PyObject *t_ODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEFixedStepHandler_handleStep(t_ODEFixedStepHandler *self, PyObject *args);
        static PyObject *t_ODEFixedStepHandler_init(t_ODEFixedStepHandler *self, PyObject *args);

        static PyMethodDef t_ODEFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_ODEFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEFixedStepHandler, handleStep, METH_VARARGS),
          DECLARE_METHOD(t_ODEFixedStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEFixedStepHandler)[] = {
          { Py_tp_methods, t_ODEFixedStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEFixedStepHandler, t_ODEFixedStepHandler, ODEFixedStepHandler);

        void t_ODEFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEFixedStepHandler), &PY_TYPE_DEF(ODEFixedStepHandler), module, "ODEFixedStepHandler", 0);
        }

        void t_ODEFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEFixedStepHandler), "class_", make_descriptor(ODEFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEFixedStepHandler), "wrapfn_", make_descriptor(t_ODEFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEFixedStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_ODEFixedStepHandler::wrap_Object(ODEFixedStepHandler(((t_ODEFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEFixedStepHandler_handleStep(t_ODEFixedStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jboolean a1;

          if (!parseArgs(args, "kZ", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.handleStep(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", args);
          return NULL;
        }

        static PyObject *t_ODEFixedStepHandler_init(t_ODEFixedStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/TruncatingFilter.h"
#include "org/orekit/data/DataFilter.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "java/io/IOException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *TruncatingFilter::class$ = NULL;
      jmethodID *TruncatingFilter::mids$ = NULL;
      bool TruncatingFilter::live$ = false;

      jclass TruncatingFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/TruncatingFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_filter_446488bfc679a21b] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TruncatingFilter::TruncatingFilter(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      ::org::orekit::data::DataSource TruncatingFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_446488bfc679a21b], a0.this$));
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
      static PyObject *t_TruncatingFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TruncatingFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TruncatingFilter_init_(t_TruncatingFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TruncatingFilter_filter(t_TruncatingFilter *self, PyObject *arg);

      static PyMethodDef t_TruncatingFilter__methods_[] = {
        DECLARE_METHOD(t_TruncatingFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TruncatingFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TruncatingFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TruncatingFilter)[] = {
        { Py_tp_methods, t_TruncatingFilter__methods_ },
        { Py_tp_init, (void *) t_TruncatingFilter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TruncatingFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TruncatingFilter, t_TruncatingFilter, TruncatingFilter);

      void t_TruncatingFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(TruncatingFilter), &PY_TYPE_DEF(TruncatingFilter), module, "TruncatingFilter", 0);
      }

      void t_TruncatingFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TruncatingFilter), "class_", make_descriptor(TruncatingFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TruncatingFilter), "wrapfn_", make_descriptor(t_TruncatingFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TruncatingFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TruncatingFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TruncatingFilter::initializeClass, 1)))
          return NULL;
        return t_TruncatingFilter::wrap_Object(TruncatingFilter(((t_TruncatingFilter *) arg)->object.this$));
      }
      static PyObject *t_TruncatingFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TruncatingFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TruncatingFilter_init_(t_TruncatingFilter *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        TruncatingFilter object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = TruncatingFilter(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TruncatingFilter_filter(t_TruncatingFilter *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.filter(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *Array2DRowFieldMatrix::class$ = NULL;
      jmethodID *Array2DRowFieldMatrix::mids$ = NULL;
      bool Array2DRowFieldMatrix::live$ = false;

      jclass Array2DRowFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/Array2DRowFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_191170fc417b1ede] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_249f450b19288783] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_205c34b8e33cf33f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_1cb2de56c89f4b52] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_9928bbabce7e9723] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_900621679ddc5f94] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_34d5c8b5eecb38fe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_11914f5932256658] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_add_ca86c76185a43b52] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_addToEntry_8c5ca78361f003c1] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_cc77900a647586cf] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createMatrix_8e5837651d169cc8] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnDimension_f2f64475e4580546] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getData_6ccec7d54d4aa14e] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getDataRef_6ccec7d54d4aa14e] = env->getMethodID(cls, "getDataRef", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_e4e0a9e5376069de] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getRow_d29eb5ffff4844ca] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_f2f64475e4580546] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getSubMatrix_05948e8f73a5c897] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiply_ca86c76185a43b52] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_multiplyEntry_8c5ca78361f003c1] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_b98fa06e86e04f59] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyTransposed_311c21c57522a65c] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_operate_f9019cec9923ca8a] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_f9019cec9923ca8a] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_setEntry_8c5ca78361f003c1] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_72c49d7bd5abccf7] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubMatrix_ca8750336b496dca] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_ca86c76185a43b52] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_transposeMultiply_b98fa06e86e04f59] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transposeMultiply_311c21c57522a65c] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_walkInColumnOrder_09db37bb51f54673] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_3a0cd0f81f3173f1] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_1bdd1f13c5d68880] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_b8a3d440c9844dc5] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_09db37bb51f54673] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_3a0cd0f81f3173f1] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_1bdd1f13c5d68880] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_b8a3d440c9844dc5] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const JArray< ::org::hipparchus::FieldElement > & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_191170fc417b1ede, a0.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_249f450b19288783, a0.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_205c34b8e33cf33f, a0.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_1cb2de56c89f4b52, a0.this$, a1.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, const JArray< JArray< ::org::hipparchus::FieldElement > > & a1) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_9928bbabce7e9723, a0.this$, a1.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jboolean a1) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_900621679ddc5f94, a0.this$, a1)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, const JArray< JArray< ::org::hipparchus::FieldElement > > & a1, jboolean a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_34d5c8b5eecb38fe, a0.this$, a1.this$, a2)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_11914f5932256658, a0.this$, a1, a2)) {}

      Array2DRowFieldMatrix Array2DRowFieldMatrix::add(const Array2DRowFieldMatrix & a0) const
      {
        return Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_add_ca86c76185a43b52], a0.this$));
      }

      void Array2DRowFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_8c5ca78361f003c1], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_cc77900a647586cf]));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_8e5837651d169cc8], a0, a1));
      }

      jint Array2DRowFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_f2f64475e4580546]);
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > Array2DRowFieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_6ccec7d54d4aa14e]));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > Array2DRowFieldMatrix::getDataRef() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getDataRef_6ccec7d54d4aa14e]));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_e4e0a9e5376069de], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > Array2DRowFieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_d29eb5ffff4844ca], a0));
      }

      jint Array2DRowFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_f2f64475e4580546]);
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_05948e8f73a5c897], a0, a1, a2, a3));
      }

      Array2DRowFieldMatrix Array2DRowFieldMatrix::multiply(const Array2DRowFieldMatrix & a0) const
      {
        return Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_ca86c76185a43b52], a0.this$));
      }

      void Array2DRowFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_8c5ca78361f003c1], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::multiplyTransposed(const Array2DRowFieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_b98fa06e86e04f59], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_311c21c57522a65c], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > Array2DRowFieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_f9019cec9923ca8a], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > Array2DRowFieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_f9019cec9923ca8a], a0.this$));
      }

      void Array2DRowFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_8c5ca78361f003c1], a0, a1, a2.this$);
      }

      void Array2DRowFieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_72c49d7bd5abccf7], a0, a1.this$);
      }

      void Array2DRowFieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_ca8750336b496dca], a0.this$, a1, a2);
      }

      Array2DRowFieldMatrix Array2DRowFieldMatrix::subtract(const Array2DRowFieldMatrix & a0) const
      {
        return Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_ca86c76185a43b52], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::transposeMultiply(const Array2DRowFieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_b98fa06e86e04f59], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::transposeMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_311c21c57522a65c], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_09db37bb51f54673], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_3a0cd0f81f3173f1], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_1bdd1f13c5d68880], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_b8a3d440c9844dc5], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_09db37bb51f54673], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_3a0cd0f81f3173f1], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_1bdd1f13c5d68880], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_b8a3d440c9844dc5], a0.this$, a1, a2, a3, a4));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_Array2DRowFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Array2DRowFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Array2DRowFieldMatrix_of_(t_Array2DRowFieldMatrix *self, PyObject *args);
      static int t_Array2DRowFieldMatrix_init_(t_Array2DRowFieldMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Array2DRowFieldMatrix_add(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_addToEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_copy(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_createMatrix(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getColumnDimension(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getData(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getDataRef(t_Array2DRowFieldMatrix *self);
      static PyObject *t_Array2DRowFieldMatrix_getEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getRow(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getRowDimension(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_multiply(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_multiplyEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_multiplyTransposed(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_operate(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_preMultiply(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_setEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_setRow(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_setSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_subtract(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_transposeMultiply(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_walkInColumnOrder(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_walkInRowOrder(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_get__columnDimension(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__data(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__dataRef(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__rowDimension(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__parameters_(t_Array2DRowFieldMatrix *self, void *data);
      static PyGetSetDef t_Array2DRowFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, data),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, dataRef),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Array2DRowFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_Array2DRowFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Array2DRowFieldMatrix)[] = {
        { Py_tp_methods, t_Array2DRowFieldMatrix__methods_ },
        { Py_tp_init, (void *) t_Array2DRowFieldMatrix_init_ },
        { Py_tp_getset, t_Array2DRowFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Array2DRowFieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractFieldMatrix),
        NULL
      };

      DEFINE_TYPE(Array2DRowFieldMatrix, t_Array2DRowFieldMatrix, Array2DRowFieldMatrix);
      PyObject *t_Array2DRowFieldMatrix::wrap_Object(const Array2DRowFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Array2DRowFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Array2DRowFieldMatrix *self = (t_Array2DRowFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Array2DRowFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Array2DRowFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Array2DRowFieldMatrix *self = (t_Array2DRowFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Array2DRowFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(Array2DRowFieldMatrix), &PY_TYPE_DEF(Array2DRowFieldMatrix), module, "Array2DRowFieldMatrix", 0);
      }

      void t_Array2DRowFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowFieldMatrix), "class_", make_descriptor(Array2DRowFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowFieldMatrix), "wrapfn_", make_descriptor(t_Array2DRowFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowFieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Array2DRowFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Array2DRowFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_Array2DRowFieldMatrix::wrap_Object(Array2DRowFieldMatrix(((t_Array2DRowFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_Array2DRowFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Array2DRowFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Array2DRowFieldMatrix_of_(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_Array2DRowFieldMatrix_init_(t_Array2DRowFieldMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< JArray< ::org::hipparchus::FieldElement > > a1((jobject) NULL);
            PyTypeObject **p1;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K[[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[KZ", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< JArray< ::org::hipparchus::FieldElement > > a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K[[KZ", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1, a2));
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

      static PyObject *t_Array2DRowFieldMatrix_add(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        Array2DRowFieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        Array2DRowFieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_addToEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_copy(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_createMatrix(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getColumnDimension(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getData(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getDataRef(t_Array2DRowFieldMatrix *self)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowFieldMatrix_getEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getRow(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getRowDimension(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_multiply(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        Array2DRowFieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        Array2DRowFieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_multiplyEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_multiplyTransposed(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_operate(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_preMultiply(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_setEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_setRow(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_setSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[KII", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_subtract(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        Array2DRowFieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        Array2DRowFieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_transposeMultiply(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_walkInColumnOrder(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "walkInColumnOrder", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_walkInRowOrder(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrixChangingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixChangingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixChangingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrixPreservingVisitor a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            ::org::hipparchus::FieldElement result((jobject) NULL);

            if (!parseArgs(args, "KIIII", ::org::hipparchus::linear::FieldMatrixPreservingVisitor::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrixPreservingVisitor::parameters_, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }
      static PyObject *t_Array2DRowFieldMatrix_get__parameters_(t_Array2DRowFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Array2DRowFieldMatrix_get__columnDimension(t_Array2DRowFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Array2DRowFieldMatrix_get__data(t_Array2DRowFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowFieldMatrix_get__dataRef(t_Array2DRowFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowFieldMatrix_get__rowDimension(t_Array2DRowFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/IonosphereKlobucharMessage.h"
#include "org/orekit/files/rinex/navigation/RegionCode.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereKlobucharMessage::class$ = NULL;
          jmethodID *IonosphereKlobucharMessage::mids$ = NULL;
          bool IonosphereKlobucharMessage::live$ = false;
          JArray< ::org::orekit::utils::units::Unit > *IonosphereKlobucharMessage::S_PER_SC_N = NULL;

          jclass IonosphereKlobucharMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereKlobucharMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_70c1a5d645cab07e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getAlpha_7cdc325af0834901] = env->getMethodID(cls, "getAlpha", "()[D");
              mids$[mid_getBeta_7cdc325af0834901] = env->getMethodID(cls, "getBeta", "()[D");
              mids$[mid_getRegionCode_fb85e57fbf82dec3] = env->getMethodID(cls, "getRegionCode", "()Lorg/orekit/files/rinex/navigation/RegionCode;");
              mids$[mid_setAlphaI_987a5fb872043b12] = env->getMethodID(cls, "setAlphaI", "(ID)V");
              mids$[mid_setBetaI_987a5fb872043b12] = env->getMethodID(cls, "setBetaI", "(ID)V");
              mids$[mid_setRegionCode_b76186fb1a54b26f] = env->getMethodID(cls, "setRegionCode", "(Lorg/orekit/files/rinex/navigation/RegionCode;)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              S_PER_SC_N = new JArray< ::org::orekit::utils::units::Unit >(env->getStaticObjectField(cls, "S_PER_SC_N", "[Lorg/orekit/utils/units/Unit;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereKlobucharMessage::IonosphereKlobucharMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::IonosphereBaseMessage(env->newObject(initializeClass, &mids$, mid_init$_70c1a5d645cab07e, a0.this$, a1, a2.this$)) {}

          JArray< jdouble > IonosphereKlobucharMessage::getAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAlpha_7cdc325af0834901]));
          }

          JArray< jdouble > IonosphereKlobucharMessage::getBeta() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBeta_7cdc325af0834901]));
          }

          ::org::orekit::files::rinex::navigation::RegionCode IonosphereKlobucharMessage::getRegionCode() const
          {
            return ::org::orekit::files::rinex::navigation::RegionCode(env->callObjectMethod(this$, mids$[mid_getRegionCode_fb85e57fbf82dec3]));
          }

          void IonosphereKlobucharMessage::setAlphaI(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setAlphaI_987a5fb872043b12], a0, a1);
          }

          void IonosphereKlobucharMessage::setBetaI(jint a0, jdouble a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setBetaI_987a5fb872043b12], a0, a1);
          }

          void IonosphereKlobucharMessage::setRegionCode(const ::org::orekit::files::rinex::navigation::RegionCode & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setRegionCode_b76186fb1a54b26f], a0.this$);
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
      namespace rinex {
        namespace navigation {
          static PyObject *t_IonosphereKlobucharMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereKlobucharMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereKlobucharMessage_init_(t_IonosphereKlobucharMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereKlobucharMessage_getAlpha(t_IonosphereKlobucharMessage *self);
          static PyObject *t_IonosphereKlobucharMessage_getBeta(t_IonosphereKlobucharMessage *self);
          static PyObject *t_IonosphereKlobucharMessage_getRegionCode(t_IonosphereKlobucharMessage *self);
          static PyObject *t_IonosphereKlobucharMessage_setAlphaI(t_IonosphereKlobucharMessage *self, PyObject *args);
          static PyObject *t_IonosphereKlobucharMessage_setBetaI(t_IonosphereKlobucharMessage *self, PyObject *args);
          static PyObject *t_IonosphereKlobucharMessage_setRegionCode(t_IonosphereKlobucharMessage *self, PyObject *arg);
          static PyObject *t_IonosphereKlobucharMessage_get__alpha(t_IonosphereKlobucharMessage *self, void *data);
          static PyObject *t_IonosphereKlobucharMessage_get__beta(t_IonosphereKlobucharMessage *self, void *data);
          static PyObject *t_IonosphereKlobucharMessage_get__regionCode(t_IonosphereKlobucharMessage *self, void *data);
          static int t_IonosphereKlobucharMessage_set__regionCode(t_IonosphereKlobucharMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_IonosphereKlobucharMessage__fields_[] = {
            DECLARE_GET_FIELD(t_IonosphereKlobucharMessage, alpha),
            DECLARE_GET_FIELD(t_IonosphereKlobucharMessage, beta),
            DECLARE_GETSET_FIELD(t_IonosphereKlobucharMessage, regionCode),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereKlobucharMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereKlobucharMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, getBeta, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, getRegionCode, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, setAlphaI, METH_VARARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, setBetaI, METH_VARARGS),
            DECLARE_METHOD(t_IonosphereKlobucharMessage, setRegionCode, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereKlobucharMessage)[] = {
            { Py_tp_methods, t_IonosphereKlobucharMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereKlobucharMessage_init_ },
            { Py_tp_getset, t_IonosphereKlobucharMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereKlobucharMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::IonosphereBaseMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereKlobucharMessage, t_IonosphereKlobucharMessage, IonosphereKlobucharMessage);

          void t_IonosphereKlobucharMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereKlobucharMessage), &PY_TYPE_DEF(IonosphereKlobucharMessage), module, "IonosphereKlobucharMessage", 0);
          }

          void t_IonosphereKlobucharMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "class_", make_descriptor(IonosphereKlobucharMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "wrapfn_", make_descriptor(t_IonosphereKlobucharMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "boxfn_", make_descriptor(boxObject));
            env->getClass(IonosphereKlobucharMessage::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereKlobucharMessage), "S_PER_SC_N", make_descriptor(JArray<jobject>(IonosphereKlobucharMessage::S_PER_SC_N->this$).wrap(::org::orekit::utils::units::t_Unit::wrap_jobject)));
          }

          static PyObject *t_IonosphereKlobucharMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereKlobucharMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereKlobucharMessage::wrap_Object(IonosphereKlobucharMessage(((t_IonosphereKlobucharMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereKlobucharMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereKlobucharMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereKlobucharMessage_init_(t_IonosphereKlobucharMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereKlobucharMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereKlobucharMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereKlobucharMessage_getAlpha(t_IonosphereKlobucharMessage *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return result.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_getBeta(t_IonosphereKlobucharMessage *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getBeta());
            return result.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_getRegionCode(t_IonosphereKlobucharMessage *self)
          {
            ::org::orekit::files::rinex::navigation::RegionCode result((jobject) NULL);
            OBJ_CALL(result = self->object.getRegionCode());
            return ::org::orekit::files::rinex::navigation::t_RegionCode::wrap_Object(result);
          }

          static PyObject *t_IonosphereKlobucharMessage_setAlphaI(t_IonosphereKlobucharMessage *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setAlphaI(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAlphaI", args);
            return NULL;
          }

          static PyObject *t_IonosphereKlobucharMessage_setBetaI(t_IonosphereKlobucharMessage *self, PyObject *args)
          {
            jint a0;
            jdouble a1;

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              OBJ_CALL(self->object.setBetaI(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setBetaI", args);
            return NULL;
          }

          static PyObject *t_IonosphereKlobucharMessage_setRegionCode(t_IonosphereKlobucharMessage *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::RegionCode a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::RegionCode::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_RegionCode::parameters_))
            {
              OBJ_CALL(self->object.setRegionCode(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setRegionCode", arg);
            return NULL;
          }

          static PyObject *t_IonosphereKlobucharMessage_get__alpha(t_IonosphereKlobucharMessage *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return value.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_get__beta(t_IonosphereKlobucharMessage *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeta());
            return value.wrap();
          }

          static PyObject *t_IonosphereKlobucharMessage_get__regionCode(t_IonosphereKlobucharMessage *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::RegionCode value((jobject) NULL);
            OBJ_CALL(value = self->object.getRegionCode());
            return ::org::orekit::files::rinex::navigation::t_RegionCode::wrap_Object(value);
          }
          static int t_IonosphereKlobucharMessage_set__regionCode(t_IonosphereKlobucharMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::RegionCode value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::RegionCode::initializeClass, &value))
              {
                INT_CALL(self->object.setRegionCode(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "regionCode", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseTroposphericDelayModifier.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseTroposphericDelayModifier::class$ = NULL;
          jmethodID *PhaseTroposphericDelayModifier::mids$ = NULL;
          bool PhaseTroposphericDelayModifier::live$ = false;

          jclass PhaseTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8171254277c9834a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseTroposphericDelayModifier::PhaseTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8171254277c9834a, a0.this$)) {}

          ::java::util::List PhaseTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void PhaseTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void PhaseTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_PhaseTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseTroposphericDelayModifier_init_(t_PhaseTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseTroposphericDelayModifier_getParametersDrivers(t_PhaseTroposphericDelayModifier *self);
          static PyObject *t_PhaseTroposphericDelayModifier_modify(t_PhaseTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseTroposphericDelayModifier_modifyWithoutDerivatives(t_PhaseTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseTroposphericDelayModifier_get__parametersDrivers(t_PhaseTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_PhaseTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_PhaseTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseTroposphericDelayModifier_init_ },
            { Py_tp_getset, t_PhaseTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseTroposphericDelayModifier, t_PhaseTroposphericDelayModifier, PhaseTroposphericDelayModifier);

          void t_PhaseTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseTroposphericDelayModifier), &PY_TYPE_DEF(PhaseTroposphericDelayModifier), module, "PhaseTroposphericDelayModifier", 0);
          }

          void t_PhaseTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseTroposphericDelayModifier), "class_", make_descriptor(PhaseTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseTroposphericDelayModifier), "wrapfn_", make_descriptor(t_PhaseTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseTroposphericDelayModifier::wrap_Object(PhaseTroposphericDelayModifier(((t_PhaseTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseTroposphericDelayModifier_init_(t_PhaseTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            PhaseTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = PhaseTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseTroposphericDelayModifier_getParametersDrivers(t_PhaseTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseTroposphericDelayModifier_modify(t_PhaseTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_PhaseTroposphericDelayModifier_modifyWithoutDerivatives(t_PhaseTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseTroposphericDelayModifier_get__parametersDrivers(t_PhaseTroposphericDelayModifier *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/RtcmMessage.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {

            ::java::lang::Class *RtcmMessage::class$ = NULL;
            jmethodID *RtcmMessage::mids$ = NULL;
            bool RtcmMessage::live$ = false;

            jclass RtcmMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/RtcmMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a09bd6cb4a7a96f9] = env->getMethodID(cls, "<init>", "(ILjava/util/List;)V");
                mids$[mid_getData_a6156df500549a58] = env->getMethodID(cls, "getData", "()Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RtcmMessage::RtcmMessage(jint a0, const ::java::util::List & a1) : ::org::orekit::gnss::metric::messages::ParsedMessage(env->newObject(initializeClass, &mids$, mid_init$_a09bd6cb4a7a96f9, a0, a1.this$)) {}

            ::java::util::List RtcmMessage::getData() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_a6156df500549a58]));
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
            static PyObject *t_RtcmMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RtcmMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RtcmMessage_of_(t_RtcmMessage *self, PyObject *args);
            static int t_RtcmMessage_init_(t_RtcmMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RtcmMessage_getData(t_RtcmMessage *self);
            static PyObject *t_RtcmMessage_get__data(t_RtcmMessage *self, void *data);
            static PyObject *t_RtcmMessage_get__parameters_(t_RtcmMessage *self, void *data);
            static PyGetSetDef t_RtcmMessage__fields_[] = {
              DECLARE_GET_FIELD(t_RtcmMessage, data),
              DECLARE_GET_FIELD(t_RtcmMessage, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_RtcmMessage__methods_[] = {
              DECLARE_METHOD(t_RtcmMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RtcmMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RtcmMessage, of_, METH_VARARGS),
              DECLARE_METHOD(t_RtcmMessage, getData, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RtcmMessage)[] = {
              { Py_tp_methods, t_RtcmMessage__methods_ },
              { Py_tp_init, (void *) t_RtcmMessage_init_ },
              { Py_tp_getset, t_RtcmMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RtcmMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ParsedMessage),
              NULL
            };

            DEFINE_TYPE(RtcmMessage, t_RtcmMessage, RtcmMessage);
            PyObject *t_RtcmMessage::wrap_Object(const RtcmMessage& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RtcmMessage::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RtcmMessage *self = (t_RtcmMessage *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_RtcmMessage::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_RtcmMessage::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_RtcmMessage *self = (t_RtcmMessage *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_RtcmMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(RtcmMessage), &PY_TYPE_DEF(RtcmMessage), module, "RtcmMessage", 0);
            }

            void t_RtcmMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessage), "class_", make_descriptor(RtcmMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessage), "wrapfn_", make_descriptor(t_RtcmMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RtcmMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RtcmMessage::initializeClass, 1)))
                return NULL;
              return t_RtcmMessage::wrap_Object(RtcmMessage(((t_RtcmMessage *) arg)->object.this$));
            }
            static PyObject *t_RtcmMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RtcmMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_RtcmMessage_of_(t_RtcmMessage *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_RtcmMessage_init_(t_RtcmMessage *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              RtcmMessage object((jobject) NULL);

              if (!parseArgs(args, "IK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = RtcmMessage(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_RtcmMessage_getData(t_RtcmMessage *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getData());
              return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
            }
            static PyObject *t_RtcmMessage_get__parameters_(t_RtcmMessage *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_RtcmMessage_get__data(t_RtcmMessage *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getData());
              return ::java::util::t_List::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/JacobianPropagatorConverter.h"
#include "org/orekit/propagation/conversion/NumericalPropagatorBuilder.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *JacobianPropagatorConverter::class$ = NULL;
        jmethodID *JacobianPropagatorConverter::mids$ = NULL;
        bool JacobianPropagatorConverter::live$ = false;

        jclass JacobianPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/JacobianPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_66745156d771e238] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/conversion/NumericalPropagatorBuilder;DI)V");
            mids$[mid_getObjectiveFunction_aaef55ff59f9c00e] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");
            mids$[mid_getModel_b196da25fd980476] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JacobianPropagatorConverter::JacobianPropagatorConverter(const ::org::orekit::propagation::conversion::NumericalPropagatorBuilder & a0, jdouble a1, jint a2) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(env->newObject(initializeClass, &mids$, mid_init$_66745156d771e238, a0.this$, a1, a2)) {}
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
        static PyObject *t_JacobianPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_JacobianPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_JacobianPropagatorConverter_init_(t_JacobianPropagatorConverter *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_JacobianPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_JacobianPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_JacobianPropagatorConverter, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(JacobianPropagatorConverter)[] = {
          { Py_tp_methods, t_JacobianPropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_JacobianPropagatorConverter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(JacobianPropagatorConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorConverter),
          NULL
        };

        DEFINE_TYPE(JacobianPropagatorConverter, t_JacobianPropagatorConverter, JacobianPropagatorConverter);

        void t_JacobianPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(JacobianPropagatorConverter), &PY_TYPE_DEF(JacobianPropagatorConverter), module, "JacobianPropagatorConverter", 0);
        }

        void t_JacobianPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianPropagatorConverter), "class_", make_descriptor(JacobianPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianPropagatorConverter), "wrapfn_", make_descriptor(t_JacobianPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(JacobianPropagatorConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_JacobianPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, JacobianPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_JacobianPropagatorConverter::wrap_Object(JacobianPropagatorConverter(((t_JacobianPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_JacobianPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, JacobianPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_JacobianPropagatorConverter_init_(t_JacobianPropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::conversion::NumericalPropagatorBuilder a0((jobject) NULL);
          jdouble a1;
          jint a2;
          JacobianPropagatorConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::conversion::NumericalPropagatorBuilder::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = JacobianPropagatorConverter(a0, a1, a2));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomGenerator::class$ = NULL;
      jmethodID *RandomGenerator::mids$ = NULL;
      bool RandomGenerator::live$ = false;

      jclass RandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextBoolean_e470b6d9e0d979db] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_9c4b35f0a6dc87f3] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_125b1e9f043b29f8] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_456d9a2f64d6b28d] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_966c782d3223854d] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_456d9a2f64d6b28d] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_f2f64475e4580546] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_38565d58479aa24a] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_a27fc9afd27e559d] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_955f7541fca701ab] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_3b603738d1eb3233] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_0a2a1ac2721c0336] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_fefb08975c10f0a1] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean RandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_e470b6d9e0d979db]);
      }

      void RandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_9c4b35f0a6dc87f3], a0.this$);
      }

      void RandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_125b1e9f043b29f8], a0.this$, a1, a2);
      }

      jdouble RandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_456d9a2f64d6b28d]);
      }

      jfloat RandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_966c782d3223854d]);
      }

      jdouble RandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_456d9a2f64d6b28d]);
      }

      jint RandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_f2f64475e4580546]);
      }

      jint RandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_38565d58479aa24a], a0);
      }

      jlong RandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_a27fc9afd27e559d]);
      }

      jlong RandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_955f7541fca701ab], a0);
      }

      void RandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3b603738d1eb3233], a0.this$);
      }

      void RandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_0a2a1ac2721c0336], a0);
      }

      void RandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_fefb08975c10f0a1], a0);
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
      static PyObject *t_RandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomGenerator_nextBoolean(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextBytes(t_RandomGenerator *self, PyObject *args);
      static PyObject *t_RandomGenerator_nextDouble(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextFloat(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextGaussian(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextInt(t_RandomGenerator *self, PyObject *args);
      static PyObject *t_RandomGenerator_nextLong(t_RandomGenerator *self, PyObject *args);
      static PyObject *t_RandomGenerator_setSeed(t_RandomGenerator *self, PyObject *args);
      static int t_RandomGenerator_set__seed(t_RandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_RandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_RandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RandomGenerator__methods_[] = {
        DECLARE_METHOD(t_RandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomGenerator, nextBoolean, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_RandomGenerator, nextDouble, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextFloat, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_RandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_RandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomGenerator)[] = {
        { Py_tp_methods, t_RandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RandomGenerator, t_RandomGenerator, RandomGenerator);

      void t_RandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomGenerator), &PY_TYPE_DEF(RandomGenerator), module, "RandomGenerator", 0);
      }

      void t_RandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomGenerator), "class_", make_descriptor(RandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomGenerator), "wrapfn_", make_descriptor(t_RandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomGenerator::initializeClass, 1)))
          return NULL;
        return t_RandomGenerator::wrap_Object(RandomGenerator(((t_RandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_RandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RandomGenerator_nextBoolean(t_RandomGenerator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.nextBoolean());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RandomGenerator_nextBytes(t_RandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextBytes", args);
        return NULL;
      }

      static PyObject *t_RandomGenerator_nextDouble(t_RandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RandomGenerator_nextFloat(t_RandomGenerator *self)
      {
        jfloat result;
        OBJ_CALL(result = self->object.nextFloat());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RandomGenerator_nextGaussian(t_RandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RandomGenerator_nextInt(t_RandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextInt", args);
        return NULL;
      }

      static PyObject *t_RandomGenerator_nextLong(t_RandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.nextLong());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.nextLong(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextLong", args);
        return NULL;
      }

      static PyObject *t_RandomGenerator_setSeed(t_RandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setSeed", args);
        return NULL;
      }

      static int t_RandomGenerator_set__seed(t_RandomGenerator *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemData.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemData::class$ = NULL;
              jmethodID *AemData::mids$ = NULL;
              bool AemData::live$ = false;

              jclass AemData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addData_08b6a6e4f74e1c7d] = env->getMethodID(cls, "addData", "(Lorg/orekit/utils/TimeStampedAngularCoordinates;)Z");
                  mids$[mid_getAngularCoordinates_a6156df500549a58] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemData::AemData() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jboolean AemData::addData(const ::org::orekit::utils::TimeStampedAngularCoordinates & a0) const
              {
                return env->callBooleanMethod(this$, mids$[mid_addData_08b6a6e4f74e1c7d], a0.this$);
              }

              ::java::util::List AemData::getAngularCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_a6156df500549a58]));
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
            namespace aem {
              static PyObject *t_AemData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AemData_init_(t_AemData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemData_addData(t_AemData *self, PyObject *arg);
              static PyObject *t_AemData_getAngularCoordinates(t_AemData *self);
              static PyObject *t_AemData_get__angularCoordinates(t_AemData *self, void *data);
              static PyGetSetDef t_AemData__fields_[] = {
                DECLARE_GET_FIELD(t_AemData, angularCoordinates),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemData__methods_[] = {
                DECLARE_METHOD(t_AemData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemData, addData, METH_O),
                DECLARE_METHOD(t_AemData, getAngularCoordinates, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemData)[] = {
                { Py_tp_methods, t_AemData__methods_ },
                { Py_tp_init, (void *) t_AemData_init_ },
                { Py_tp_getset, t_AemData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemData)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AemData, t_AemData, AemData);

              void t_AemData::install(PyObject *module)
              {
                installType(&PY_TYPE(AemData), &PY_TYPE_DEF(AemData), module, "AemData", 0);
              }

              void t_AemData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemData), "class_", make_descriptor(AemData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemData), "wrapfn_", make_descriptor(t_AemData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemData::initializeClass, 1)))
                  return NULL;
                return t_AemData::wrap_Object(AemData(((t_AemData *) arg)->object.this$));
              }
              static PyObject *t_AemData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AemData_init_(t_AemData *self, PyObject *args, PyObject *kwds)
              {
                AemData object((jobject) NULL);

                INT_CALL(object = AemData());
                self->object = object;

                return 0;
              }

              static PyObject *t_AemData_addData(t_AemData *self, PyObject *arg)
              {
                ::org::orekit::utils::TimeStampedAngularCoordinates a0((jobject) NULL);
                jboolean result;

                if (!parseArg(arg, "k", ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.addData(a0));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "addData", arg);
                return NULL;
              }

              static PyObject *t_AemData_getAngularCoordinates(t_AemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
              }

              static PyObject *t_AemData_get__angularCoordinates(t_AemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(value);
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
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative2.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/TimeShiftable.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/Blendable.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDerivative1.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PVCoordinates::class$ = NULL;
      jmethodID *PVCoordinates::mids$ = NULL;
      bool PVCoordinates::live$ = false;
      PVCoordinates *PVCoordinates::ZERO = NULL;

      jclass PVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_9c8737fc819646bf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_a94622407b723689] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_bedd188d9f399c34] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_f733b5fb34d30a40] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_4fabb277d4d40971] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_5737cfd628135b91] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_a5593e21de3a7d7d] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_e97331f48bbe1e24] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_e2de5798ac31ec49] = env->getMethodID(cls, "<init>", "(DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_blendArithmeticallyWith_58bd750f3969f288] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/orekit/utils/PVCoordinates;D)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_crossProduct_6c0643aee4cb3ced] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_estimateVelocity_b93b7baa8492af38] = env->getStaticMethodID(cls, "estimateVelocity", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getAcceleration_17a952530a808943] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getAngularVelocity_17a952530a808943] = env->getMethodID(cls, "getAngularVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getMomentum_17a952530a808943] = env->getMethodID(cls, "getMomentum", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getPosition_17a952530a808943] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_getVelocity_17a952530a808943] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_negate_6761e3f334368d44] = env->getMethodID(cls, "negate", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_normalize_6761e3f334368d44] = env->getMethodID(cls, "normalize", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_positionShiftedBy_5f993a721a1d8c59] = env->getMethodID(cls, "positionShiftedBy", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_shiftedBy_ab4581311accba8a] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_toDerivativeStructurePV_42ec5cc0a8e3a780] = env->getMethodID(cls, "toDerivativeStructurePV", "(I)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toDerivativeStructureVector_cc53a43c791fc9de] = env->getMethodID(cls, "toDerivativeStructureVector", "(I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toUnivariateDerivative1PV_239ccd4fbdc5d04d] = env->getMethodID(cls, "toUnivariateDerivative1PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative1Vector_5791f80683b5227e] = env->getMethodID(cls, "toUnivariateDerivative1Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toUnivariateDerivative2PV_239ccd4fbdc5d04d] = env->getMethodID(cls, "toUnivariateDerivative2PV", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_toUnivariateDerivative2Vector_5791f80683b5227e] = env->getMethodID(cls, "toUnivariateDerivative2Vector", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ZERO = new PVCoordinates(env->getStaticObjectField(cls, "ZERO", "Lorg/orekit/utils/PVCoordinates;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PVCoordinates::PVCoordinates() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9c8737fc819646bf, a0.this$)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a94622407b723689, a0.this$)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bedd188d9f399c34, a0.this$, a1.this$)) {}

      PVCoordinates::PVCoordinates(const PVCoordinates & a0, const PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f733b5fb34d30a40, a0.this$, a1.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4fabb277d4d40971, a0, a1.this$)) {}

      PVCoordinates::PVCoordinates(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5737cfd628135b91, a0.this$, a1.this$, a2.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1, jdouble a2, const PVCoordinates & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a5593e21de3a7d7d, a0, a1.this$, a2, a3.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1, jdouble a2, const PVCoordinates & a3, jdouble a4, const PVCoordinates & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e97331f48bbe1e24, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

      PVCoordinates::PVCoordinates(jdouble a0, const PVCoordinates & a1, jdouble a2, const PVCoordinates & a3, jdouble a4, const PVCoordinates & a5, jdouble a6, const PVCoordinates & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e2de5798ac31ec49, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

      PVCoordinates PVCoordinates::blendArithmeticallyWith(const PVCoordinates & a0, jdouble a1) const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_58bd750f3969f288], a0.this$, a1));
      }

      PVCoordinates PVCoordinates::crossProduct(const PVCoordinates & a0, const PVCoordinates & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return PVCoordinates(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_6c0643aee4cb3ced], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::estimateVelocity(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_estimateVelocity_b93b7baa8492af38], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getAngularVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAngularVelocity_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getMomentum() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getMomentum_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_17a952530a808943]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_17a952530a808943]));
      }

      PVCoordinates PVCoordinates::negate() const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_negate_6761e3f334368d44]));
      }

      PVCoordinates PVCoordinates::normalize() const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_normalize_6761e3f334368d44]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D PVCoordinates::positionShiftedBy(jdouble a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_positionShiftedBy_5f993a721a1d8c59], a0));
      }

      PVCoordinates PVCoordinates::shiftedBy(jdouble a0) const
      {
        return PVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_ab4581311accba8a], a0));
      }

      ::org::orekit::utils::FieldPVCoordinates PVCoordinates::toDerivativeStructurePV(jint a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toDerivativeStructurePV_42ec5cc0a8e3a780], a0));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PVCoordinates::toDerivativeStructureVector(jint a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toDerivativeStructureVector_cc53a43c791fc9de], a0));
      }

      ::java::lang::String PVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      ::org::orekit::utils::FieldPVCoordinates PVCoordinates::toUnivariateDerivative1PV() const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1PV_239ccd4fbdc5d04d]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PVCoordinates::toUnivariateDerivative1Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative1Vector_5791f80683b5227e]));
      }

      ::org::orekit::utils::FieldPVCoordinates PVCoordinates::toUnivariateDerivative2PV() const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2PV_239ccd4fbdc5d04d]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PVCoordinates::toUnivariateDerivative2Vector() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_toUnivariateDerivative2Vector_5791f80683b5227e]));
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
      static PyObject *t_PVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PVCoordinates_init_(t_PVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PVCoordinates_blendArithmeticallyWith(t_PVCoordinates *self, PyObject *args);
      static PyObject *t_PVCoordinates_crossProduct(PyTypeObject *type, PyObject *args);
      static PyObject *t_PVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args);
      static PyObject *t_PVCoordinates_getAcceleration(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getAngularVelocity(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getMomentum(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getPosition(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_getVelocity(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_negate(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_normalize(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_positionShiftedBy(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_shiftedBy(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_toDerivativeStructurePV(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_toDerivativeStructureVector(t_PVCoordinates *self, PyObject *arg);
      static PyObject *t_PVCoordinates_toString(t_PVCoordinates *self, PyObject *args);
      static PyObject *t_PVCoordinates_toUnivariateDerivative1PV(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_toUnivariateDerivative1Vector(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_toUnivariateDerivative2PV(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_toUnivariateDerivative2Vector(t_PVCoordinates *self);
      static PyObject *t_PVCoordinates_get__acceleration(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__angularVelocity(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__momentum(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__position(t_PVCoordinates *self, void *data);
      static PyObject *t_PVCoordinates_get__velocity(t_PVCoordinates *self, void *data);
      static PyGetSetDef t_PVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_PVCoordinates, acceleration),
        DECLARE_GET_FIELD(t_PVCoordinates, angularVelocity),
        DECLARE_GET_FIELD(t_PVCoordinates, momentum),
        DECLARE_GET_FIELD(t_PVCoordinates, position),
        DECLARE_GET_FIELD(t_PVCoordinates, velocity),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PVCoordinates__methods_[] = {
        DECLARE_METHOD(t_PVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_PVCoordinates, crossProduct, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, estimateVelocity, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PVCoordinates, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getAngularVelocity, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getMomentum, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getPosition, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, negate, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, normalize, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, positionShiftedBy, METH_O),
        DECLARE_METHOD(t_PVCoordinates, shiftedBy, METH_O),
        DECLARE_METHOD(t_PVCoordinates, toDerivativeStructurePV, METH_O),
        DECLARE_METHOD(t_PVCoordinates, toDerivativeStructureVector, METH_O),
        DECLARE_METHOD(t_PVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative1PV, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative1Vector, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative2PV, METH_NOARGS),
        DECLARE_METHOD(t_PVCoordinates, toUnivariateDerivative2Vector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PVCoordinates)[] = {
        { Py_tp_methods, t_PVCoordinates__methods_ },
        { Py_tp_init, (void *) t_PVCoordinates_init_ },
        { Py_tp_getset, t_PVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PVCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PVCoordinates, t_PVCoordinates, PVCoordinates);

      void t_PVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(PVCoordinates), &PY_TYPE_DEF(PVCoordinates), module, "PVCoordinates", 0);
      }

      void t_PVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "class_", make_descriptor(PVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "wrapfn_", make_descriptor(t_PVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "boxfn_", make_descriptor(boxObject));
        env->getClass(PVCoordinates::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PVCoordinates), "ZERO", make_descriptor(t_PVCoordinates::wrap_Object(*PVCoordinates::ZERO)));
      }

      static PyObject *t_PVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PVCoordinates::initializeClass, 1)))
          return NULL;
        return t_PVCoordinates::wrap_Object(PVCoordinates(((t_PVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_PVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PVCoordinates_init_(t_PVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            PVCoordinates object((jobject) NULL);

            INT_CALL(object = PVCoordinates());
            self->object = object;
            break;
          }
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = PVCoordinates(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              INT_CALL(object = PVCoordinates(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            PVCoordinates a0((jobject) NULL);
            PVCoordinates a1((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "Dk", PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            jdouble a2;
            PVCoordinates a3((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DkDk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            jdouble a2;
            PVCoordinates a3((jobject) NULL);
            jdouble a4;
            PVCoordinates a5((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2, a3, a4, a5));
              self->object = object;
              break;
            }
          }
          goto err;
         case 8:
          {
            jdouble a0;
            PVCoordinates a1((jobject) NULL);
            jdouble a2;
            PVCoordinates a3((jobject) NULL);
            jdouble a4;
            PVCoordinates a5((jobject) NULL);
            jdouble a6;
            PVCoordinates a7((jobject) NULL);
            PVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = PVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7));
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

      static PyObject *t_PVCoordinates_blendArithmeticallyWith(t_PVCoordinates *self, PyObject *args)
      {
        PVCoordinates a0((jobject) NULL);
        jdouble a1;
        PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kD", PVCoordinates::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_PVCoordinates_crossProduct(PyTypeObject *type, PyObject *args)
      {
        PVCoordinates a0((jobject) NULL);
        PVCoordinates a1((jobject) NULL);
        PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kk", PVCoordinates::initializeClass, PVCoordinates::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::utils::PVCoordinates::crossProduct(a0, a1));
          return t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "crossProduct", args);
        return NULL;
      }

      static PyObject *t_PVCoordinates_estimateVelocity(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
        jdouble a2;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::utils::PVCoordinates::estimateVelocity(a0, a1, a2));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "estimateVelocity", args);
        return NULL;
      }

      static PyObject *t_PVCoordinates_getAcceleration(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getAngularVelocity(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getMomentum(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getPosition(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_getVelocity(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_negate(t_PVCoordinates *self)
      {
        PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_normalize(t_PVCoordinates *self)
      {
        PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_PVCoordinates_positionShiftedBy(t_PVCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.positionShiftedBy(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "positionShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_shiftedBy(t_PVCoordinates *self, PyObject *arg)
      {
        jdouble a0;
        PVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_toDerivativeStructurePV(t_PVCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructurePV(a0));
          return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructurePV", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_toDerivativeStructureVector(t_PVCoordinates *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.toDerivativeStructureVector(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        PyErr_SetArgsError((PyObject *) self, "toDerivativeStructureVector", arg);
        return NULL;
      }

      static PyObject *t_PVCoordinates_toString(t_PVCoordinates *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(PVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative1PV(t_PVCoordinates *self)
      {
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1PV());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative1Vector(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative1Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative1));
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative2PV(t_PVCoordinates *self)
      {
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2PV());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
      }

      static PyObject *t_PVCoordinates_toUnivariateDerivative2Vector(t_PVCoordinates *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.toUnivariateDerivative2Vector());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(UnivariateDerivative2));
      }

      static PyObject *t_PVCoordinates_get__acceleration(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__angularVelocity(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__momentum(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getMomentum());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__position(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }

      static PyObject *t_PVCoordinates_get__velocity(t_PVCoordinates *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AbstractFieldTimeInterpolator$InterpolationData.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ImmutableFieldTimeStampedCache.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractFieldTimeInterpolator$InterpolationData::class$ = NULL;
      jmethodID *AbstractFieldTimeInterpolator$InterpolationData::mids$ = NULL;
      bool AbstractFieldTimeInterpolator$InterpolationData::live$ = false;

      jclass AbstractFieldTimeInterpolator$InterpolationData::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractFieldTimeInterpolator$InterpolationData");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCachedSamples_b21cbcef82b413d5] = env->getMethodID(cls, "getCachedSamples", "()Lorg/orekit/utils/ImmutableFieldTimeStampedCache;");
          mids$[mid_getField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
          mids$[mid_getInterpolationDate_09b0a926600dfc14] = env->getMethodID(cls, "getInterpolationDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getNeighborList_a6156df500549a58] = env->getMethodID(cls, "getNeighborList", "()Ljava/util/List;");
          mids$[mid_getOne_e6d4d3215c30992a] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getZero_e6d4d3215c30992a] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCentralDate_7c63cdf8a96923c3] = env->getMethodID(cls, "getCentralDate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/time/FieldAbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::ImmutableFieldTimeStampedCache AbstractFieldTimeInterpolator$InterpolationData::getCachedSamples() const
      {
        return ::org::orekit::utils::ImmutableFieldTimeStampedCache(env->callObjectMethod(this$, mids$[mid_getCachedSamples_b21cbcef82b413d5]));
      }

      ::org::hipparchus::Field AbstractFieldTimeInterpolator$InterpolationData::getField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_70b4bbd3fa378d6b]));
      }

      ::org::orekit::time::FieldAbsoluteDate AbstractFieldTimeInterpolator$InterpolationData::getInterpolationDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInterpolationDate_09b0a926600dfc14]));
      }

      ::java::util::List AbstractFieldTimeInterpolator$InterpolationData::getNeighborList() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNeighborList_a6156df500549a58]));
      }

      ::org::hipparchus::CalculusFieldElement AbstractFieldTimeInterpolator$InterpolationData::getOne() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOne_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement AbstractFieldTimeInterpolator$InterpolationData::getZero() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getZero_e6d4d3215c30992a]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_of_(t_AbstractFieldTimeInterpolator$InterpolationData *self, PyObject *args);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getField(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getNeighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getOne(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getZero(t_AbstractFieldTimeInterpolator$InterpolationData *self);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__field(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__neighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__one(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__zero(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__parameters_(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data);
      static PyGetSetDef t_AbstractFieldTimeInterpolator$InterpolationData__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, cachedSamples),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, field),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, interpolationDate),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, neighborList),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, one),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, zero),
        DECLARE_GET_FIELD(t_AbstractFieldTimeInterpolator$InterpolationData, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractFieldTimeInterpolator$InterpolationData__methods_[] = {
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getCachedSamples, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getField, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getInterpolationDate, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getNeighborList, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getOne, METH_NOARGS),
        DECLARE_METHOD(t_AbstractFieldTimeInterpolator$InterpolationData, getZero, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractFieldTimeInterpolator$InterpolationData)[] = {
        { Py_tp_methods, t_AbstractFieldTimeInterpolator$InterpolationData__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractFieldTimeInterpolator$InterpolationData__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractFieldTimeInterpolator$InterpolationData)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractFieldTimeInterpolator$InterpolationData, t_AbstractFieldTimeInterpolator$InterpolationData, AbstractFieldTimeInterpolator$InterpolationData);
      PyObject *t_AbstractFieldTimeInterpolator$InterpolationData::wrap_Object(const AbstractFieldTimeInterpolator$InterpolationData& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator$InterpolationData::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator$InterpolationData *self = (t_AbstractFieldTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_AbstractFieldTimeInterpolator$InterpolationData::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_AbstractFieldTimeInterpolator$InterpolationData::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractFieldTimeInterpolator$InterpolationData *self = (t_AbstractFieldTimeInterpolator$InterpolationData *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_AbstractFieldTimeInterpolator$InterpolationData::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), &PY_TYPE_DEF(AbstractFieldTimeInterpolator$InterpolationData), module, "AbstractFieldTimeInterpolator$InterpolationData", 0);
      }

      void t_AbstractFieldTimeInterpolator$InterpolationData::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), "class_", make_descriptor(AbstractFieldTimeInterpolator$InterpolationData::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), "wrapfn_", make_descriptor(t_AbstractFieldTimeInterpolator$InterpolationData::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldTimeInterpolator$InterpolationData), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractFieldTimeInterpolator$InterpolationData::initializeClass, 1)))
          return NULL;
        return t_AbstractFieldTimeInterpolator$InterpolationData::wrap_Object(AbstractFieldTimeInterpolator$InterpolationData(((t_AbstractFieldTimeInterpolator$InterpolationData *) arg)->object.this$));
      }
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractFieldTimeInterpolator$InterpolationData::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_of_(t_AbstractFieldTimeInterpolator$InterpolationData *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getCachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::utils::ImmutableFieldTimeStampedCache result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableFieldTimeStampedCache::wrap_Object(result, self->parameters[0], self->parameters[1]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getField(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[1]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getInterpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getInterpolationDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[1]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getNeighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getOne(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_getZero(t_AbstractFieldTimeInterpolator$InterpolationData *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__parameters_(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__cachedSamples(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::utils::ImmutableFieldTimeStampedCache value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedSamples());
        return ::org::orekit::utils::t_ImmutableFieldTimeStampedCache::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__field(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__interpolationDate(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getInterpolationDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__neighborList(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getNeighborList());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__one(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_AbstractFieldTimeInterpolator$InterpolationData_get__zero(t_AbstractFieldTimeInterpolator$InterpolationData *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/SubCircle.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *SubCircle::class$ = NULL;
          jmethodID *SubCircle::mids$ = NULL;
          bool SubCircle::live$ = false;

          jclass SubCircle::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/SubCircle");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ece3b6638d417579] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_split_3b0163aa85fdaa47] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_3227314555d80cc9] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubCircle::SubCircle(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_ece3b6638d417579, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubCircle::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_3b0163aa85fdaa47], a0.this$));
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
    namespace geometry {
      namespace spherical {
        namespace twod {
          static PyObject *t_SubCircle_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubCircle_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubCircle_of_(t_SubCircle *self, PyObject *args);
          static int t_SubCircle_init_(t_SubCircle *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubCircle_split(t_SubCircle *self, PyObject *args);
          static PyObject *t_SubCircle_get__parameters_(t_SubCircle *self, void *data);
          static PyGetSetDef t_SubCircle__fields_[] = {
            DECLARE_GET_FIELD(t_SubCircle, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubCircle__methods_[] = {
            DECLARE_METHOD(t_SubCircle, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubCircle, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubCircle, of_, METH_VARARGS),
            DECLARE_METHOD(t_SubCircle, split, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubCircle)[] = {
            { Py_tp_methods, t_SubCircle__methods_ },
            { Py_tp_init, (void *) t_SubCircle_init_ },
            { Py_tp_getset, t_SubCircle__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubCircle)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractSubHyperplane),
            NULL
          };

          DEFINE_TYPE(SubCircle, t_SubCircle, SubCircle);
          PyObject *t_SubCircle::wrap_Object(const SubCircle& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubCircle::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubCircle *self = (t_SubCircle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SubCircle::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SubCircle::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SubCircle *self = (t_SubCircle *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SubCircle::install(PyObject *module)
          {
            installType(&PY_TYPE(SubCircle), &PY_TYPE_DEF(SubCircle), module, "SubCircle", 0);
          }

          void t_SubCircle::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubCircle), "class_", make_descriptor(SubCircle::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubCircle), "wrapfn_", make_descriptor(t_SubCircle::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubCircle), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubCircle_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubCircle::initializeClass, 1)))
              return NULL;
            return t_SubCircle::wrap_Object(SubCircle(((t_SubCircle *) arg)->object.this$));
          }
          static PyObject *t_SubCircle_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubCircle::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubCircle_of_(t_SubCircle *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SubCircle_init_(t_SubCircle *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::Region a1((jobject) NULL);
            PyTypeObject **p1;
            SubCircle object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
            {
              INT_CALL(object = SubCircle(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
              self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SubCircle_split(t_SubCircle *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.split(a0));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D));
            }

            return callSuper(PY_TYPE(SubCircle), (PyObject *) self, "split", args, 2);
          }
          static PyObject *t_SubCircle_get__parameters_(t_SubCircle *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/FDOABuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/FDOA.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *FDOABuilder::class$ = NULL;
          jmethodID *FDOABuilder::mids$ = NULL;
          bool FDOABuilder::live$ = false;

          jclass FDOABuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/FDOABuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1244d1991e4ca48e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_17ca98d47c9956a6] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/FDOA;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FDOABuilder::FDOABuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_1244d1991e4ca48e, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

          ::org::orekit::estimation::measurements::FDOA FDOABuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::FDOA(env->callObjectMethod(this$, mids$[mid_build_17ca98d47c9956a6], a0.this$, a1.this$));
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
          static PyObject *t_FDOABuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FDOABuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FDOABuilder_of_(t_FDOABuilder *self, PyObject *args);
          static int t_FDOABuilder_init_(t_FDOABuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FDOABuilder_build(t_FDOABuilder *self, PyObject *args);
          static PyObject *t_FDOABuilder_get__parameters_(t_FDOABuilder *self, void *data);
          static PyGetSetDef t_FDOABuilder__fields_[] = {
            DECLARE_GET_FIELD(t_FDOABuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FDOABuilder__methods_[] = {
            DECLARE_METHOD(t_FDOABuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FDOABuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FDOABuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_FDOABuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FDOABuilder)[] = {
            { Py_tp_methods, t_FDOABuilder__methods_ },
            { Py_tp_init, (void *) t_FDOABuilder_init_ },
            { Py_tp_getset, t_FDOABuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FDOABuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(FDOABuilder, t_FDOABuilder, FDOABuilder);
          PyObject *t_FDOABuilder::wrap_Object(const FDOABuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FDOABuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FDOABuilder *self = (t_FDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FDOABuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FDOABuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FDOABuilder *self = (t_FDOABuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FDOABuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(FDOABuilder), &PY_TYPE_DEF(FDOABuilder), module, "FDOABuilder", 0);
          }

          void t_FDOABuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FDOABuilder), "class_", make_descriptor(FDOABuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FDOABuilder), "wrapfn_", make_descriptor(t_FDOABuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FDOABuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FDOABuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FDOABuilder::initializeClass, 1)))
              return NULL;
            return t_FDOABuilder::wrap_Object(FDOABuilder(((t_FDOABuilder *) arg)->object.this$));
          }
          static PyObject *t_FDOABuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FDOABuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FDOABuilder_of_(t_FDOABuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FDOABuilder_init_(t_FDOABuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
            FDOABuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = FDOABuilder(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(FDOA);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FDOABuilder_build(t_FDOABuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::FDOA result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_FDOA::wrap_Object(result);
            }

            return callSuper(PY_TYPE(FDOABuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_FDOABuilder_get__parameters_(t_FDOABuilder *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/BistaticRangeBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
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

          ::java::lang::Class *BistaticRangeBuilder::class$ = NULL;
          jmethodID *BistaticRangeBuilder::mids$ = NULL;
          bool BistaticRangeBuilder::live$ = false;

          jclass BistaticRangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/BistaticRangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_aa060bc4347f0934] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_cf04fe1c49bf4d36] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/BistaticRange;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeBuilder::BistaticRangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::estimation::measurements::GroundStation & a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_aa060bc4347f0934, a0.this$, a1.this$, a2.this$, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::BistaticRange BistaticRangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::BistaticRange(env->callObjectMethod(this$, mids$[mid_build_cf04fe1c49bf4d36], a0.this$, a1.this$));
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
          static PyObject *t_BistaticRangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeBuilder_of_(t_BistaticRangeBuilder *self, PyObject *args);
          static int t_BistaticRangeBuilder_init_(t_BistaticRangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeBuilder_build(t_BistaticRangeBuilder *self, PyObject *args);
          static PyObject *t_BistaticRangeBuilder_get__parameters_(t_BistaticRangeBuilder *self, void *data);
          static PyGetSetDef t_BistaticRangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_BistaticRangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BistaticRangeBuilder__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_BistaticRangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeBuilder)[] = {
            { Py_tp_methods, t_BistaticRangeBuilder__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeBuilder_init_ },
            { Py_tp_getset, t_BistaticRangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(BistaticRangeBuilder, t_BistaticRangeBuilder, BistaticRangeBuilder);
          PyObject *t_BistaticRangeBuilder::wrap_Object(const BistaticRangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_BistaticRangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_BistaticRangeBuilder *self = (t_BistaticRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_BistaticRangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_BistaticRangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_BistaticRangeBuilder *self = (t_BistaticRangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_BistaticRangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeBuilder), &PY_TYPE_DEF(BistaticRangeBuilder), module, "BistaticRangeBuilder", 0);
          }

          void t_BistaticRangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeBuilder), "class_", make_descriptor(BistaticRangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeBuilder), "wrapfn_", make_descriptor(t_BistaticRangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeBuilder::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeBuilder::wrap_Object(BistaticRangeBuilder(((t_BistaticRangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BistaticRangeBuilder_of_(t_BistaticRangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_BistaticRangeBuilder_init_(t_BistaticRangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            BistaticRangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkkDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = BistaticRangeBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(BistaticRange);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeBuilder_build(t_BistaticRangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::BistaticRange result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_BistaticRange::wrap_Object(result);
            }

            return callSuper(PY_TYPE(BistaticRangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_BistaticRangeBuilder_get__parameters_(t_BistaticRangeBuilder *self, void *data)
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
#include "java/lang/Boolean.h"
#include "java/io/Serializable.h"
#include "java/lang/Class.h"
#include "java/lang/Boolean.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Boolean::class$ = NULL;
    jmethodID *Boolean::mids$ = NULL;
    bool Boolean::live$ = false;
    Boolean *Boolean::FALSE = NULL;
    Boolean *Boolean::TRUE = NULL;
    ::java::lang::Class *Boolean::TYPE = NULL;

    jclass Boolean::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Boolean");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_50a2e0b139e80a58] = env->getMethodID(cls, "<init>", "(Z)V");
        mids$[mid_booleanValue_e470b6d9e0d979db] = env->getMethodID(cls, "booleanValue", "()Z");
        mids$[mid_compare_d23df0cf84f06f59] = env->getStaticMethodID(cls, "compare", "(ZZ)I");
        mids$[mid_compareTo_82aaa5cf73109ee5] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Boolean;)I");
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getBoolean_6b161f495ea569b8] = env->getStaticMethodID(cls, "getBoolean", "(Ljava/lang/String;)Z");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_d2a253a0215691b3] = env->getStaticMethodID(cls, "hashCode", "(Z)I");
        mids$[mid_logicalAnd_100b9381d288c094] = env->getStaticMethodID(cls, "logicalAnd", "(ZZ)Z");
        mids$[mid_logicalOr_100b9381d288c094] = env->getStaticMethodID(cls, "logicalOr", "(ZZ)Z");
        mids$[mid_logicalXor_100b9381d288c094] = env->getStaticMethodID(cls, "logicalXor", "(ZZ)Z");
        mids$[mid_parseBoolean_6b161f495ea569b8] = env->getStaticMethodID(cls, "parseBoolean", "(Ljava/lang/String;)Z");
        mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_59ba897c407f128d] = env->getStaticMethodID(cls, "toString", "(Z)Ljava/lang/String;");
        mids$[mid_valueOf_33c3484b54c80b62] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Boolean;");
        mids$[mid_valueOf_4273684f9f48a9de] = env->getStaticMethodID(cls, "valueOf", "(Z)Ljava/lang/Boolean;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        FALSE = new Boolean(env->getStaticObjectField(cls, "FALSE", "Ljava/lang/Boolean;"));
        TRUE = new Boolean(env->getStaticObjectField(cls, "TRUE", "Ljava/lang/Boolean;"));
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Boolean::Boolean(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

    Boolean::Boolean(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_50a2e0b139e80a58, a0)) {}

    jboolean Boolean::booleanValue() const
    {
      return env->callBooleanMethod(this$, mids$[mid_booleanValue_e470b6d9e0d979db]);
    }

    jint Boolean::compare(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_d23df0cf84f06f59], a0, a1);
    }

    jint Boolean::compareTo(const Boolean & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_82aaa5cf73109ee5], a0.this$);
    }

    jboolean Boolean::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jboolean Boolean::getBoolean(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_getBoolean_6b161f495ea569b8], a0.this$);
    }

    jint Boolean::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jint Boolean::hashCode(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_d2a253a0215691b3], a0);
    }

    jboolean Boolean::logicalAnd(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_logicalAnd_100b9381d288c094], a0, a1);
    }

    jboolean Boolean::logicalOr(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_logicalOr_100b9381d288c094], a0, a1);
    }

    jboolean Boolean::logicalXor(jboolean a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_logicalXor_100b9381d288c094], a0, a1);
    }

    jboolean Boolean::parseBoolean(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_parseBoolean_6b161f495ea569b8], a0.this$);
    }

    ::java::lang::String Boolean::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
    }

    ::java::lang::String Boolean::toString(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_59ba897c407f128d], a0));
    }

    Boolean Boolean::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Boolean(env->callStaticObjectMethod(cls, mids$[mid_valueOf_33c3484b54c80b62], a0.this$));
    }

    Boolean Boolean::valueOf(jboolean a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Boolean(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4273684f9f48a9de], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Boolean_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Boolean_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Boolean_init_(t_Boolean *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Boolean_booleanValue(t_Boolean *self);
    static PyObject *t_Boolean_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_compareTo(t_Boolean *self, PyObject *arg);
    static PyObject *t_Boolean_equals(t_Boolean *self, PyObject *args);
    static PyObject *t_Boolean_getBoolean(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Boolean_hashCode(t_Boolean *self, PyObject *args);
    static PyObject *t_Boolean_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_logicalAnd(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_logicalOr(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_logicalXor(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_parseBoolean(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Boolean_toString(t_Boolean *self, PyObject *args);
    static PyObject *t_Boolean_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Boolean_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Boolean__methods_[] = {
      DECLARE_METHOD(t_Boolean, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, booleanValue, METH_NOARGS),
      DECLARE_METHOD(t_Boolean, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, compareTo, METH_O),
      DECLARE_METHOD(t_Boolean, equals, METH_VARARGS),
      DECLARE_METHOD(t_Boolean, getBoolean, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Boolean, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, logicalAnd, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, logicalOr, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, logicalXor, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Boolean, parseBoolean, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, toString, METH_VARARGS),
      DECLARE_METHOD(t_Boolean, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Boolean, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Boolean)[] = {
      { Py_tp_methods, t_Boolean__methods_ },
      { Py_tp_init, (void *) t_Boolean_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Boolean)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Boolean, t_Boolean, Boolean);

    void t_Boolean::install(PyObject *module)
    {
      installType(&PY_TYPE(Boolean), &PY_TYPE_DEF(Boolean), module, "Boolean", 0);
    }

    void t_Boolean::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "class_", make_descriptor(Boolean::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "wrapfn_", make_descriptor(unboxBoolean));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "boxfn_", make_descriptor(boxBoolean));
      env->getClass(Boolean::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "FALSE", make_descriptor(t_Boolean::wrap_Object(*Boolean::FALSE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "TRUE", make_descriptor(t_Boolean::wrap_Object(*Boolean::TRUE)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Boolean), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Boolean::TYPE)));
    }

    static PyObject *t_Boolean_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Boolean::initializeClass, 1)))
        return NULL;
      return t_Boolean::wrap_Object(Boolean(((t_Boolean *) arg)->object.this$));
    }
    static PyObject *t_Boolean_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Boolean::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Boolean_init_(t_Boolean *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Boolean object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Boolean(a0));
            self->object = object;
            break;
          }
        }
        {
          jboolean a0;
          Boolean object((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            INT_CALL(object = Boolean(a0));
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

    static PyObject *t_Boolean_booleanValue(t_Boolean *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.booleanValue());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Boolean_compare(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jint result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Boolean_compareTo(t_Boolean *self, PyObject *arg)
    {
      Boolean a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Boolean), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Boolean_equals(t_Boolean *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Boolean), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Boolean_getBoolean(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::getBoolean(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "getBoolean", arg);
      return NULL;
    }

    static PyObject *t_Boolean_hashCode(t_Boolean *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Boolean), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Boolean_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jint result;

      if (!parseArgs(args, "Z", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Boolean_logicalAnd(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jboolean result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::logicalAnd(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "logicalAnd", args);
      return NULL;
    }

    static PyObject *t_Boolean_logicalOr(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jboolean result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::logicalOr(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "logicalOr", args);
      return NULL;
    }

    static PyObject *t_Boolean_logicalXor(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      jboolean a1;
      jboolean result;

      if (!parseArgs(args, "ZZ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Boolean::logicalXor(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "logicalXor", args);
      return NULL;
    }

    static PyObject *t_Boolean_parseBoolean(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::parseBoolean(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "parseBoolean", arg);
      return NULL;
    }

    static PyObject *t_Boolean_toString(t_Boolean *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Boolean), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Boolean_toString_(PyTypeObject *type, PyObject *args)
    {
      jboolean a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "Z", &a0))
      {
        OBJ_CALL(result = ::java::lang::Boolean::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Boolean_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Boolean result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Boolean::valueOf(a0));
            return t_Boolean::wrap_Object(result);
          }
        }
        {
          jboolean a0;
          Boolean result((jobject) NULL);

          if (!parseArgs(args, "Z", &a0))
          {
            OBJ_CALL(result = ::java::lang::Boolean::valueOf(a0));
            return t_Boolean::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/DragForce.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *DragForce::class$ = NULL;
        jmethodID *DragForce::mids$ = NULL;
        bool DragForce::live$ = false;

        jclass DragForce::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/DragForce");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9d49a06389f1e886] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;Lorg/orekit/forces/drag/DragSensitive;)V");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getAtmosphere_97b68f99073ea89d] = env->getMethodID(cls, "getAtmosphere", "()Lorg/orekit/models/earth/atmosphere/Atmosphere;");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSpacecraft_e36253101b741e3a] = env->getMethodID(cls, "getSpacecraft", "()Lorg/orekit/forces/drag/DragSensitive;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DragForce::DragForce(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0, const ::org::orekit::forces::drag::DragSensitive & a1) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_9d49a06389f1e886, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DragForce::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DragForce::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        ::org::orekit::models::earth::atmosphere::Atmosphere DragForce::getAtmosphere() const
        {
          return ::org::orekit::models::earth::atmosphere::Atmosphere(env->callObjectMethod(this$, mids$[mid_getAtmosphere_97b68f99073ea89d]));
        }

        ::java::util::List DragForce::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
        }

        ::org::orekit::forces::drag::DragSensitive DragForce::getSpacecraft() const
        {
          return ::org::orekit::forces::drag::DragSensitive(env->callObjectMethod(this$, mids$[mid_getSpacecraft_e36253101b741e3a]));
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
      namespace drag {
        static PyObject *t_DragForce_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DragForce_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DragForce_init_(t_DragForce *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DragForce_acceleration(t_DragForce *self, PyObject *args);
        static PyObject *t_DragForce_getAtmosphere(t_DragForce *self);
        static PyObject *t_DragForce_getParametersDrivers(t_DragForce *self, PyObject *args);
        static PyObject *t_DragForce_getSpacecraft(t_DragForce *self);
        static PyObject *t_DragForce_get__atmosphere(t_DragForce *self, void *data);
        static PyObject *t_DragForce_get__parametersDrivers(t_DragForce *self, void *data);
        static PyObject *t_DragForce_get__spacecraft(t_DragForce *self, void *data);
        static PyGetSetDef t_DragForce__fields_[] = {
          DECLARE_GET_FIELD(t_DragForce, atmosphere),
          DECLARE_GET_FIELD(t_DragForce, parametersDrivers),
          DECLARE_GET_FIELD(t_DragForce, spacecraft),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DragForce__methods_[] = {
          DECLARE_METHOD(t_DragForce, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragForce, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragForce, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_DragForce, getAtmosphere, METH_NOARGS),
          DECLARE_METHOD(t_DragForce, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_DragForce, getSpacecraft, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DragForce)[] = {
          { Py_tp_methods, t_DragForce__methods_ },
          { Py_tp_init, (void *) t_DragForce_init_ },
          { Py_tp_getset, t_DragForce__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DragForce)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::drag::AbstractDragForceModel),
          NULL
        };

        DEFINE_TYPE(DragForce, t_DragForce, DragForce);

        void t_DragForce::install(PyObject *module)
        {
          installType(&PY_TYPE(DragForce), &PY_TYPE_DEF(DragForce), module, "DragForce", 0);
        }

        void t_DragForce::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragForce), "class_", make_descriptor(DragForce::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragForce), "wrapfn_", make_descriptor(t_DragForce::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragForce), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DragForce_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DragForce::initializeClass, 1)))
            return NULL;
          return t_DragForce::wrap_Object(DragForce(((t_DragForce *) arg)->object.this$));
        }
        static PyObject *t_DragForce_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DragForce::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DragForce_init_(t_DragForce *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
          ::org::orekit::forces::drag::DragSensitive a1((jobject) NULL);
          DragForce object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, ::org::orekit::forces::drag::DragSensitive::initializeClass, &a0, &a1))
          {
            INT_CALL(object = DragForce(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DragForce_acceleration(t_DragForce *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(DragForce), (PyObject *) self, "acceleration", args, 2);
        }

        static PyObject *t_DragForce_getAtmosphere(t_DragForce *self)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere result((jobject) NULL);
          OBJ_CALL(result = self->object.getAtmosphere());
          return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(result);
        }

        static PyObject *t_DragForce_getParametersDrivers(t_DragForce *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(DragForce), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_DragForce_getSpacecraft(t_DragForce *self)
        {
          ::org::orekit::forces::drag::DragSensitive result((jobject) NULL);
          OBJ_CALL(result = self->object.getSpacecraft());
          return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(result);
        }

        static PyObject *t_DragForce_get__atmosphere(t_DragForce *self, void *data)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere value((jobject) NULL);
          OBJ_CALL(value = self->object.getAtmosphere());
          return ::org::orekit::models::earth::atmosphere::t_Atmosphere::wrap_Object(value);
        }

        static PyObject *t_DragForce_get__parametersDrivers(t_DragForce *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_DragForce_get__spacecraft(t_DragForce *self, void *data)
        {
          ::org::orekit::forces::drag::DragSensitive value((jobject) NULL);
          OBJ_CALL(value = self->object.getSpacecraft());
          return ::org::orekit::forces::drag::t_DragSensitive::wrap_Object(value);
        }
      }
    }
  }
}
