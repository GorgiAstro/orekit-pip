#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldAbstractGaussianContributionContext.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *FieldAbstractGaussianContributionContext::class$ = NULL;
            jmethodID *FieldAbstractGaussianContributionContext::mids$ = NULL;
            bool FieldAbstractGaussianContributionContext::live$ = false;

            jclass FieldAbstractGaussianContributionContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/FieldAbstractGaussianContributionContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getA_e6d4d3215c30992a] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getCo2AB_e6d4d3215c30992a] = env->getMethodID(cls, "getCo2AB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanMotion_e6d4d3215c30992a] = env->getMethodID(cls, "getMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMu_e6d4d3215c30992a] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOOA_e6d4d3215c30992a] = env->getMethodID(cls, "getOOA", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOOAB_e6d4d3215c30992a] = env->getMethodID(cls, "getOOAB", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoBpo_e6d4d3215c30992a] = env->getMethodID(cls, "getOoBpo", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getOoMU_e6d4d3215c30992a] = env->getMethodID(cls, "getOoMU", "()Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getTon2a_e6d4d3215c30992a] = env->getMethodID(cls, "getTon2a", "()Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getCo2AB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getCo2AB_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getMeanMotion() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanMotion_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getMu() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOOA() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOOA_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOOAB() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOOAB_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOoBpo() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoBpo_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getOoMU() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOoMU_e6d4d3215c30992a]));
            }

            ::org::hipparchus::CalculusFieldElement FieldAbstractGaussianContributionContext::getTon2a() const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTon2a_e6d4d3215c30992a]));
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
          namespace forces {
            static PyObject *t_FieldAbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldAbstractGaussianContributionContext_of_(t_FieldAbstractGaussianContributionContext *self, PyObject *args);
            static PyObject *t_FieldAbstractGaussianContributionContext_getA(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getCo2AB(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getMeanMotion(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getMu(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOOA(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOOAB(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOoBpo(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getOoMU(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_getTon2a(t_FieldAbstractGaussianContributionContext *self);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__a(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__co2AB(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__meanMotion(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__mu(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOA(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOAB(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooBpo(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooMU(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__ton2a(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyObject *t_FieldAbstractGaussianContributionContext_get__parameters_(t_FieldAbstractGaussianContributionContext *self, void *data);
            static PyGetSetDef t_FieldAbstractGaussianContributionContext__fields_[] = {
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, a),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, co2AB),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, meanMotion),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, mu),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, oOA),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, oOAB),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, ooBpo),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, ooMU),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, ton2a),
              DECLARE_GET_FIELD(t_FieldAbstractGaussianContributionContext, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldAbstractGaussianContributionContext__methods_[] = {
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getA, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getCo2AB, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getMu, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOOA, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOOAB, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOoBpo, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getOoMU, METH_NOARGS),
              DECLARE_METHOD(t_FieldAbstractGaussianContributionContext, getTon2a, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldAbstractGaussianContributionContext)[] = {
              { Py_tp_methods, t_FieldAbstractGaussianContributionContext__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldAbstractGaussianContributionContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldAbstractGaussianContributionContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::FieldForceModelContext),
              NULL
            };

            DEFINE_TYPE(FieldAbstractGaussianContributionContext, t_FieldAbstractGaussianContributionContext, FieldAbstractGaussianContributionContext);
            PyObject *t_FieldAbstractGaussianContributionContext::wrap_Object(const FieldAbstractGaussianContributionContext& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAbstractGaussianContributionContext::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAbstractGaussianContributionContext *self = (t_FieldAbstractGaussianContributionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldAbstractGaussianContributionContext::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldAbstractGaussianContributionContext::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldAbstractGaussianContributionContext *self = (t_FieldAbstractGaussianContributionContext *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldAbstractGaussianContributionContext::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldAbstractGaussianContributionContext), &PY_TYPE_DEF(FieldAbstractGaussianContributionContext), module, "FieldAbstractGaussianContributionContext", 0);
            }

            void t_FieldAbstractGaussianContributionContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractGaussianContributionContext), "class_", make_descriptor(FieldAbstractGaussianContributionContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractGaussianContributionContext), "wrapfn_", make_descriptor(t_FieldAbstractGaussianContributionContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractGaussianContributionContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldAbstractGaussianContributionContext::initializeClass, 1)))
                return NULL;
              return t_FieldAbstractGaussianContributionContext::wrap_Object(FieldAbstractGaussianContributionContext(((t_FieldAbstractGaussianContributionContext *) arg)->object.this$));
            }
            static PyObject *t_FieldAbstractGaussianContributionContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldAbstractGaussianContributionContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_of_(t_FieldAbstractGaussianContributionContext *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getA(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getCo2AB(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getCo2AB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getMeanMotion(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMeanMotion());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getMu(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getMu());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOOA(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOOA());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOOAB(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOOAB());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOoBpo(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoBpo());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getOoMU(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getOoMU());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_getTon2a(t_FieldAbstractGaussianContributionContext *self)
            {
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
              OBJ_CALL(result = self->object.getTon2a());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
            static PyObject *t_FieldAbstractGaussianContributionContext_get__parameters_(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__a(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__co2AB(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getCo2AB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__meanMotion(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMeanMotion());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__mu(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getMu());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOA(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOOA());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__oOAB(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOOAB());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooBpo(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoBpo());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__ooMU(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getOoMU());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }

            static PyObject *t_FieldAbstractGaussianContributionContext_get__ton2a(t_FieldAbstractGaussianContributionContext *self, void *data)
            {
              ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
              OBJ_CALL(value = self->object.getTon2a());
              return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovarianceWriter.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CartesianCovarianceWriter::class$ = NULL;
            jmethodID *CartesianCovarianceWriter::mids$ = NULL;
            bool CartesianCovarianceWriter::live$ = false;

            jclass CartesianCovarianceWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CartesianCovarianceWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_51a3897dd557331d] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/CartesianCovariance;)V");
                mids$[mid_writeContent_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CartesianCovarianceWriter::CartesianCovarianceWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance & a2) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_51a3897dd557331d, a0.this$, a1.this$, a2.this$)) {}
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
          namespace odm {
            static PyObject *t_CartesianCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CartesianCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CartesianCovarianceWriter_init_(t_CartesianCovarianceWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_CartesianCovarianceWriter__methods_[] = {
              DECLARE_METHOD(t_CartesianCovarianceWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CartesianCovarianceWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CartesianCovarianceWriter)[] = {
              { Py_tp_methods, t_CartesianCovarianceWriter__methods_ },
              { Py_tp_init, (void *) t_CartesianCovarianceWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CartesianCovarianceWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(CartesianCovarianceWriter, t_CartesianCovarianceWriter, CartesianCovarianceWriter);

            void t_CartesianCovarianceWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CartesianCovarianceWriter), &PY_TYPE_DEF(CartesianCovarianceWriter), module, "CartesianCovarianceWriter", 0);
            }

            void t_CartesianCovarianceWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceWriter), "class_", make_descriptor(CartesianCovarianceWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceWriter), "wrapfn_", make_descriptor(t_CartesianCovarianceWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CartesianCovarianceWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CartesianCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CartesianCovarianceWriter::initializeClass, 1)))
                return NULL;
              return t_CartesianCovarianceWriter::wrap_Object(CartesianCovarianceWriter(((t_CartesianCovarianceWriter *) arg)->object.this$));
            }
            static PyObject *t_CartesianCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CartesianCovarianceWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CartesianCovarianceWriter_init_(t_CartesianCovarianceWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance a2((jobject) NULL);
              CartesianCovarianceWriter object((jobject) NULL);

              if (!parseArgs(args, "ssk", ::org::orekit::files::ccsds::ndm::odm::CartesianCovariance::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = CartesianCovarianceWriter(a0, a1, a2));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEnablingPredicate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEnablingPredicate::class$ = NULL;
        jmethodID *FieldEnablingPredicate::mids$ = NULL;
        bool FieldEnablingPredicate::live$ = false;

        jclass FieldEnablingPredicate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEnablingPredicate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_eventIsEnabled_59813d9212bb9b66] = env->getMethodID(cls, "eventIsEnabled", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Lorg/hipparchus/CalculusFieldElement;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldEnablingPredicate::eventIsEnabled(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_eventIsEnabled_59813d9212bb9b66], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_FieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEnablingPredicate_of_(t_FieldEnablingPredicate *self, PyObject *args);
        static PyObject *t_FieldEnablingPredicate_eventIsEnabled(t_FieldEnablingPredicate *self, PyObject *args);
        static PyObject *t_FieldEnablingPredicate_get__parameters_(t_FieldEnablingPredicate *self, void *data);
        static PyGetSetDef t_FieldEnablingPredicate__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEnablingPredicate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEnablingPredicate__methods_[] = {
          DECLARE_METHOD(t_FieldEnablingPredicate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEnablingPredicate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEnablingPredicate, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEnablingPredicate, eventIsEnabled, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEnablingPredicate)[] = {
          { Py_tp_methods, t_FieldEnablingPredicate__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldEnablingPredicate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEnablingPredicate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEnablingPredicate, t_FieldEnablingPredicate, FieldEnablingPredicate);
        PyObject *t_FieldEnablingPredicate::wrap_Object(const FieldEnablingPredicate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEnablingPredicate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEnablingPredicate *self = (t_FieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEnablingPredicate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEnablingPredicate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEnablingPredicate *self = (t_FieldEnablingPredicate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEnablingPredicate::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEnablingPredicate), &PY_TYPE_DEF(FieldEnablingPredicate), module, "FieldEnablingPredicate", 0);
        }

        void t_FieldEnablingPredicate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEnablingPredicate), "class_", make_descriptor(FieldEnablingPredicate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEnablingPredicate), "wrapfn_", make_descriptor(t_FieldEnablingPredicate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEnablingPredicate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEnablingPredicate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEnablingPredicate::initializeClass, 1)))
            return NULL;
          return t_FieldEnablingPredicate::wrap_Object(FieldEnablingPredicate(((t_FieldEnablingPredicate *) arg)->object.this$));
        }
        static PyObject *t_FieldEnablingPredicate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEnablingPredicate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEnablingPredicate_of_(t_FieldEnablingPredicate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldEnablingPredicate_eventIsEnabled(t_FieldEnablingPredicate *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          jboolean result;

          if (!parseArgs(args, "KKK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.eventIsEnabled(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "eventIsEnabled", args);
          return NULL;
        }
        static PyObject *t_FieldEnablingPredicate_get__parameters_(t_FieldEnablingPredicate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/HarmonicAccelerationModel.h"
#include "java/util/List.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *HarmonicAccelerationModel::class$ = NULL;
        jmethodID *HarmonicAccelerationModel::mids$ = NULL;
        bool HarmonicAccelerationModel::live$ = false;

        jclass HarmonicAccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/HarmonicAccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9ca2b1cd84f93bf8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DI)V");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_signedAmplitude_79518d097c897d26] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signedAmplitude_4368a5d862927c08] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HarmonicAccelerationModel::HarmonicAccelerationModel(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9ca2b1cd84f93bf8, a0.this$, a1.this$, a2, a3)) {}

        ::java::util::List HarmonicAccelerationModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
        }

        void HarmonicAccelerationModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
        }

        ::org::hipparchus::CalculusFieldElement HarmonicAccelerationModel::signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_signedAmplitude_79518d097c897d26], a0.this$, a1.this$));
        }

        jdouble HarmonicAccelerationModel::signedAmplitude(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_signedAmplitude_4368a5d862927c08], a0.this$, a1.this$);
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
      namespace empirical {
        static PyObject *t_HarmonicAccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HarmonicAccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HarmonicAccelerationModel_init_(t_HarmonicAccelerationModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HarmonicAccelerationModel_getParametersDrivers(t_HarmonicAccelerationModel *self);
        static PyObject *t_HarmonicAccelerationModel_init(t_HarmonicAccelerationModel *self, PyObject *args);
        static PyObject *t_HarmonicAccelerationModel_signedAmplitude(t_HarmonicAccelerationModel *self, PyObject *args);
        static PyObject *t_HarmonicAccelerationModel_get__parametersDrivers(t_HarmonicAccelerationModel *self, void *data);
        static PyGetSetDef t_HarmonicAccelerationModel__fields_[] = {
          DECLARE_GET_FIELD(t_HarmonicAccelerationModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HarmonicAccelerationModel__methods_[] = {
          DECLARE_METHOD(t_HarmonicAccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, init, METH_VARARGS),
          DECLARE_METHOD(t_HarmonicAccelerationModel, signedAmplitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HarmonicAccelerationModel)[] = {
          { Py_tp_methods, t_HarmonicAccelerationModel__methods_ },
          { Py_tp_init, (void *) t_HarmonicAccelerationModel_init_ },
          { Py_tp_getset, t_HarmonicAccelerationModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HarmonicAccelerationModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HarmonicAccelerationModel, t_HarmonicAccelerationModel, HarmonicAccelerationModel);

        void t_HarmonicAccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(HarmonicAccelerationModel), &PY_TYPE_DEF(HarmonicAccelerationModel), module, "HarmonicAccelerationModel", 0);
        }

        void t_HarmonicAccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicAccelerationModel), "class_", make_descriptor(HarmonicAccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicAccelerationModel), "wrapfn_", make_descriptor(t_HarmonicAccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicAccelerationModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HarmonicAccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HarmonicAccelerationModel::initializeClass, 1)))
            return NULL;
          return t_HarmonicAccelerationModel::wrap_Object(HarmonicAccelerationModel(((t_HarmonicAccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_HarmonicAccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HarmonicAccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HarmonicAccelerationModel_init_(t_HarmonicAccelerationModel *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          jint a3;
          HarmonicAccelerationModel object((jobject) NULL);

          if (!parseArgs(args, "skDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = HarmonicAccelerationModel(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HarmonicAccelerationModel_getParametersDrivers(t_HarmonicAccelerationModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_HarmonicAccelerationModel_init(t_HarmonicAccelerationModel *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_HarmonicAccelerationModel_signedAmplitude(t_HarmonicAccelerationModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "signedAmplitude", args);
          return NULL;
        }

        static PyObject *t_HarmonicAccelerationModel_get__parametersDrivers(t_HarmonicAccelerationModel *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/utils/ParameterObserver.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriver::class$ = NULL;
      jmethodID *ParameterDriver::mids$ = NULL;
      bool ParameterDriver::live$ = false;

      jclass ParameterDriver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_117a615685ad06d4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDDD)V");
          mids$[mid_init$_b9c5dea347bbd126] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/TimeSpanMap;DDDD)V");
          mids$[mid_addObserver_10ec387243ac2368] = env->getMethodID(cls, "addObserver", "(Lorg/orekit/utils/ParameterObserver;)V");
          mids$[mid_addSpanAtDate_e82d68cd9f886886] = env->getMethodID(cls, "addSpanAtDate", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_addSpans_dff5f80cc61c17ba] = env->getMethodID(cls, "addSpans", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_getMaxValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getMaxValue", "()D");
          mids$[mid_getMinValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getMinValue", "()D");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getNameSpan_f6573813807bab89] = env->getMethodID(cls, "getNameSpan", "(Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
          mids$[mid_getNamesSpanMap_afbf756dd3c251fe] = env->getMethodID(cls, "getNamesSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
          mids$[mid_getNbOfValues_f2f64475e4580546] = env->getMethodID(cls, "getNbOfValues", "()I");
          mids$[mid_getNormalizedValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getNormalizedValue", "()D");
          mids$[mid_getNormalizedValue_e912d21057defe63] = env->getMethodID(cls, "getNormalizedValue", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getObservers_a6156df500549a58] = env->getMethodID(cls, "getObservers", "()Ljava/util/List;");
          mids$[mid_getReferenceDate_aaa854c403487cf3] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getReferenceValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getReferenceValue", "()D");
          mids$[mid_getScale_456d9a2f64d6b28d] = env->getMethodID(cls, "getScale", "()D");
          mids$[mid_getTransitionDates_31d24b9f6973b442] = env->getMethodID(cls, "getTransitionDates", "()[Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getValue", "()D");
          mids$[mid_getValue_e912d21057defe63] = env->getMethodID(cls, "getValue", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getValue_fde3b00728577c47] = env->getMethodID(cls, "getValue", "(ILjava/util/Map;)Lorg/hipparchus/analysis/differentiation/Gradient;");
          mids$[mid_getValue_2f41a7b9463c5c72] = env->getMethodID(cls, "getValue", "(ILjava/util/Map;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/analysis/differentiation/Gradient;");
          mids$[mid_getValueContinuousEstimation_e912d21057defe63] = env->getMethodID(cls, "getValueContinuousEstimation", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getValueSpanMap_afbf756dd3c251fe] = env->getMethodID(cls, "getValueSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
          mids$[mid_getValueStepEstimation_e912d21057defe63] = env->getMethodID(cls, "getValueStepEstimation", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getValues_7cdc325af0834901] = env->getMethodID(cls, "getValues", "()[D");
          mids$[mid_isContinuousEstimation_e470b6d9e0d979db] = env->getMethodID(cls, "isContinuousEstimation", "()Z");
          mids$[mid_isSelected_e470b6d9e0d979db] = env->getMethodID(cls, "isSelected", "()Z");
          mids$[mid_removeObserver_10ec387243ac2368] = env->getMethodID(cls, "removeObserver", "(Lorg/orekit/utils/ParameterObserver;)V");
          mids$[mid_replaceObserver_90fdcc75fd2f45f9] = env->getMethodID(cls, "replaceObserver", "(Lorg/orekit/utils/ParameterObserver;Lorg/orekit/utils/ParameterObserver;)V");
          mids$[mid_setContinuousEstimation_50a2e0b139e80a58] = env->getMethodID(cls, "setContinuousEstimation", "(Z)V");
          mids$[mid_setMaxValue_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMaxValue", "(D)V");
          mids$[mid_setMinValue_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMinValue", "(D)V");
          mids$[mid_setName_e939c6558ae8d313] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
          mids$[mid_setNormalizedValue_77e0f9a1f260e2e5] = env->getMethodID(cls, "setNormalizedValue", "(D)V");
          mids$[mid_setNormalizedValue_82dcc83e88ee1b1f] = env->getMethodID(cls, "setNormalizedValue", "(DLorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setReferenceDate_e82d68cd9f886886] = env->getMethodID(cls, "setReferenceDate", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setReferenceValue_77e0f9a1f260e2e5] = env->getMethodID(cls, "setReferenceValue", "(D)V");
          mids$[mid_setScale_77e0f9a1f260e2e5] = env->getMethodID(cls, "setScale", "(D)V");
          mids$[mid_setSelected_50a2e0b139e80a58] = env->getMethodID(cls, "setSelected", "(Z)V");
          mids$[mid_setValue_77e0f9a1f260e2e5] = env->getMethodID(cls, "setValue", "(D)V");
          mids$[mid_setValue_82dcc83e88ee1b1f] = env->getMethodID(cls, "setValue", "(DLorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setValueSpanMap_a4c33e1e91b3ca8e] = env->getMethodID(cls, "setValueSpanMap", "(Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ParameterDriver::ParameterDriver(const ::java::lang::String & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_117a615685ad06d4, a0.this$, a1, a2, a3, a4)) {}

      ParameterDriver::ParameterDriver(const ::java::lang::String & a0, const ::org::orekit::utils::TimeSpanMap & a1, const ::org::orekit::utils::TimeSpanMap & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b9c5dea347bbd126, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

      void ParameterDriver::addObserver(const ::org::orekit::utils::ParameterObserver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addObserver_10ec387243ac2368], a0.this$);
      }

      void ParameterDriver::addSpanAtDate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addSpanAtDate_e82d68cd9f886886], a0.this$);
      }

      void ParameterDriver::addSpans(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addSpans_dff5f80cc61c17ba], a0.this$, a1.this$, a2);
      }

      jdouble ParameterDriver::getMaxValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxValue_456d9a2f64d6b28d]);
      }

      jdouble ParameterDriver::getMinValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinValue_456d9a2f64d6b28d]);
      }

      ::java::lang::String ParameterDriver::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      ::java::lang::String ParameterDriver::getNameSpan(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNameSpan_f6573813807bab89], a0.this$));
      }

      ::org::orekit::utils::TimeSpanMap ParameterDriver::getNamesSpanMap() const
      {
        return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getNamesSpanMap_afbf756dd3c251fe]));
      }

      jint ParameterDriver::getNbOfValues() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbOfValues_f2f64475e4580546]);
      }

      jdouble ParameterDriver::getNormalizedValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormalizedValue_456d9a2f64d6b28d]);
      }

      jdouble ParameterDriver::getNormalizedValue(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormalizedValue_e912d21057defe63], a0.this$);
      }

      ::java::util::List ParameterDriver::getObservers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservers_a6156df500549a58]));
      }

      ::org::orekit::time::AbsoluteDate ParameterDriver::getReferenceDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_aaa854c403487cf3]));
      }

      jdouble ParameterDriver::getReferenceValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReferenceValue_456d9a2f64d6b28d]);
      }

      jdouble ParameterDriver::getScale() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getScale_456d9a2f64d6b28d]);
      }

      JArray< ::org::orekit::time::AbsoluteDate > ParameterDriver::getTransitionDates() const
      {
        return JArray< ::org::orekit::time::AbsoluteDate >(env->callObjectMethod(this$, mids$[mid_getTransitionDates_31d24b9f6973b442]));
      }

      jdouble ParameterDriver::getValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_456d9a2f64d6b28d]);
      }

      jdouble ParameterDriver::getValue(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::analysis::differentiation::Gradient ParameterDriver::getValue(jint a0, const ::java::util::Map & a1) const
      {
        return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getValue_fde3b00728577c47], a0, a1.this$));
      }

      ::org::hipparchus::analysis::differentiation::Gradient ParameterDriver::getValue(jint a0, const ::java::util::Map & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getValue_2f41a7b9463c5c72], a0, a1.this$, a2.this$));
      }

      jdouble ParameterDriver::getValueContinuousEstimation(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValueContinuousEstimation_e912d21057defe63], a0.this$);
      }

      ::org::orekit::utils::TimeSpanMap ParameterDriver::getValueSpanMap() const
      {
        return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getValueSpanMap_afbf756dd3c251fe]));
      }

      jdouble ParameterDriver::getValueStepEstimation(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValueStepEstimation_e912d21057defe63], a0.this$);
      }

      JArray< jdouble > ParameterDriver::getValues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValues_7cdc325af0834901]));
      }

      jboolean ParameterDriver::isContinuousEstimation() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isContinuousEstimation_e470b6d9e0d979db]);
      }

      jboolean ParameterDriver::isSelected() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSelected_e470b6d9e0d979db]);
      }

      void ParameterDriver::removeObserver(const ::org::orekit::utils::ParameterObserver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_removeObserver_10ec387243ac2368], a0.this$);
      }

      void ParameterDriver::replaceObserver(const ::org::orekit::utils::ParameterObserver & a0, const ::org::orekit::utils::ParameterObserver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_replaceObserver_90fdcc75fd2f45f9], a0.this$, a1.this$);
      }

      void ParameterDriver::setContinuousEstimation(jboolean a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setContinuousEstimation_50a2e0b139e80a58], a0);
      }

      void ParameterDriver::setMaxValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxValue_77e0f9a1f260e2e5], a0);
      }

      void ParameterDriver::setMinValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMinValue_77e0f9a1f260e2e5], a0);
      }

      void ParameterDriver::setName(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setName_e939c6558ae8d313], a0.this$);
      }

      void ParameterDriver::setNormalizedValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setNormalizedValue_77e0f9a1f260e2e5], a0);
      }

      void ParameterDriver::setNormalizedValue(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setNormalizedValue_82dcc83e88ee1b1f], a0, a1.this$);
      }

      void ParameterDriver::setReferenceDate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceDate_e82d68cd9f886886], a0.this$);
      }

      void ParameterDriver::setReferenceValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceValue_77e0f9a1f260e2e5], a0);
      }

      void ParameterDriver::setScale(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScale_77e0f9a1f260e2e5], a0);
      }

      void ParameterDriver::setSelected(jboolean a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSelected_50a2e0b139e80a58], a0);
      }

      void ParameterDriver::setValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setValue_77e0f9a1f260e2e5], a0);
      }

      void ParameterDriver::setValue(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setValue_82dcc83e88ee1b1f], a0, a1.this$);
      }

      void ParameterDriver::setValueSpanMap(const ParameterDriver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setValueSpanMap_a4c33e1e91b3ca8e], a0.this$);
      }

      ::java::lang::String ParameterDriver::toString() const
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
    namespace utils {
      static PyObject *t_ParameterDriver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ParameterDriver_init_(t_ParameterDriver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ParameterDriver_addObserver(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_addSpanAtDate(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_addSpans(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_getMaxValue(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getMinValue(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getName(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getNameSpan(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_getNamesSpanMap(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getNbOfValues(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getNormalizedValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_getObservers(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getReferenceDate(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getReferenceValue(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getScale(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getTransitionDates(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_getValueContinuousEstimation(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_getValueSpanMap(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getValueStepEstimation(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_getValues(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_isContinuousEstimation(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_isSelected(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_removeObserver(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_replaceObserver(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_setContinuousEstimation(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setMaxValue(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setMinValue(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setName(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setNormalizedValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_setReferenceDate(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setReferenceValue(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setScale(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setSelected(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_setValueSpanMap(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_toString(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_get__continuousEstimation(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__continuousEstimation(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__maxValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__maxValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__minValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__minValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__name(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__name(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__namesSpanMap(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__nbOfValues(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__normalizedValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__normalizedValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__observers(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__referenceDate(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__referenceDate(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__referenceValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__referenceValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__scale(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__scale(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__selected(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__selected(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__transitionDates(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__value(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__value(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__valueSpanMap(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__valueSpanMap(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__values(t_ParameterDriver *self, void *data);
      static PyGetSetDef t_ParameterDriver__fields_[] = {
        DECLARE_GETSET_FIELD(t_ParameterDriver, continuousEstimation),
        DECLARE_GETSET_FIELD(t_ParameterDriver, maxValue),
        DECLARE_GETSET_FIELD(t_ParameterDriver, minValue),
        DECLARE_GETSET_FIELD(t_ParameterDriver, name),
        DECLARE_GET_FIELD(t_ParameterDriver, namesSpanMap),
        DECLARE_GET_FIELD(t_ParameterDriver, nbOfValues),
        DECLARE_GETSET_FIELD(t_ParameterDriver, normalizedValue),
        DECLARE_GET_FIELD(t_ParameterDriver, observers),
        DECLARE_GETSET_FIELD(t_ParameterDriver, referenceDate),
        DECLARE_GETSET_FIELD(t_ParameterDriver, referenceValue),
        DECLARE_GETSET_FIELD(t_ParameterDriver, scale),
        DECLARE_GETSET_FIELD(t_ParameterDriver, selected),
        DECLARE_GET_FIELD(t_ParameterDriver, transitionDates),
        DECLARE_GETSET_FIELD(t_ParameterDriver, value),
        DECLARE_GETSET_FIELD(t_ParameterDriver, valueSpanMap),
        DECLARE_GET_FIELD(t_ParameterDriver, values),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriver__methods_[] = {
        DECLARE_METHOD(t_ParameterDriver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriver, addObserver, METH_O),
        DECLARE_METHOD(t_ParameterDriver, addSpanAtDate, METH_O),
        DECLARE_METHOD(t_ParameterDriver, addSpans, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, getMaxValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getMinValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getName, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getNameSpan, METH_O),
        DECLARE_METHOD(t_ParameterDriver, getNamesSpanMap, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getNbOfValues, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getNormalizedValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, getObservers, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getReferenceDate, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getReferenceValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getScale, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getTransitionDates, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, getValueContinuousEstimation, METH_O),
        DECLARE_METHOD(t_ParameterDriver, getValueSpanMap, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getValueStepEstimation, METH_O),
        DECLARE_METHOD(t_ParameterDriver, getValues, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, isContinuousEstimation, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, isSelected, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, removeObserver, METH_O),
        DECLARE_METHOD(t_ParameterDriver, replaceObserver, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, setContinuousEstimation, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setMaxValue, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setMinValue, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setName, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setNormalizedValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, setReferenceDate, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setReferenceValue, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setScale, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setSelected, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, setValueSpanMap, METH_O),
        DECLARE_METHOD(t_ParameterDriver, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriver)[] = {
        { Py_tp_methods, t_ParameterDriver__methods_ },
        { Py_tp_init, (void *) t_ParameterDriver_init_ },
        { Py_tp_getset, t_ParameterDriver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterDriver, t_ParameterDriver, ParameterDriver);

      void t_ParameterDriver::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriver), &PY_TYPE_DEF(ParameterDriver), module, "ParameterDriver", 0);
      }

      void t_ParameterDriver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriver), "class_", make_descriptor(ParameterDriver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriver), "wrapfn_", make_descriptor(t_ParameterDriver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriver::initializeClass, 1)))
          return NULL;
        return t_ParameterDriver::wrap_Object(ParameterDriver(((t_ParameterDriver *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ParameterDriver_init_(t_ParameterDriver *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::java::lang::String a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            ParameterDriver object((jobject) NULL);

            if (!parseArgs(args, "sDDDD", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = ParameterDriver(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::utils::TimeSpanMap a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::TimeSpanMap a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            ParameterDriver object((jobject) NULL);

            if (!parseArgs(args, "sKKDDDD", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::utils::TimeSpanMap::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = ParameterDriver(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_ParameterDriver_addObserver(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::utils::ParameterObserver a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ParameterObserver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addObserver(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addObserver", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_addSpanAtDate(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addSpanAtDate(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addSpanAtDate", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_addSpans(t_ParameterDriver *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addSpans(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addSpans", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getMaxValue(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getMinValue(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getName(t_ParameterDriver *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ParameterDriver_getNameSpan(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getNameSpan(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getNameSpan", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getNamesSpanMap(t_ParameterDriver *self)
      {
        ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
        OBJ_CALL(result = self->object.getNamesSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_ParameterDriver_getNbOfValues(t_ParameterDriver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbOfValues());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriver_getNormalizedValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormalizedValue());
            return PyFloat_FromDouble((double) result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormalizedValue(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNormalizedValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getObservers(t_ParameterDriver *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getObservers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterObserver));
      }

      static PyObject *t_ParameterDriver_getReferenceDate(t_ParameterDriver *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_ParameterDriver_getReferenceValue(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReferenceValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getScale(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getScale());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getTransitionDates(t_ParameterDriver *self)
      {
        JArray< ::org::orekit::time::AbsoluteDate > result((jobject) NULL);
        OBJ_CALL(result = self->object.getTransitionDates());
        return JArray<jobject>(result.this$).wrap(::org::orekit::time::t_AbsoluteDate::wrap_jobject);
      }

      static PyObject *t_ParameterDriver_getValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jdouble result;
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getValue(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

            if (!parseArgs(args, "IK", ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.getValue(a0, a1));
              return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            jint a0;
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

            if (!parseArgs(args, "IKk", ::java::util::Map::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getValue(a0, a1, a2));
              return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getValueContinuousEstimation(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getValueContinuousEstimation(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getValueContinuousEstimation", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getValueSpanMap(t_ParameterDriver *self)
      {
        ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
        OBJ_CALL(result = self->object.getValueSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(Double));
      }

      static PyObject *t_ParameterDriver_getValueStepEstimation(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getValueStepEstimation(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getValueStepEstimation", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getValues(t_ParameterDriver *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValues());
        return result.wrap();
      }

      static PyObject *t_ParameterDriver_isContinuousEstimation(t_ParameterDriver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isContinuousEstimation());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ParameterDriver_isSelected(t_ParameterDriver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSelected());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ParameterDriver_removeObserver(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::utils::ParameterObserver a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ParameterObserver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.removeObserver(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "removeObserver", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_replaceObserver(t_ParameterDriver *self, PyObject *args)
      {
        ::org::orekit::utils::ParameterObserver a0((jobject) NULL);
        ::org::orekit::utils::ParameterObserver a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterObserver::initializeClass, ::org::orekit::utils::ParameterObserver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.replaceObserver(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "replaceObserver", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setContinuousEstimation(t_ParameterDriver *self, PyObject *arg)
      {
        jboolean a0;

        if (!parseArg(arg, "Z", &a0))
        {
          OBJ_CALL(self->object.setContinuousEstimation(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setContinuousEstimation", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setMaxValue(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMaxValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxValue", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setMinValue(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMinValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMinValue", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setName(t_ParameterDriver *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(self->object.setName(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setName", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setNormalizedValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setNormalizedValue(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setNormalizedValue(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setNormalizedValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setReferenceDate(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setReferenceDate(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceDate", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setReferenceValue(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setReferenceValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceValue", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setScale(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setScale(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScale", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setSelected(t_ParameterDriver *self, PyObject *arg)
      {
        jboolean a0;

        if (!parseArg(arg, "Z", &a0))
        {
          OBJ_CALL(self->object.setSelected(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSelected", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setValue(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setValue(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setValueSpanMap(t_ParameterDriver *self, PyObject *arg)
      {
        ParameterDriver a0((jobject) NULL);

        if (!parseArg(arg, "k", ParameterDriver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setValueSpanMap(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setValueSpanMap", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_toString(t_ParameterDriver *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ParameterDriver), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_ParameterDriver_get__continuousEstimation(t_ParameterDriver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isContinuousEstimation());
        Py_RETURN_BOOL(value);
      }
      static int t_ParameterDriver_set__continuousEstimation(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jboolean value;
          if (!parseArg(arg, "Z", &value))
          {
            INT_CALL(self->object.setContinuousEstimation(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "continuousEstimation", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__maxValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__maxValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMaxValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__minValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__minValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMinValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "minValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__name(t_ParameterDriver *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
      static int t_ParameterDriver_set__name(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          ::java::lang::String value((jobject) NULL);
          if (!parseArg(arg, "s", &value))
          {
            INT_CALL(self->object.setName(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "name", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__namesSpanMap(t_ParameterDriver *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
        OBJ_CALL(value = self->object.getNamesSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
      }

      static PyObject *t_ParameterDriver_get__nbOfValues(t_ParameterDriver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbOfValues());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ParameterDriver_get__normalizedValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormalizedValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__normalizedValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setNormalizedValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "normalizedValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__observers(t_ParameterDriver *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getObservers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ParameterDriver_get__referenceDate(t_ParameterDriver *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
      static int t_ParameterDriver_set__referenceDate(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            INT_CALL(self->object.setReferenceDate(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceDate", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__referenceValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReferenceValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__referenceValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setReferenceValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__scale(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getScale());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__scale(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setScale(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scale", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__selected(t_ParameterDriver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSelected());
        Py_RETURN_BOOL(value);
      }
      static int t_ParameterDriver_set__selected(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jboolean value;
          if (!parseArg(arg, "Z", &value))
          {
            INT_CALL(self->object.setSelected(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "selected", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__transitionDates(t_ParameterDriver *self, void *data)
      {
        JArray< ::org::orekit::time::AbsoluteDate > value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransitionDates());
        return JArray<jobject>(value.this$).wrap(::org::orekit::time::t_AbsoluteDate::wrap_jobject);
      }

      static PyObject *t_ParameterDriver_get__value(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__value(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__valueSpanMap(t_ParameterDriver *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
        OBJ_CALL(value = self->object.getValueSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
      }
      static int t_ParameterDriver_set__valueSpanMap(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          ParameterDriver value((jobject) NULL);
          if (!parseArg(arg, "k", ParameterDriver::initializeClass, &value))
          {
            INT_CALL(self->object.setValueSpanMap(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "valueSpanMap", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__values(t_ParameterDriver *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValues());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ComplexODEState.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexODEState::class$ = NULL;
      jmethodID *ComplexODEState::mids$ = NULL;
      bool ComplexODEState::live$ = false;

      jclass ComplexODEState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexODEState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_762610eefab38248] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_init$_324472bfdf5fc794] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/complex/Complex;[[Lorg/hipparchus/complex/Complex;)V");
          mids$[mid_getCompleteState_a42e219c62839d3d] = env->getMethodID(cls, "getCompleteState", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getCompleteStateDimension_f2f64475e4580546] = env->getMethodID(cls, "getCompleteStateDimension", "()I");
          mids$[mid_getNumberOfSecondaryStates_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfSecondaryStates", "()I");
          mids$[mid_getPrimaryState_a42e219c62839d3d] = env->getMethodID(cls, "getPrimaryState", "()[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getPrimaryStateDimension_f2f64475e4580546] = env->getMethodID(cls, "getPrimaryStateDimension", "()I");
          mids$[mid_getSecondaryState_2169290c4dd2441c] = env->getMethodID(cls, "getSecondaryState", "(I)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getSecondaryStateDimension_38565d58479aa24a] = env->getMethodID(cls, "getSecondaryStateDimension", "(I)I");
          mids$[mid_getTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTime", "()D");
          mids$[mid_copy_8436d88d682eec16] = env->getMethodID(cls, "copy", "([[Lorg/hipparchus/complex/Complex;)[[Lorg/hipparchus/complex/Complex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ComplexODEState::ComplexODEState(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_762610eefab38248, a0, a1.this$)) {}

      ComplexODEState::ComplexODEState(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, const JArray< JArray< ::org::hipparchus::complex::Complex > > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_324472bfdf5fc794, a0, a1.this$, a2.this$)) {}

      JArray< ::org::hipparchus::complex::Complex > ComplexODEState::getCompleteState() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getCompleteState_a42e219c62839d3d]));
      }

      jint ComplexODEState::getCompleteStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getCompleteStateDimension_f2f64475e4580546]);
      }

      jint ComplexODEState::getNumberOfSecondaryStates() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfSecondaryStates_f2f64475e4580546]);
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEState::getPrimaryState() const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getPrimaryState_a42e219c62839d3d]));
      }

      jint ComplexODEState::getPrimaryStateDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getPrimaryStateDimension_f2f64475e4580546]);
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexODEState::getSecondaryState(jint a0) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_getSecondaryState_2169290c4dd2441c], a0));
      }

      jint ComplexODEState::getSecondaryStateDimension(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_getSecondaryStateDimension_38565d58479aa24a], a0);
      }

      jdouble ComplexODEState::getTime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTime_456d9a2f64d6b28d]);
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
      static PyObject *t_ComplexODEState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexODEState_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ComplexODEState_init_(t_ComplexODEState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ComplexODEState_getCompleteState(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getCompleteStateDimension(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getNumberOfSecondaryStates(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getPrimaryState(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getPrimaryStateDimension(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_getSecondaryState(t_ComplexODEState *self, PyObject *arg);
      static PyObject *t_ComplexODEState_getSecondaryStateDimension(t_ComplexODEState *self, PyObject *arg);
      static PyObject *t_ComplexODEState_getTime(t_ComplexODEState *self);
      static PyObject *t_ComplexODEState_get__completeState(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__completeStateDimension(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__numberOfSecondaryStates(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__primaryState(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__primaryStateDimension(t_ComplexODEState *self, void *data);
      static PyObject *t_ComplexODEState_get__time(t_ComplexODEState *self, void *data);
      static PyGetSetDef t_ComplexODEState__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexODEState, completeState),
        DECLARE_GET_FIELD(t_ComplexODEState, completeStateDimension),
        DECLARE_GET_FIELD(t_ComplexODEState, numberOfSecondaryStates),
        DECLARE_GET_FIELD(t_ComplexODEState, primaryState),
        DECLARE_GET_FIELD(t_ComplexODEState, primaryStateDimension),
        DECLARE_GET_FIELD(t_ComplexODEState, time),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexODEState__methods_[] = {
        DECLARE_METHOD(t_ComplexODEState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexODEState, getCompleteState, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getCompleteStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getNumberOfSecondaryStates, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getPrimaryState, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getPrimaryStateDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexODEState, getSecondaryState, METH_O),
        DECLARE_METHOD(t_ComplexODEState, getSecondaryStateDimension, METH_O),
        DECLARE_METHOD(t_ComplexODEState, getTime, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexODEState)[] = {
        { Py_tp_methods, t_ComplexODEState__methods_ },
        { Py_tp_init, (void *) t_ComplexODEState_init_ },
        { Py_tp_getset, t_ComplexODEState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexODEState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexODEState, t_ComplexODEState, ComplexODEState);

      void t_ComplexODEState::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexODEState), &PY_TYPE_DEF(ComplexODEState), module, "ComplexODEState", 0);
      }

      void t_ComplexODEState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEState), "class_", make_descriptor(ComplexODEState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEState), "wrapfn_", make_descriptor(t_ComplexODEState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexODEState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexODEState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexODEState::initializeClass, 1)))
          return NULL;
        return t_ComplexODEState::wrap_Object(ComplexODEState(((t_ComplexODEState *) arg)->object.this$));
      }
      static PyObject *t_ComplexODEState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexODEState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ComplexODEState_init_(t_ComplexODEState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            ComplexODEState object((jobject) NULL);

            if (!parseArgs(args, "D[k", ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ComplexODEState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
            JArray< JArray< ::org::hipparchus::complex::Complex > > a2((jobject) NULL);
            ComplexODEState object((jobject) NULL);

            if (!parseArgs(args, "D[k[[k", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ComplexODEState(a0, a1, a2));
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

      static PyObject *t_ComplexODEState_getCompleteState(t_ComplexODEState *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getCompleteState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_getCompleteStateDimension(t_ComplexODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexODEState_getNumberOfSecondaryStates(t_ComplexODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexODEState_getPrimaryState(t_ComplexODEState *self)
      {
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimaryState());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_getPrimaryStateDimension(t_ComplexODEState *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexODEState_getSecondaryState(t_ComplexODEState *self, PyObject *arg)
      {
        jint a0;
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryState", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEState_getSecondaryStateDimension(t_ComplexODEState *self, PyObject *arg)
      {
        jint a0;
        jint result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getSecondaryStateDimension(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getSecondaryStateDimension", arg);
        return NULL;
      }

      static PyObject *t_ComplexODEState_getTime(t_ComplexODEState *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ComplexODEState_get__completeState(t_ComplexODEState *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getCompleteState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_get__completeStateDimension(t_ComplexODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCompleteStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ComplexODEState_get__numberOfSecondaryStates(t_ComplexODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfSecondaryStates());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ComplexODEState_get__primaryState(t_ComplexODEState *self, void *data)
      {
        JArray< ::org::hipparchus::complex::Complex > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimaryState());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
      }

      static PyObject *t_ComplexODEState_get__primaryStateDimension(t_ComplexODEState *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getPrimaryStateDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ComplexODEState_get__time(t_ComplexODEState *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTime());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3FileType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sp3/SP3FileType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3FileType::class$ = NULL;
        jmethodID *SP3FileType::mids$ = NULL;
        bool SP3FileType::live$ = false;
        SP3FileType *SP3FileType::COMPASS = NULL;
        SP3FileType *SP3FileType::GALILEO = NULL;
        SP3FileType *SP3FileType::GLONASS = NULL;
        SP3FileType *SP3FileType::GPS = NULL;
        SP3FileType *SP3FileType::IRNSS = NULL;
        SP3FileType *SP3FileType::LEO = NULL;
        SP3FileType *SP3FileType::MIXED = NULL;
        SP3FileType *SP3FileType::QZSS = NULL;
        SP3FileType *SP3FileType::SBAS = NULL;
        SP3FileType *SP3FileType::UNDEFINED = NULL;

        jclass SP3FileType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3FileType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getKey_0090f7797e403f43] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
            mids$[mid_parse_974354508add9316] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3FileType;");
            mids$[mid_valueOf_974354508add9316] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/sp3/SP3FileType;");
            mids$[mid_values_7f4ea422c67401ce] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/sp3/SP3FileType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            COMPASS = new SP3FileType(env->getStaticObjectField(cls, "COMPASS", "Lorg/orekit/files/sp3/SP3FileType;"));
            GALILEO = new SP3FileType(env->getStaticObjectField(cls, "GALILEO", "Lorg/orekit/files/sp3/SP3FileType;"));
            GLONASS = new SP3FileType(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/files/sp3/SP3FileType;"));
            GPS = new SP3FileType(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/files/sp3/SP3FileType;"));
            IRNSS = new SP3FileType(env->getStaticObjectField(cls, "IRNSS", "Lorg/orekit/files/sp3/SP3FileType;"));
            LEO = new SP3FileType(env->getStaticObjectField(cls, "LEO", "Lorg/orekit/files/sp3/SP3FileType;"));
            MIXED = new SP3FileType(env->getStaticObjectField(cls, "MIXED", "Lorg/orekit/files/sp3/SP3FileType;"));
            QZSS = new SP3FileType(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/files/sp3/SP3FileType;"));
            SBAS = new SP3FileType(env->getStaticObjectField(cls, "SBAS", "Lorg/orekit/files/sp3/SP3FileType;"));
            UNDEFINED = new SP3FileType(env->getStaticObjectField(cls, "UNDEFINED", "Lorg/orekit/files/sp3/SP3FileType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String SP3FileType::getKey() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_0090f7797e403f43]));
        }

        SP3FileType SP3FileType::parse(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3FileType(env->callStaticObjectMethod(cls, mids$[mid_parse_974354508add9316], a0.this$));
        }

        SP3FileType SP3FileType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SP3FileType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_974354508add9316], a0.this$));
        }

        JArray< SP3FileType > SP3FileType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< SP3FileType >(env->callStaticObjectMethod(cls, mids$[mid_values_7f4ea422c67401ce]));
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
      namespace sp3 {
        static PyObject *t_SP3FileType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3FileType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3FileType_of_(t_SP3FileType *self, PyObject *args);
        static PyObject *t_SP3FileType_getKey(t_SP3FileType *self);
        static PyObject *t_SP3FileType_parse(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3FileType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_SP3FileType_values(PyTypeObject *type);
        static PyObject *t_SP3FileType_get__key(t_SP3FileType *self, void *data);
        static PyObject *t_SP3FileType_get__parameters_(t_SP3FileType *self, void *data);
        static PyGetSetDef t_SP3FileType__fields_[] = {
          DECLARE_GET_FIELD(t_SP3FileType, key),
          DECLARE_GET_FIELD(t_SP3FileType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3FileType__methods_[] = {
          DECLARE_METHOD(t_SP3FileType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, of_, METH_VARARGS),
          DECLARE_METHOD(t_SP3FileType, getKey, METH_NOARGS),
          DECLARE_METHOD(t_SP3FileType, parse, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SP3FileType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3FileType)[] = {
          { Py_tp_methods, t_SP3FileType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SP3FileType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3FileType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(SP3FileType, t_SP3FileType, SP3FileType);
        PyObject *t_SP3FileType::wrap_Object(const SP3FileType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3FileType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3FileType *self = (t_SP3FileType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SP3FileType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3FileType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3FileType *self = (t_SP3FileType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SP3FileType::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3FileType), &PY_TYPE_DEF(SP3FileType), module, "SP3FileType", 0);
        }

        void t_SP3FileType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "class_", make_descriptor(SP3FileType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "wrapfn_", make_descriptor(t_SP3FileType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3FileType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "COMPASS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::COMPASS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "GALILEO", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::GALILEO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "GLONASS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::GLONASS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "GPS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::GPS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "IRNSS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::IRNSS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "LEO", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::LEO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "MIXED", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::MIXED)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "QZSS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::QZSS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "SBAS", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::SBAS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3FileType), "UNDEFINED", make_descriptor(t_SP3FileType::wrap_Object(*SP3FileType::UNDEFINED)));
        }

        static PyObject *t_SP3FileType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3FileType::initializeClass, 1)))
            return NULL;
          return t_SP3FileType::wrap_Object(SP3FileType(((t_SP3FileType *) arg)->object.this$));
        }
        static PyObject *t_SP3FileType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3FileType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3FileType_of_(t_SP3FileType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SP3FileType_getKey(t_SP3FileType *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getKey());
          return j2p(result);
        }

        static PyObject *t_SP3FileType_parse(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3FileType result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3FileType::parse(a0));
            return t_SP3FileType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parse", arg);
          return NULL;
        }

        static PyObject *t_SP3FileType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          SP3FileType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::sp3::SP3FileType::valueOf(a0));
            return t_SP3FileType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_SP3FileType_values(PyTypeObject *type)
        {
          JArray< SP3FileType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::sp3::SP3FileType::values());
          return JArray<jobject>(result.this$).wrap(t_SP3FileType::wrap_jobject);
        }
        static PyObject *t_SP3FileType_get__parameters_(t_SP3FileType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SP3FileType_get__key(t_SP3FileType *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getKey());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldElevationExtremumDetector.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldElevationExtremumDetector::class$ = NULL;
        jmethodID *FieldElevationExtremumDetector::mids$ = NULL;
        bool FieldElevationExtremumDetector::live$ = false;

        jclass FieldElevationExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldElevationExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6ca81eaf03a89fb6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_3630f374a349bed6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_cc79c2733879de35] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getElevation_cc79c2733879de35] = env->getMethodID(cls, "getElevation", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getTopocentricFrame_52fc31c455206160] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_create_bb3ef5e9796d1922] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldElevationExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldElevationExtremumDetector::FieldElevationExtremumDetector(const ::org::hipparchus::Field & a0, const ::org::orekit::frames::TopocentricFrame & a1) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_6ca81eaf03a89fb6, a0.this$, a1.this$)) {}

        FieldElevationExtremumDetector::FieldElevationExtremumDetector(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_3630f374a349bed6, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldElevationExtremumDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_cc79c2733879de35], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldElevationExtremumDetector::getElevation(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getElevation_cc79c2733879de35], a0.this$));
        }

        ::org::orekit::frames::TopocentricFrame FieldElevationExtremumDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_52fc31c455206160]));
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
        static PyObject *t_FieldElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldElevationExtremumDetector_of_(t_FieldElevationExtremumDetector *self, PyObject *args);
        static int t_FieldElevationExtremumDetector_init_(t_FieldElevationExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldElevationExtremumDetector_g(t_FieldElevationExtremumDetector *self, PyObject *args);
        static PyObject *t_FieldElevationExtremumDetector_getElevation(t_FieldElevationExtremumDetector *self, PyObject *arg);
        static PyObject *t_FieldElevationExtremumDetector_getTopocentricFrame(t_FieldElevationExtremumDetector *self);
        static PyObject *t_FieldElevationExtremumDetector_get__topocentricFrame(t_FieldElevationExtremumDetector *self, void *data);
        static PyObject *t_FieldElevationExtremumDetector_get__parameters_(t_FieldElevationExtremumDetector *self, void *data);
        static PyGetSetDef t_FieldElevationExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldElevationExtremumDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_FieldElevationExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldElevationExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_FieldElevationExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, getElevation, METH_O),
          DECLARE_METHOD(t_FieldElevationExtremumDetector, getTopocentricFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldElevationExtremumDetector)[] = {
          { Py_tp_methods, t_FieldElevationExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_FieldElevationExtremumDetector_init_ },
          { Py_tp_getset, t_FieldElevationExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldElevationExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldElevationExtremumDetector, t_FieldElevationExtremumDetector, FieldElevationExtremumDetector);
        PyObject *t_FieldElevationExtremumDetector::wrap_Object(const FieldElevationExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationExtremumDetector *self = (t_FieldElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldElevationExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldElevationExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldElevationExtremumDetector *self = (t_FieldElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldElevationExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldElevationExtremumDetector), &PY_TYPE_DEF(FieldElevationExtremumDetector), module, "FieldElevationExtremumDetector", 0);
        }

        void t_FieldElevationExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationExtremumDetector), "class_", make_descriptor(FieldElevationExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationExtremumDetector), "wrapfn_", make_descriptor(t_FieldElevationExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldElevationExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldElevationExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_FieldElevationExtremumDetector::wrap_Object(FieldElevationExtremumDetector(((t_FieldElevationExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldElevationExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldElevationExtremumDetector_of_(t_FieldElevationExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldElevationExtremumDetector_init_(t_FieldElevationExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::TopocentricFrame a1((jobject) NULL);
              FieldElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
              {
                INT_CALL(object = FieldElevationExtremumDetector(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              FieldElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldElevationExtremumDetector(a0, a1, a2));
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

        static PyObject *t_FieldElevationExtremumDetector_g(t_FieldElevationExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldElevationExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldElevationExtremumDetector_getElevation(t_FieldElevationExtremumDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.getElevation(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", arg);
          return NULL;
        }

        static PyObject *t_FieldElevationExtremumDetector_getTopocentricFrame(t_FieldElevationExtremumDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }
        static PyObject *t_FieldElevationExtremumDetector_get__parameters_(t_FieldElevationExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldElevationExtremumDetector_get__topocentricFrame(t_FieldElevationExtremumDetector *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonPotentialCoefficientsReader.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/time/TimeScale.h"
#include "java/io/InputStream.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "java/text/ParseException.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonPotentialCoefficientsReader::class$ = NULL;
          jmethodID *PythonPotentialCoefficientsReader::mids$ = NULL;
          bool PythonPotentialCoefficientsReader::live$ = false;

          jclass PythonPotentialCoefficientsReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonPotentialCoefficientsReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d1dd1bdcf55f8f80] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_ead6ed0365e2cf97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getProvider_086897fc27688c23] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonPotentialCoefficientsReader::PythonPotentialCoefficientsReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_d1dd1bdcf55f8f80, a0.this$, a1)) {}

          PythonPotentialCoefficientsReader::PythonPotentialCoefficientsReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_ead6ed0365e2cf97, a0.this$, a1, a2.this$)) {}

          void PythonPotentialCoefficientsReader::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonPotentialCoefficientsReader::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonPotentialCoefficientsReader::pythonExtension(jlong a0) const
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
          static PyObject *t_PythonPotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonPotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonPotentialCoefficientsReader_init_(t_PythonPotentialCoefficientsReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonPotentialCoefficientsReader_finalize(t_PythonPotentialCoefficientsReader *self);
          static PyObject *t_PythonPotentialCoefficientsReader_pythonExtension(t_PythonPotentialCoefficientsReader *self, PyObject *args);
          static jobject JNICALL t_PythonPotentialCoefficientsReader_getProvider0(JNIEnv *jenv, jobject jobj, jboolean a0, jint a1, jint a2);
          static void JNICALL t_PythonPotentialCoefficientsReader_loadData1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonPotentialCoefficientsReader_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonPotentialCoefficientsReader_get__self(t_PythonPotentialCoefficientsReader *self, void *data);
          static PyGetSetDef t_PythonPotentialCoefficientsReader__fields_[] = {
            DECLARE_GET_FIELD(t_PythonPotentialCoefficientsReader, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonPotentialCoefficientsReader__methods_[] = {
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonPotentialCoefficientsReader, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonPotentialCoefficientsReader)[] = {
            { Py_tp_methods, t_PythonPotentialCoefficientsReader__methods_ },
            { Py_tp_init, (void *) t_PythonPotentialCoefficientsReader_init_ },
            { Py_tp_getset, t_PythonPotentialCoefficientsReader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonPotentialCoefficientsReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(PythonPotentialCoefficientsReader, t_PythonPotentialCoefficientsReader, PythonPotentialCoefficientsReader);

          void t_PythonPotentialCoefficientsReader::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonPotentialCoefficientsReader), &PY_TYPE_DEF(PythonPotentialCoefficientsReader), module, "PythonPotentialCoefficientsReader", 1);
          }

          void t_PythonPotentialCoefficientsReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPotentialCoefficientsReader), "class_", make_descriptor(PythonPotentialCoefficientsReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPotentialCoefficientsReader), "wrapfn_", make_descriptor(t_PythonPotentialCoefficientsReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPotentialCoefficientsReader), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonPotentialCoefficientsReader::initializeClass);
            JNINativeMethod methods[] = {
              { "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;", (void *) t_PythonPotentialCoefficientsReader_getProvider0 },
              { "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V", (void *) t_PythonPotentialCoefficientsReader_loadData1 },
              { "pythonDecRef", "()V", (void *) t_PythonPotentialCoefficientsReader_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonPotentialCoefficientsReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonPotentialCoefficientsReader::initializeClass, 1)))
              return NULL;
            return t_PythonPotentialCoefficientsReader::wrap_Object(PythonPotentialCoefficientsReader(((t_PythonPotentialCoefficientsReader *) arg)->object.this$));
          }
          static PyObject *t_PythonPotentialCoefficientsReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonPotentialCoefficientsReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonPotentialCoefficientsReader_init_(t_PythonPotentialCoefficientsReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                PythonPotentialCoefficientsReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = PythonPotentialCoefficientsReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                PythonPotentialCoefficientsReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = PythonPotentialCoefficientsReader(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonPotentialCoefficientsReader_finalize(t_PythonPotentialCoefficientsReader *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonPotentialCoefficientsReader_pythonExtension(t_PythonPotentialCoefficientsReader *self, PyObject *args)
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

          static jobject JNICALL t_PythonPotentialCoefficientsReader_getProvider0(JNIEnv *jenv, jobject jobj, jboolean a0, jint a1, jint a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider value((jobject) NULL);
            PyObject *o0 = (a0 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "getProvider", "Oii", o0, (int) a1, (int) a2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider::initializeClass, &value))
            {
              throwTypeError("getProvider", result);
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

          static void JNICALL t_PythonPotentialCoefficientsReader_loadData1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::java::io::t_InputStream::wrap_Object(::java::io::InputStream(a0));
            PyObject *o1 = env->fromJString((jstring) a1, 0);
            PyObject *result = PyObject_CallMethod(obj, "loadData", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonPotentialCoefficientsReader_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonPotentialCoefficientsReader::mids$[PythonPotentialCoefficientsReader::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonPotentialCoefficientsReader_get__self(t_PythonPotentialCoefficientsReader *self, void *data)
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
#include "org/hipparchus/distribution/continuous/ParetoDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ParetoDistribution::class$ = NULL;
        jmethodID *ParetoDistribution::mids$ = NULL;
        bool ParetoDistribution::live$ = false;

        jclass ParetoDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ParetoDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_456d9a2f64d6b28d] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_456d9a2f64d6b28d] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_0ba5fed9597b693e] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ParetoDistribution::ParetoDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ParetoDistribution::ParetoDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        ParetoDistribution::ParetoDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        jdouble ParetoDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble ParetoDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble ParetoDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble ParetoDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble ParetoDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_456d9a2f64d6b28d]);
        }

        jdouble ParetoDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_456d9a2f64d6b28d]);
        }

        jdouble ParetoDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble ParetoDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jboolean ParetoDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble ParetoDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_0ba5fed9597b693e], a0);
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
    namespace distribution {
      namespace continuous {
        static PyObject *t_ParetoDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParetoDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ParetoDistribution_init_(t_ParetoDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ParetoDistribution_cumulativeProbability(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_density(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getNumericalMean(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getNumericalVariance(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getScale(t_ParetoDistribution *self);
        static PyObject *t_ParetoDistribution_getShape(t_ParetoDistribution *self);
        static PyObject *t_ParetoDistribution_getSupportLowerBound(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_getSupportUpperBound(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_isSupportConnected(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_logDensity(t_ParetoDistribution *self, PyObject *args);
        static PyObject *t_ParetoDistribution_get__numericalMean(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__numericalVariance(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__scale(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__shape(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__supportConnected(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__supportLowerBound(t_ParetoDistribution *self, void *data);
        static PyObject *t_ParetoDistribution_get__supportUpperBound(t_ParetoDistribution *self, void *data);
        static PyGetSetDef t_ParetoDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ParetoDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ParetoDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ParetoDistribution, scale),
          DECLARE_GET_FIELD(t_ParetoDistribution, shape),
          DECLARE_GET_FIELD(t_ParetoDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ParetoDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ParetoDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ParetoDistribution__methods_[] = {
          DECLARE_METHOD(t_ParetoDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParetoDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParetoDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_ParetoDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_ParetoDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ParetoDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ParetoDistribution)[] = {
          { Py_tp_methods, t_ParetoDistribution__methods_ },
          { Py_tp_init, (void *) t_ParetoDistribution_init_ },
          { Py_tp_getset, t_ParetoDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ParetoDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ParetoDistribution, t_ParetoDistribution, ParetoDistribution);

        void t_ParetoDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ParetoDistribution), &PY_TYPE_DEF(ParetoDistribution), module, "ParetoDistribution", 0);
        }

        void t_ParetoDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParetoDistribution), "class_", make_descriptor(ParetoDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParetoDistribution), "wrapfn_", make_descriptor(t_ParetoDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParetoDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ParetoDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ParetoDistribution::initializeClass, 1)))
            return NULL;
          return t_ParetoDistribution::wrap_Object(ParetoDistribution(((t_ParetoDistribution *) arg)->object.this$));
        }
        static PyObject *t_ParetoDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ParetoDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ParetoDistribution_init_(t_ParetoDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ParetoDistribution object((jobject) NULL);

              INT_CALL(object = ParetoDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              ParetoDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = ParetoDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ParetoDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = ParetoDistribution(a0, a1, a2));
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

        static PyObject *t_ParetoDistribution_cumulativeProbability(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ParetoDistribution_density(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ParetoDistribution_getNumericalMean(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ParetoDistribution_getNumericalVariance(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ParetoDistribution_getScale(t_ParetoDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ParetoDistribution_getShape(t_ParetoDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ParetoDistribution_getSupportLowerBound(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ParetoDistribution_getSupportUpperBound(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ParetoDistribution_isSupportConnected(t_ParetoDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ParetoDistribution_logDensity(t_ParetoDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParetoDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_ParetoDistribution_get__numericalMean(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__numericalVariance(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__scale(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__shape(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__supportConnected(t_ParetoDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ParetoDistribution_get__supportLowerBound(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ParetoDistribution_get__supportUpperBound(t_ParetoDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/FieldDeepSDP4.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldDeepSDP4::class$ = NULL;
          jmethodID *FieldDeepSDP4::mids$ = NULL;
          bool FieldDeepSDP4::live$ = false;

          jclass FieldDeepSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldDeepSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_07248e1efc10aa6e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_8f2042251d084a47] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_luniSolarTermsComputation_7ae3461a92a43152] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_03a16642f77779e7] = env->getMethodID(cls, "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepPeriodicEffects_03a16642f77779e7] = env->getMethodID(cls, "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldDeepSDP4::FieldDeepSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) : ::org::orekit::propagation::analytical::tle::FieldSDP4(env->newObject(initializeClass, &mids$, mid_init$_07248e1efc10aa6e, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldDeepSDP4::FieldDeepSDP4(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4) : ::org::orekit::propagation::analytical::tle::FieldSDP4(env->newObject(initializeClass, &mids$, mid_init$_8f2042251d084a47, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
          static PyObject *t_FieldDeepSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDeepSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldDeepSDP4_of_(t_FieldDeepSDP4 *self, PyObject *args);
          static int t_FieldDeepSDP4_init_(t_FieldDeepSDP4 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldDeepSDP4_get__parameters_(t_FieldDeepSDP4 *self, void *data);
          static PyGetSetDef t_FieldDeepSDP4__fields_[] = {
            DECLARE_GET_FIELD(t_FieldDeepSDP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldDeepSDP4__methods_[] = {
            DECLARE_METHOD(t_FieldDeepSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDeepSDP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldDeepSDP4, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldDeepSDP4)[] = {
            { Py_tp_methods, t_FieldDeepSDP4__methods_ },
            { Py_tp_init, (void *) t_FieldDeepSDP4_init_ },
            { Py_tp_getset, t_FieldDeepSDP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldDeepSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldSDP4),
            NULL
          };

          DEFINE_TYPE(FieldDeepSDP4, t_FieldDeepSDP4, FieldDeepSDP4);
          PyObject *t_FieldDeepSDP4::wrap_Object(const FieldDeepSDP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDeepSDP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDeepSDP4 *self = (t_FieldDeepSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldDeepSDP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldDeepSDP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldDeepSDP4 *self = (t_FieldDeepSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldDeepSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldDeepSDP4), &PY_TYPE_DEF(FieldDeepSDP4), module, "FieldDeepSDP4", 0);
          }

          void t_FieldDeepSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDeepSDP4), "class_", make_descriptor(FieldDeepSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDeepSDP4), "wrapfn_", make_descriptor(t_FieldDeepSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDeepSDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldDeepSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldDeepSDP4::initializeClass, 1)))
              return NULL;
            return t_FieldDeepSDP4::wrap_Object(FieldDeepSDP4(((t_FieldDeepSDP4 *) arg)->object.this$));
          }
          static PyObject *t_FieldDeepSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldDeepSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldDeepSDP4_of_(t_FieldDeepSDP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldDeepSDP4_init_(t_FieldDeepSDP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                FieldDeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "KkK[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldDeepSDP4(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
                PyTypeObject **p4;
                FieldDeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldDeepSDP4(a0, a1, a2, a3, a4));
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
          static PyObject *t_FieldDeepSDP4_get__parameters_(t_FieldDeepSDP4 *self, void *data)
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
#include "org/orekit/files/ilrs/CRD$CalibrationDetail.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$CalibrationDetail::class$ = NULL;
        jmethodID *CRD$CalibrationDetail::mids$ = NULL;
        bool CRD$CalibrationDetail::live$ = false;

        jclass CRD$CalibrationDetail::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$CalibrationDetail");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_89dd5677feda5af6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;ILjava/lang/String;IIDDDDDDDIIIID)V");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$CalibrationDetail::CRD$CalibrationDetail(const ::org::orekit::time::AbsoluteDate & a0, jint a1, const ::java::lang::String & a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jint a12, jint a13, jint a14, jint a15, jdouble a16) : ::org::orekit::files::ilrs::CRD$Calibration(env->newObject(initializeClass, &mids$, mid_init$_89dd5677feda5af6, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16)) {}

        ::java::lang::String CRD$CalibrationDetail::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
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
      namespace ilrs {
        static PyObject *t_CRD$CalibrationDetail_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$CalibrationDetail_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$CalibrationDetail_init_(t_CRD$CalibrationDetail *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$CalibrationDetail_toCrdString(t_CRD$CalibrationDetail *self, PyObject *args);

        static PyMethodDef t_CRD$CalibrationDetail__methods_[] = {
          DECLARE_METHOD(t_CRD$CalibrationDetail, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CalibrationDetail, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$CalibrationDetail, toCrdString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$CalibrationDetail)[] = {
          { Py_tp_methods, t_CRD$CalibrationDetail__methods_ },
          { Py_tp_init, (void *) t_CRD$CalibrationDetail_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$CalibrationDetail)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRD$Calibration),
          NULL
        };

        DEFINE_TYPE(CRD$CalibrationDetail, t_CRD$CalibrationDetail, CRD$CalibrationDetail);

        void t_CRD$CalibrationDetail::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$CalibrationDetail), &PY_TYPE_DEF(CRD$CalibrationDetail), module, "CRD$CalibrationDetail", 0);
        }

        void t_CRD$CalibrationDetail::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CalibrationDetail), "class_", make_descriptor(CRD$CalibrationDetail::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CalibrationDetail), "wrapfn_", make_descriptor(t_CRD$CalibrationDetail::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$CalibrationDetail), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$CalibrationDetail_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$CalibrationDetail::initializeClass, 1)))
            return NULL;
          return t_CRD$CalibrationDetail::wrap_Object(CRD$CalibrationDetail(((t_CRD$CalibrationDetail *) arg)->object.this$));
        }
        static PyObject *t_CRD$CalibrationDetail_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$CalibrationDetail::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$CalibrationDetail_init_(t_CRD$CalibrationDetail *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jint a1;
          ::java::lang::String a2((jobject) NULL);
          jint a3;
          jint a4;
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jdouble a8;
          jdouble a9;
          jdouble a10;
          jdouble a11;
          jint a12;
          jint a13;
          jint a14;
          jint a15;
          jdouble a16;
          CRD$CalibrationDetail object((jobject) NULL);

          if (!parseArgs(args, "kIsIIDDDDDDDIIIID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16))
          {
            INT_CALL(object = CRD$CalibrationDetail(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$CalibrationDetail_toCrdString(t_CRD$CalibrationDetail *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$CalibrationDetail), (PyObject *) self, "toCrdString", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmCommonMetadataWriter::class$ = NULL;
            jmethodID *AdmCommonMetadataWriter::mids$ = NULL;
            bool AdmCommonMetadataWriter::live$ = false;

            jclass AdmCommonMetadataWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_c22f276e693071b6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;)V");
                mids$[mid_writeContent_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AdmCommonMetadataWriter::AdmCommonMetadataWriter(const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata & a0) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_c22f276e693071b6, a0.this$)) {}
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
            static PyObject *t_AdmCommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmCommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AdmCommonMetadataWriter_init_(t_AdmCommonMetadataWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_AdmCommonMetadataWriter__methods_[] = {
              DECLARE_METHOD(t_AdmCommonMetadataWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmCommonMetadataWriter)[] = {
              { Py_tp_methods, t_AdmCommonMetadataWriter__methods_ },
              { Py_tp_init, (void *) t_AdmCommonMetadataWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmCommonMetadataWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(AdmCommonMetadataWriter, t_AdmCommonMetadataWriter, AdmCommonMetadataWriter);

            void t_AdmCommonMetadataWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmCommonMetadataWriter), &PY_TYPE_DEF(AdmCommonMetadataWriter), module, "AdmCommonMetadataWriter", 0);
            }

            void t_AdmCommonMetadataWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataWriter), "class_", make_descriptor(AdmCommonMetadataWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataWriter), "wrapfn_", make_descriptor(t_AdmCommonMetadataWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AdmCommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmCommonMetadataWriter::initializeClass, 1)))
                return NULL;
              return t_AdmCommonMetadataWriter::wrap_Object(AdmCommonMetadataWriter(((t_AdmCommonMetadataWriter *) arg)->object.this$));
            }
            static PyObject *t_AdmCommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmCommonMetadataWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AdmCommonMetadataWriter_init_(t_AdmCommonMetadataWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata a0((jobject) NULL);
              AdmCommonMetadataWriter object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::files::ccsds::ndm::adm::AdmMetadata::initializeClass, &a0))
              {
                INT_CALL(object = AdmCommonMetadataWriter(a0));
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
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *Control3DVectorCostType::class$ = NULL;
        jmethodID *Control3DVectorCostType::mids$ = NULL;
        bool Control3DVectorCostType::live$ = false;
        Control3DVectorCostType *Control3DVectorCostType::INF_NORM = NULL;
        Control3DVectorCostType *Control3DVectorCostType::NONE = NULL;
        Control3DVectorCostType *Control3DVectorCostType::ONE_NORM = NULL;
        Control3DVectorCostType *Control3DVectorCostType::TWO_NORM = NULL;

        jclass Control3DVectorCostType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/Control3DVectorCostType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluate_561f21e3ac14fa34] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_evaluate_80b2470b9511edd1] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
            mids$[mid_valueOf_5b136ac3771fe77f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_values_8872ca4503b3b756] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            INF_NORM = new Control3DVectorCostType(env->getStaticObjectField(cls, "INF_NORM", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            NONE = new Control3DVectorCostType(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            ONE_NORM = new Control3DVectorCostType(env->getStaticObjectField(cls, "ONE_NORM", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            TWO_NORM = new Control3DVectorCostType(env->getStaticObjectField(cls, "TWO_NORM", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement Control3DVectorCostType::evaluate(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_561f21e3ac14fa34], a0.this$));
        }

        jdouble Control3DVectorCostType::evaluate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_80b2470b9511edd1], a0.this$);
        }

        Control3DVectorCostType Control3DVectorCostType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Control3DVectorCostType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5b136ac3771fe77f], a0.this$));
        }

        JArray< Control3DVectorCostType > Control3DVectorCostType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Control3DVectorCostType >(env->callStaticObjectMethod(cls, mids$[mid_values_8872ca4503b3b756]));
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
      namespace maneuvers {
        static PyObject *t_Control3DVectorCostType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Control3DVectorCostType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Control3DVectorCostType_of_(t_Control3DVectorCostType *self, PyObject *args);
        static PyObject *t_Control3DVectorCostType_evaluate(t_Control3DVectorCostType *self, PyObject *args);
        static PyObject *t_Control3DVectorCostType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Control3DVectorCostType_values(PyTypeObject *type);
        static PyObject *t_Control3DVectorCostType_get__parameters_(t_Control3DVectorCostType *self, void *data);
        static PyGetSetDef t_Control3DVectorCostType__fields_[] = {
          DECLARE_GET_FIELD(t_Control3DVectorCostType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Control3DVectorCostType__methods_[] = {
          DECLARE_METHOD(t_Control3DVectorCostType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Control3DVectorCostType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Control3DVectorCostType, of_, METH_VARARGS),
          DECLARE_METHOD(t_Control3DVectorCostType, evaluate, METH_VARARGS),
          DECLARE_METHOD(t_Control3DVectorCostType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Control3DVectorCostType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Control3DVectorCostType)[] = {
          { Py_tp_methods, t_Control3DVectorCostType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Control3DVectorCostType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Control3DVectorCostType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Control3DVectorCostType, t_Control3DVectorCostType, Control3DVectorCostType);
        PyObject *t_Control3DVectorCostType::wrap_Object(const Control3DVectorCostType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Control3DVectorCostType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Control3DVectorCostType *self = (t_Control3DVectorCostType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Control3DVectorCostType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Control3DVectorCostType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Control3DVectorCostType *self = (t_Control3DVectorCostType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Control3DVectorCostType::install(PyObject *module)
        {
          installType(&PY_TYPE(Control3DVectorCostType), &PY_TYPE_DEF(Control3DVectorCostType), module, "Control3DVectorCostType", 0);
        }

        void t_Control3DVectorCostType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "class_", make_descriptor(Control3DVectorCostType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "wrapfn_", make_descriptor(t_Control3DVectorCostType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "boxfn_", make_descriptor(boxObject));
          env->getClass(Control3DVectorCostType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "INF_NORM", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::INF_NORM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "NONE", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::NONE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "ONE_NORM", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::ONE_NORM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "TWO_NORM", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::TWO_NORM)));
        }

        static PyObject *t_Control3DVectorCostType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Control3DVectorCostType::initializeClass, 1)))
            return NULL;
          return t_Control3DVectorCostType::wrap_Object(Control3DVectorCostType(((t_Control3DVectorCostType *) arg)->object.this$));
        }
        static PyObject *t_Control3DVectorCostType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Control3DVectorCostType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Control3DVectorCostType_of_(t_Control3DVectorCostType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Control3DVectorCostType_evaluate(t_Control3DVectorCostType *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "evaluate", args);
          return NULL;
        }

        static PyObject *t_Control3DVectorCostType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Control3DVectorCostType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::forces::maneuvers::Control3DVectorCostType::valueOf(a0));
            return t_Control3DVectorCostType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Control3DVectorCostType_values(PyTypeObject *type)
        {
          JArray< Control3DVectorCostType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::forces::maneuvers::Control3DVectorCostType::values());
          return JArray<jobject>(result.this$).wrap(t_Control3DVectorCostType::wrap_jobject);
        }
        static PyObject *t_Control3DVectorCostType_get__parameters_(t_Control3DVectorCostType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *CorrelatedRandomVectorGenerator::class$ = NULL;
      jmethodID *CorrelatedRandomVectorGenerator::mids$ = NULL;
      bool CorrelatedRandomVectorGenerator::live$ = false;

      jclass CorrelatedRandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/CorrelatedRandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f383bc87eaf41e5d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DLorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_init$_e87878d3139dcedf] = env->getMethodID(cls, "<init>", "([DLorg/hipparchus/linear/RealMatrix;DLorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_getGenerator_70e84b44c84c7b7a] = env->getMethodID(cls, "getGenerator", "()Lorg/hipparchus/random/NormalizedRandomGenerator;");
          mids$[mid_getRank_f2f64475e4580546] = env->getMethodID(cls, "getRank", "()I");
          mids$[mid_getRootMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getRootMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_nextVector_7cdc325af0834901] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CorrelatedRandomVectorGenerator::CorrelatedRandomVectorGenerator(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, const ::org::hipparchus::random::NormalizedRandomGenerator & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f383bc87eaf41e5d, a0.this$, a1, a2.this$)) {}

      CorrelatedRandomVectorGenerator::CorrelatedRandomVectorGenerator(const JArray< jdouble > & a0, const ::org::hipparchus::linear::RealMatrix & a1, jdouble a2, const ::org::hipparchus::random::NormalizedRandomGenerator & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e87878d3139dcedf, a0.this$, a1.this$, a2, a3.this$)) {}

      ::org::hipparchus::random::NormalizedRandomGenerator CorrelatedRandomVectorGenerator::getGenerator() const
      {
        return ::org::hipparchus::random::NormalizedRandomGenerator(env->callObjectMethod(this$, mids$[mid_getGenerator_70e84b44c84c7b7a]));
      }

      jint CorrelatedRandomVectorGenerator::getRank() const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_f2f64475e4580546]);
      }

      ::org::hipparchus::linear::RealMatrix CorrelatedRandomVectorGenerator::getRootMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRootMatrix_7116bbecdd8ceb21]));
      }

      JArray< jdouble > CorrelatedRandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_7cdc325af0834901]));
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
      static PyObject *t_CorrelatedRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CorrelatedRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CorrelatedRandomVectorGenerator_init_(t_CorrelatedRandomVectorGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CorrelatedRandomVectorGenerator_getGenerator(t_CorrelatedRandomVectorGenerator *self);
      static PyObject *t_CorrelatedRandomVectorGenerator_getRank(t_CorrelatedRandomVectorGenerator *self);
      static PyObject *t_CorrelatedRandomVectorGenerator_getRootMatrix(t_CorrelatedRandomVectorGenerator *self);
      static PyObject *t_CorrelatedRandomVectorGenerator_nextVector(t_CorrelatedRandomVectorGenerator *self);
      static PyObject *t_CorrelatedRandomVectorGenerator_get__generator(t_CorrelatedRandomVectorGenerator *self, void *data);
      static PyObject *t_CorrelatedRandomVectorGenerator_get__rank(t_CorrelatedRandomVectorGenerator *self, void *data);
      static PyObject *t_CorrelatedRandomVectorGenerator_get__rootMatrix(t_CorrelatedRandomVectorGenerator *self, void *data);
      static PyGetSetDef t_CorrelatedRandomVectorGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_CorrelatedRandomVectorGenerator, generator),
        DECLARE_GET_FIELD(t_CorrelatedRandomVectorGenerator, rank),
        DECLARE_GET_FIELD(t_CorrelatedRandomVectorGenerator, rootMatrix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CorrelatedRandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, getGenerator, METH_NOARGS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, getRank, METH_NOARGS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, getRootMatrix, METH_NOARGS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CorrelatedRandomVectorGenerator)[] = {
        { Py_tp_methods, t_CorrelatedRandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) t_CorrelatedRandomVectorGenerator_init_ },
        { Py_tp_getset, t_CorrelatedRandomVectorGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CorrelatedRandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CorrelatedRandomVectorGenerator, t_CorrelatedRandomVectorGenerator, CorrelatedRandomVectorGenerator);

      void t_CorrelatedRandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(CorrelatedRandomVectorGenerator), &PY_TYPE_DEF(CorrelatedRandomVectorGenerator), module, "CorrelatedRandomVectorGenerator", 0);
      }

      void t_CorrelatedRandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CorrelatedRandomVectorGenerator), "class_", make_descriptor(CorrelatedRandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CorrelatedRandomVectorGenerator), "wrapfn_", make_descriptor(t_CorrelatedRandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CorrelatedRandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CorrelatedRandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_CorrelatedRandomVectorGenerator::wrap_Object(CorrelatedRandomVectorGenerator(((t_CorrelatedRandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_CorrelatedRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CorrelatedRandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CorrelatedRandomVectorGenerator_init_(t_CorrelatedRandomVectorGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::random::NormalizedRandomGenerator a2((jobject) NULL);
            CorrelatedRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::random::NormalizedRandomGenerator::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CorrelatedRandomVectorGenerator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            jdouble a2;
            ::org::hipparchus::random::NormalizedRandomGenerator a3((jobject) NULL);
            CorrelatedRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "[DkDk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::random::NormalizedRandomGenerator::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CorrelatedRandomVectorGenerator(a0, a1, a2, a3));
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

      static PyObject *t_CorrelatedRandomVectorGenerator_getGenerator(t_CorrelatedRandomVectorGenerator *self)
      {
        ::org::hipparchus::random::NormalizedRandomGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGenerator());
        return ::org::hipparchus::random::t_NormalizedRandomGenerator::wrap_Object(result);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_getRank(t_CorrelatedRandomVectorGenerator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRank());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_getRootMatrix(t_CorrelatedRandomVectorGenerator *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_nextVector(t_CorrelatedRandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_get__generator(t_CorrelatedRandomVectorGenerator *self, void *data)
      {
        ::org::hipparchus::random::NormalizedRandomGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGenerator());
        return ::org::hipparchus::random::t_NormalizedRandomGenerator::wrap_Object(value);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_get__rank(t_CorrelatedRandomVectorGenerator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRank());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_get__rootMatrix(t_CorrelatedRandomVectorGenerator *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *BodyShape::class$ = NULL;
      jmethodID *BodyShape::mids$ = NULL;
      bool BodyShape::live$ = false;

      jclass BodyShape::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/BodyShape");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBodyFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getIntersectionPoint_9dbbe2475f1298d4] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_getIntersectionPoint_4a2d37785a37d918] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_projectToGround_6b6c0bf817ea4492] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToGround_a871d6772929c652] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_2637885099554561] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transform_393fcc10540ff032] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_d471208f838d1a3d] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_transform_588d378a3b637077] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::Frame BodyShape::getBodyFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getBodyFrame_c8fe21bcdac65bf6]));
      }

      ::org::orekit::bodies::FieldGeodeticPoint BodyShape::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_9dbbe2475f1298d4], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::bodies::GeodeticPoint BodyShape::getIntersectionPoint(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getIntersectionPoint_4a2d37785a37d918], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates BodyShape::projectToGround(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_projectToGround_6b6c0bf817ea4492], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BodyShape::projectToGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToGround_a871d6772929c652], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BodyShape::transform(const ::org::orekit::bodies::FieldGeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transform_2637885099554561], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D BodyShape::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_393fcc10540ff032], a0.this$));
      }

      ::org::orekit::bodies::FieldGeodeticPoint BodyShape::transform(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::FieldGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_d471208f838d1a3d], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::bodies::GeodeticPoint BodyShape::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_588d378a3b637077], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_BodyShape_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodyShape_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodyShape_getBodyFrame(t_BodyShape *self);
      static PyObject *t_BodyShape_getIntersectionPoint(t_BodyShape *self, PyObject *args);
      static PyObject *t_BodyShape_projectToGround(t_BodyShape *self, PyObject *args);
      static PyObject *t_BodyShape_transform(t_BodyShape *self, PyObject *args);
      static PyObject *t_BodyShape_get__bodyFrame(t_BodyShape *self, void *data);
      static PyGetSetDef t_BodyShape__fields_[] = {
        DECLARE_GET_FIELD(t_BodyShape, bodyFrame),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BodyShape__methods_[] = {
        DECLARE_METHOD(t_BodyShape, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyShape, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyShape, getBodyFrame, METH_NOARGS),
        DECLARE_METHOD(t_BodyShape, getIntersectionPoint, METH_VARARGS),
        DECLARE_METHOD(t_BodyShape, projectToGround, METH_VARARGS),
        DECLARE_METHOD(t_BodyShape, transform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BodyShape)[] = {
        { Py_tp_methods, t_BodyShape__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BodyShape__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BodyShape)[] = {
        &PY_TYPE_DEF(::java::io::Serializable),
        NULL
      };

      DEFINE_TYPE(BodyShape, t_BodyShape, BodyShape);

      void t_BodyShape::install(PyObject *module)
      {
        installType(&PY_TYPE(BodyShape), &PY_TYPE_DEF(BodyShape), module, "BodyShape", 0);
      }

      void t_BodyShape::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyShape), "class_", make_descriptor(BodyShape::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyShape), "wrapfn_", make_descriptor(t_BodyShape::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyShape), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BodyShape_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BodyShape::initializeClass, 1)))
          return NULL;
        return t_BodyShape::wrap_Object(BodyShape(((t_BodyShape *) arg)->object.this$));
      }
      static PyObject *t_BodyShape_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BodyShape::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BodyShape_getBodyFrame(t_BodyShape *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_BodyShape_getIntersectionPoint(t_BodyShape *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KKkK", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getIntersectionPoint(a0, a1, a2, a3));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getIntersectionPoint", args);
        return NULL;
      }

      static PyObject *t_BodyShape_projectToGround(t_BodyShape *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.projectToGround(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "projectToGround", args);
        return NULL;
      }

      static PyObject *t_BodyShape_transform(t_BodyShape *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
            }
          }
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transform(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::bodies::FieldGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.transform(a0, a1, a2));
              return ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transform", args);
        return NULL;
      }

      static PyObject *t_BodyShape_get__bodyFrame(t_BodyShape *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getBodyFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/SimpleVectorValueChecker.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimpleVectorValueChecker::class$ = NULL;
      jmethodID *SimpleVectorValueChecker::mids$ = NULL;
      bool SimpleVectorValueChecker::live$ = false;

      jclass SimpleVectorValueChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimpleVectorValueChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_init$_b05c288d5068eccb] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_converged_278765135752272f] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/PointVectorValuePair;Lorg/hipparchus/optim/PointVectorValuePair;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleVectorValueChecker::SimpleVectorValueChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

      SimpleVectorValueChecker::SimpleVectorValueChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_b05c288d5068eccb, a0, a1, a2)) {}

      jboolean SimpleVectorValueChecker::converged(jint a0, const ::org::hipparchus::optim::PointVectorValuePair & a1, const ::org::hipparchus::optim::PointVectorValuePair & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_278765135752272f], a0, a1.this$, a2.this$);
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
      static PyObject *t_SimpleVectorValueChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleVectorValueChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleVectorValueChecker_of_(t_SimpleVectorValueChecker *self, PyObject *args);
      static int t_SimpleVectorValueChecker_init_(t_SimpleVectorValueChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleVectorValueChecker_converged(t_SimpleVectorValueChecker *self, PyObject *args);
      static PyObject *t_SimpleVectorValueChecker_get__parameters_(t_SimpleVectorValueChecker *self, void *data);
      static PyGetSetDef t_SimpleVectorValueChecker__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleVectorValueChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleVectorValueChecker__methods_[] = {
        DECLARE_METHOD(t_SimpleVectorValueChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleVectorValueChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleVectorValueChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleVectorValueChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleVectorValueChecker)[] = {
        { Py_tp_methods, t_SimpleVectorValueChecker__methods_ },
        { Py_tp_init, (void *) t_SimpleVectorValueChecker_init_ },
        { Py_tp_getset, t_SimpleVectorValueChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleVectorValueChecker)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
        NULL
      };

      DEFINE_TYPE(SimpleVectorValueChecker, t_SimpleVectorValueChecker, SimpleVectorValueChecker);
      PyObject *t_SimpleVectorValueChecker::wrap_Object(const SimpleVectorValueChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleVectorValueChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleVectorValueChecker *self = (t_SimpleVectorValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleVectorValueChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleVectorValueChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleVectorValueChecker *self = (t_SimpleVectorValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleVectorValueChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleVectorValueChecker), &PY_TYPE_DEF(SimpleVectorValueChecker), module, "SimpleVectorValueChecker", 0);
      }

      void t_SimpleVectorValueChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleVectorValueChecker), "class_", make_descriptor(SimpleVectorValueChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleVectorValueChecker), "wrapfn_", make_descriptor(t_SimpleVectorValueChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleVectorValueChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleVectorValueChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleVectorValueChecker::initializeClass, 1)))
          return NULL;
        return t_SimpleVectorValueChecker::wrap_Object(SimpleVectorValueChecker(((t_SimpleVectorValueChecker *) arg)->object.this$));
      }
      static PyObject *t_SimpleVectorValueChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleVectorValueChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleVectorValueChecker_of_(t_SimpleVectorValueChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimpleVectorValueChecker_init_(t_SimpleVectorValueChecker *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            SimpleVectorValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = SimpleVectorValueChecker(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointVectorValuePair);
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            SimpleVectorValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = SimpleVectorValueChecker(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointVectorValuePair);
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

      static PyObject *t_SimpleVectorValueChecker_converged(t_SimpleVectorValueChecker *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::optim::PointVectorValuePair a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::optim::PointVectorValuePair a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean result;

        if (!parseArgs(args, "IKK", ::org::hipparchus::optim::PointVectorValuePair::initializeClass, ::org::hipparchus::optim::PointVectorValuePair::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::t_PointVectorValuePair::parameters_, &a2, &p2, ::org::hipparchus::optim::t_PointVectorValuePair::parameters_))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SimpleVectorValueChecker), (PyObject *) self, "converged", args, 2);
      }
      static PyObject *t_SimpleVectorValueChecker_get__parameters_(t_SimpleVectorValueChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldTimeInterpolator::class$ = NULL;
      jmethodID *FieldTimeInterpolator::mids$ = NULL;
      bool FieldTimeInterpolator::live$ = false;

      jclass FieldTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getExtrapolationThreshold_456d9a2f64d6b28d] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_f2f64475e4580546] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_a6156df500549a58] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_2ae4b7103d6213c9] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_e0ebf4b04b5098ac] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_d78a42ee414691f7] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_interpolate_ad7e298cf9f2b0c8] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeStamped;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble FieldTimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_456d9a2f64d6b28d]);
      }

      jint FieldTimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_f2f64475e4580546]);
      }

      ::java::util::List FieldTimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_a6156df500549a58]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_2ae4b7103d6213c9], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_e0ebf4b04b5098ac], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_d78a42ee414691f7], a0.this$, a1.this$));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeInterpolator::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_ad7e298cf9f2b0c8], a0.this$, a1.this$));
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
      static PyObject *t_FieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeInterpolator_of_(t_FieldTimeInterpolator *self, PyObject *args);
      static PyObject *t_FieldTimeInterpolator_getExtrapolationThreshold(t_FieldTimeInterpolator *self);
      static PyObject *t_FieldTimeInterpolator_getNbInterpolationPoints(t_FieldTimeInterpolator *self);
      static PyObject *t_FieldTimeInterpolator_getSubInterpolators(t_FieldTimeInterpolator *self);
      static PyObject *t_FieldTimeInterpolator_interpolate(t_FieldTimeInterpolator *self, PyObject *args);
      static PyObject *t_FieldTimeInterpolator_get__extrapolationThreshold(t_FieldTimeInterpolator *self, void *data);
      static PyObject *t_FieldTimeInterpolator_get__nbInterpolationPoints(t_FieldTimeInterpolator *self, void *data);
      static PyObject *t_FieldTimeInterpolator_get__subInterpolators(t_FieldTimeInterpolator *self, void *data);
      static PyObject *t_FieldTimeInterpolator_get__parameters_(t_FieldTimeInterpolator *self, void *data);
      static PyGetSetDef t_FieldTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_FieldTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeInterpolator)[] = {
        { Py_tp_methods, t_FieldTimeInterpolator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeInterpolator, t_FieldTimeInterpolator, FieldTimeInterpolator);
      PyObject *t_FieldTimeInterpolator::wrap_Object(const FieldTimeInterpolator& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeInterpolator *self = (t_FieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeInterpolator *self = (t_FieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeInterpolator), &PY_TYPE_DEF(FieldTimeInterpolator), module, "FieldTimeInterpolator", 0);
      }

      void t_FieldTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeInterpolator), "class_", make_descriptor(FieldTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeInterpolator), "wrapfn_", make_descriptor(t_FieldTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldTimeInterpolator::wrap_Object(FieldTimeInterpolator(((t_FieldTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeInterpolator_of_(t_FieldTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeInterpolator_getExtrapolationThreshold(t_FieldTimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FieldTimeInterpolator_getNbInterpolationPoints(t_FieldTimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldTimeInterpolator_getSubInterpolators(t_FieldTimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_FieldTimeInterpolator_interpolate(t_FieldTimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::FieldTimeStamped result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_FieldTimeInterpolator_get__parameters_(t_FieldTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeInterpolator_get__extrapolationThreshold(t_FieldTimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_FieldTimeInterpolator_get__nbInterpolationPoints(t_FieldTimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldTimeInterpolator_get__subInterpolators(t_FieldTimeInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Gaussian.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Gaussian::class$ = NULL;
        jmethodID *Gaussian::mids$ = NULL;
        bool Gaussian::live$ = false;

        jclass Gaussian::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Gaussian");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Gaussian::Gaussian() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        Gaussian::Gaussian(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        Gaussian::Gaussian(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        jdouble Gaussian::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Gaussian::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
#include "org/hipparchus/analysis/function/Gaussian$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Gaussian_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Gaussian_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Gaussian_init_(t_Gaussian *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Gaussian_value(t_Gaussian *self, PyObject *args);

        static PyMethodDef t_Gaussian__methods_[] = {
          DECLARE_METHOD(t_Gaussian, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gaussian, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Gaussian)[] = {
          { Py_tp_methods, t_Gaussian__methods_ },
          { Py_tp_init, (void *) t_Gaussian_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Gaussian)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Gaussian, t_Gaussian, Gaussian);

        void t_Gaussian::install(PyObject *module)
        {
          installType(&PY_TYPE(Gaussian), &PY_TYPE_DEF(Gaussian), module, "Gaussian", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "Parametric", make_descriptor(&PY_TYPE_DEF(Gaussian$Parametric)));
        }

        void t_Gaussian::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "class_", make_descriptor(Gaussian::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "wrapfn_", make_descriptor(t_Gaussian::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gaussian), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Gaussian_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Gaussian::initializeClass, 1)))
            return NULL;
          return t_Gaussian::wrap_Object(Gaussian(((t_Gaussian *) arg)->object.this$));
        }
        static PyObject *t_Gaussian_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Gaussian::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Gaussian_init_(t_Gaussian *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Gaussian object((jobject) NULL);

              INT_CALL(object = Gaussian());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              Gaussian object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = Gaussian(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              Gaussian object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = Gaussian(a0, a1, a2));
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

        static PyObject *t_Gaussian_value(t_Gaussian *self, PyObject *args)
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
#include "org/orekit/rugged/intersection/ConstantElevationAlgorithm.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *ConstantElevationAlgorithm::class$ = NULL;
        jmethodID *ConstantElevationAlgorithm::mids$ = NULL;
        bool ConstantElevationAlgorithm::live$ = false;

        jclass ConstantElevationAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/ConstantElevationAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_getAlgorithmId_41b1271dfac9173f] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_824133ce4aec3505] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_465c95e4cb53bef3] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_0b100883a4ceff82] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConstantElevationAlgorithm::ConstantElevationAlgorithm(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ::org::orekit::rugged::api::AlgorithmId ConstantElevationAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_41b1271dfac9173f]));
        }

        jdouble ConstantElevationAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_824133ce4aec3505], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ConstantElevationAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_465c95e4cb53bef3], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ConstantElevationAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_0b100883a4ceff82], a0.this$, a1.this$, a2.this$, a3.this$));
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
      namespace intersection {
        static PyObject *t_ConstantElevationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConstantElevationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConstantElevationAlgorithm_init_(t_ConstantElevationAlgorithm *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConstantElevationAlgorithm_getAlgorithmId(t_ConstantElevationAlgorithm *self);
        static PyObject *t_ConstantElevationAlgorithm_getElevation(t_ConstantElevationAlgorithm *self, PyObject *args);
        static PyObject *t_ConstantElevationAlgorithm_intersection(t_ConstantElevationAlgorithm *self, PyObject *args);
        static PyObject *t_ConstantElevationAlgorithm_refineIntersection(t_ConstantElevationAlgorithm *self, PyObject *args);
        static PyObject *t_ConstantElevationAlgorithm_get__algorithmId(t_ConstantElevationAlgorithm *self, void *data);
        static PyGetSetDef t_ConstantElevationAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_ConstantElevationAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConstantElevationAlgorithm__methods_[] = {
          DECLARE_METHOD(t_ConstantElevationAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_ConstantElevationAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConstantElevationAlgorithm)[] = {
          { Py_tp_methods, t_ConstantElevationAlgorithm__methods_ },
          { Py_tp_init, (void *) t_ConstantElevationAlgorithm_init_ },
          { Py_tp_getset, t_ConstantElevationAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConstantElevationAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConstantElevationAlgorithm, t_ConstantElevationAlgorithm, ConstantElevationAlgorithm);

        void t_ConstantElevationAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(ConstantElevationAlgorithm), &PY_TYPE_DEF(ConstantElevationAlgorithm), module, "ConstantElevationAlgorithm", 0);
        }

        void t_ConstantElevationAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantElevationAlgorithm), "class_", make_descriptor(ConstantElevationAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantElevationAlgorithm), "wrapfn_", make_descriptor(t_ConstantElevationAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConstantElevationAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConstantElevationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConstantElevationAlgorithm::initializeClass, 1)))
            return NULL;
          return t_ConstantElevationAlgorithm::wrap_Object(ConstantElevationAlgorithm(((t_ConstantElevationAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_ConstantElevationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConstantElevationAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConstantElevationAlgorithm_init_(t_ConstantElevationAlgorithm *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ConstantElevationAlgorithm object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = ConstantElevationAlgorithm(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConstantElevationAlgorithm_getAlgorithmId(t_ConstantElevationAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_ConstantElevationAlgorithm_getElevation(t_ConstantElevationAlgorithm *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", args);
          return NULL;
        }

        static PyObject *t_ConstantElevationAlgorithm_intersection(t_ConstantElevationAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.intersection(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", args);
          return NULL;
        }

        static PyObject *t_ConstantElevationAlgorithm_refineIntersection(t_ConstantElevationAlgorithm *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
          return NULL;
        }

        static PyObject *t_ConstantElevationAlgorithm_get__algorithmId(t_ConstantElevationAlgorithm *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/SatelliteType.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/SatelliteType.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *SatelliteType::class$ = NULL;
        jmethodID *SatelliteType::mids$ = NULL;
        bool SatelliteType::live$ = false;
        SatelliteType *SatelliteType::BEIDOU_2G = NULL;
        SatelliteType *SatelliteType::BEIDOU_2I = NULL;
        SatelliteType *SatelliteType::BEIDOU_2M = NULL;
        SatelliteType *SatelliteType::BEIDOU_3G_CAST = NULL;
        SatelliteType *SatelliteType::BEIDOU_3I = NULL;
        SatelliteType *SatelliteType::BEIDOU_3M_CAST = NULL;
        SatelliteType *SatelliteType::BEIDOU_3M_SECM = NULL;
        SatelliteType *SatelliteType::BEIDOU_3SI_CAST = NULL;
        SatelliteType *SatelliteType::BEIDOU_3SI_SECM = NULL;
        SatelliteType *SatelliteType::BEIDOU_3SM_CAST = NULL;
        SatelliteType *SatelliteType::BLOCK_I = NULL;
        SatelliteType *SatelliteType::BLOCK_II = NULL;
        SatelliteType *SatelliteType::BLOCK_IIA = NULL;
        SatelliteType *SatelliteType::BLOCK_IIF = NULL;
        SatelliteType *SatelliteType::BLOCK_IIIA = NULL;
        SatelliteType *SatelliteType::BLOCK_IIR_A = NULL;
        SatelliteType *SatelliteType::BLOCK_IIR_B = NULL;
        SatelliteType *SatelliteType::BLOCK_IIR_M = NULL;
        SatelliteType *SatelliteType::GALILEO_0A = NULL;
        SatelliteType *SatelliteType::GALILEO_0B = NULL;
        SatelliteType *SatelliteType::GALILEO_1 = NULL;
        SatelliteType *SatelliteType::GALILEO_2 = NULL;
        SatelliteType *SatelliteType::GLONASS = NULL;
        SatelliteType *SatelliteType::GLONASS_K1 = NULL;
        SatelliteType *SatelliteType::GLONASS_K2 = NULL;
        SatelliteType *SatelliteType::GLONASS_M = NULL;
        SatelliteType *SatelliteType::IRNSS_1GEO = NULL;
        SatelliteType *SatelliteType::IRNSS_1IGSO = NULL;
        SatelliteType *SatelliteType::QZSS = NULL;
        SatelliteType *SatelliteType::QZSS_2A = NULL;
        SatelliteType *SatelliteType::QZSS_2G = NULL;
        SatelliteType *SatelliteType::QZSS_2I = NULL;

        jclass SatelliteType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/SatelliteType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildAttitudeProvider_f3c48c9130fd016a] = env->getMethodID(cls, "buildAttitudeProvider", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;I)Lorg/orekit/gnss/attitude/GNSSAttitudeProvider;");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_parseSatelliteType_46425423fe1befec] = env->getStaticMethodID(cls, "parseSatelliteType", "(Ljava/lang/String;)Lorg/orekit/gnss/antenna/SatelliteType;");
            mids$[mid_valueOf_46425423fe1befec] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/antenna/SatelliteType;");
            mids$[mid_values_4de0c498546fea78] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/antenna/SatelliteType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BEIDOU_2G = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_2G", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_2I = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_2I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_2M = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_2M", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3G_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3G_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3I = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3M_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3M_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3M_SECM = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3M_SECM", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3SI_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3SI_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3SI_SECM = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3SI_SECM", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3SM_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3SM_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_I = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_II = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_II", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIA = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIA", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIF = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIF", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIIA = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIIA", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIR_A = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIR_A", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIR_B = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIR_B", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIR_M = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIR_M", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_0A = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_0A", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_0B = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_0B", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_1 = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_1", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_2 = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_2", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS = new SatelliteType(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS_K1 = new SatelliteType(env->getStaticObjectField(cls, "GLONASS_K1", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS_K2 = new SatelliteType(env->getStaticObjectField(cls, "GLONASS_K2", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS_M = new SatelliteType(env->getStaticObjectField(cls, "GLONASS_M", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            IRNSS_1GEO = new SatelliteType(env->getStaticObjectField(cls, "IRNSS_1GEO", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            IRNSS_1IGSO = new SatelliteType(env->getStaticObjectField(cls, "IRNSS_1IGSO", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS = new SatelliteType(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS_2A = new SatelliteType(env->getStaticObjectField(cls, "QZSS_2A", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS_2G = new SatelliteType(env->getStaticObjectField(cls, "QZSS_2G", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS_2I = new SatelliteType(env->getStaticObjectField(cls, "QZSS_2I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::gnss::attitude::GNSSAttitudeProvider SatelliteType::buildAttitudeProvider(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3, jint a4) const
        {
          return ::org::orekit::gnss::attitude::GNSSAttitudeProvider(env->callObjectMethod(this$, mids$[mid_buildAttitudeProvider_f3c48c9130fd016a], a0.this$, a1.this$, a2.this$, a3.this$, a4));
        }

        ::java::lang::String SatelliteType::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
        }

        SatelliteType SatelliteType::parseSatelliteType(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SatelliteType(env->callStaticObjectMethod(cls, mids$[mid_parseSatelliteType_46425423fe1befec], a0.this$));
        }

        SatelliteType SatelliteType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SatelliteType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_46425423fe1befec], a0.this$));
        }

        JArray< SatelliteType > SatelliteType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< SatelliteType >(env->callStaticObjectMethod(cls, mids$[mid_values_4de0c498546fea78]));
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
      namespace antenna {
        static PyObject *t_SatelliteType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteType_of_(t_SatelliteType *self, PyObject *args);
        static PyObject *t_SatelliteType_buildAttitudeProvider(t_SatelliteType *self, PyObject *args);
        static PyObject *t_SatelliteType_getName(t_SatelliteType *self);
        static PyObject *t_SatelliteType_parseSatelliteType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_SatelliteType_values(PyTypeObject *type);
        static PyObject *t_SatelliteType_get__name(t_SatelliteType *self, void *data);
        static PyObject *t_SatelliteType_get__parameters_(t_SatelliteType *self, void *data);
        static PyGetSetDef t_SatelliteType__fields_[] = {
          DECLARE_GET_FIELD(t_SatelliteType, name),
          DECLARE_GET_FIELD(t_SatelliteType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SatelliteType__methods_[] = {
          DECLARE_METHOD(t_SatelliteType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, of_, METH_VARARGS),
          DECLARE_METHOD(t_SatelliteType, buildAttitudeProvider, METH_VARARGS),
          DECLARE_METHOD(t_SatelliteType, getName, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteType, parseSatelliteType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SatelliteType)[] = {
          { Py_tp_methods, t_SatelliteType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SatelliteType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SatelliteType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(SatelliteType, t_SatelliteType, SatelliteType);
        PyObject *t_SatelliteType::wrap_Object(const SatelliteType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SatelliteType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SatelliteType *self = (t_SatelliteType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SatelliteType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SatelliteType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SatelliteType *self = (t_SatelliteType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SatelliteType::install(PyObject *module)
        {
          installType(&PY_TYPE(SatelliteType), &PY_TYPE_DEF(SatelliteType), module, "SatelliteType", 0);
        }

        void t_SatelliteType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "class_", make_descriptor(SatelliteType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "wrapfn_", make_descriptor(t_SatelliteType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "boxfn_", make_descriptor(boxObject));
          env->getClass(SatelliteType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_2G", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_2G)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_2I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_2I)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_2M", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_2M)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3G_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3G_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3I)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3M_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3M_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3M_SECM", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3M_SECM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3SI_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3SI_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3SI_SECM", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3SI_SECM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3SM_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3SM_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_I)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_II", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_II)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIA", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIF", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIIA", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIIA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIR_A", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIR_A)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIR_B", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIR_B)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIR_M", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIR_M)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_0A", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_0A)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_0B", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_0B)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_1", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_1)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_2", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS_K1", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS_K1)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS_K2", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS_K2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS_M", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS_M)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "IRNSS_1GEO", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::IRNSS_1GEO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "IRNSS_1IGSO", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::IRNSS_1IGSO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS_2A", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS_2A)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS_2G", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS_2G)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS_2I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS_2I)));
        }

        static PyObject *t_SatelliteType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SatelliteType::initializeClass, 1)))
            return NULL;
          return t_SatelliteType::wrap_Object(SatelliteType(((t_SatelliteType *) arg)->object.this$));
        }
        static PyObject *t_SatelliteType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SatelliteType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SatelliteType_of_(t_SatelliteType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SatelliteType_buildAttitudeProvider(t_SatelliteType *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          jint a4;
          ::org::orekit::gnss::attitude::GNSSAttitudeProvider result((jobject) NULL);

          if (!parseArgs(args, "kkkkI", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.buildAttitudeProvider(a0, a1, a2, a3, a4));
            return ::org::orekit::gnss::attitude::t_GNSSAttitudeProvider::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildAttitudeProvider", args);
          return NULL;
        }

        static PyObject *t_SatelliteType_getName(t_SatelliteType *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_SatelliteType_parseSatelliteType(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          SatelliteType result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::gnss::antenna::SatelliteType::parseSatelliteType(a0));
            return t_SatelliteType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parseSatelliteType", arg);
          return NULL;
        }

        static PyObject *t_SatelliteType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          SatelliteType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::gnss::antenna::SatelliteType::valueOf(a0));
            return t_SatelliteType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_SatelliteType_values(PyTypeObject *type)
        {
          JArray< SatelliteType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::gnss::antenna::SatelliteType::values());
          return JArray<jobject>(result.this$).wrap(t_SatelliteType::wrap_jobject);
        }
        static PyObject *t_SatelliteType_get__parameters_(t_SatelliteType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SatelliteType_get__name(t_SatelliteType *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/rank/Median.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "org/hipparchus/util/KthSelector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/rank/Median.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Median::class$ = NULL;
          jmethodID *Median::mids$ = NULL;
          bool Median::live$ = false;

          jclass Median::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Median");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_copy_6e02f003a6bf1eec] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Median;");
              mids$[mid_evaluate_0a7ff474793a505a] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getEstimationType_0c09ecaa3168cf74] = env->getMethodID(cls, "getEstimationType", "()Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_getKthSelector_485854411e6d0542] = env->getMethodID(cls, "getKthSelector", "()Lorg/hipparchus/util/KthSelector;");
              mids$[mid_getNaNStrategy_9a708dd74e04e9b8] = env->getMethodID(cls, "getNaNStrategy", "()Lorg/hipparchus/stat/ranking/NaNStrategy;");
              mids$[mid_withEstimationType_87cec76cda470bc9] = env->getMethodID(cls, "withEstimationType", "(Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;)Lorg/hipparchus/stat/descriptive/rank/Median;");
              mids$[mid_withKthSelector_220f438871b85648] = env->getMethodID(cls, "withKthSelector", "(Lorg/hipparchus/util/KthSelector;)Lorg/hipparchus/stat/descriptive/rank/Median;");
              mids$[mid_withNaNStrategy_14015af1579bb7e6] = env->getMethodID(cls, "withNaNStrategy", "(Lorg/hipparchus/stat/ranking/NaNStrategy;)Lorg/hipparchus/stat/descriptive/rank/Median;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Median::Median() : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          Median Median::copy() const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_copy_6e02f003a6bf1eec]));
          }

          jdouble Median::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0a7ff474793a505a], a0.this$, a1, a2);
          }

          ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType Median::getEstimationType() const
          {
            return ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType(env->callObjectMethod(this$, mids$[mid_getEstimationType_0c09ecaa3168cf74]));
          }

          ::org::hipparchus::util::KthSelector Median::getKthSelector() const
          {
            return ::org::hipparchus::util::KthSelector(env->callObjectMethod(this$, mids$[mid_getKthSelector_485854411e6d0542]));
          }

          ::org::hipparchus::stat::ranking::NaNStrategy Median::getNaNStrategy() const
          {
            return ::org::hipparchus::stat::ranking::NaNStrategy(env->callObjectMethod(this$, mids$[mid_getNaNStrategy_9a708dd74e04e9b8]));
          }

          Median Median::withEstimationType(const ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType & a0) const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_withEstimationType_87cec76cda470bc9], a0.this$));
          }

          Median Median::withKthSelector(const ::org::hipparchus::util::KthSelector & a0) const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_withKthSelector_220f438871b85648], a0.this$));
          }

          Median Median::withNaNStrategy(const ::org::hipparchus::stat::ranking::NaNStrategy & a0) const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_withNaNStrategy_14015af1579bb7e6], a0.this$));
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
    namespace stat {
      namespace descriptive {
        namespace rank {
          static PyObject *t_Median_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Median_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Median_init_(t_Median *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Median_copy(t_Median *self, PyObject *args);
          static PyObject *t_Median_evaluate(t_Median *self, PyObject *args);
          static PyObject *t_Median_getEstimationType(t_Median *self);
          static PyObject *t_Median_getKthSelector(t_Median *self);
          static PyObject *t_Median_getNaNStrategy(t_Median *self);
          static PyObject *t_Median_withEstimationType(t_Median *self, PyObject *arg);
          static PyObject *t_Median_withKthSelector(t_Median *self, PyObject *arg);
          static PyObject *t_Median_withNaNStrategy(t_Median *self, PyObject *arg);
          static PyObject *t_Median_get__estimationType(t_Median *self, void *data);
          static PyObject *t_Median_get__kthSelector(t_Median *self, void *data);
          static PyObject *t_Median_get__naNStrategy(t_Median *self, void *data);
          static PyGetSetDef t_Median__fields_[] = {
            DECLARE_GET_FIELD(t_Median, estimationType),
            DECLARE_GET_FIELD(t_Median, kthSelector),
            DECLARE_GET_FIELD(t_Median, naNStrategy),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Median__methods_[] = {
            DECLARE_METHOD(t_Median, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Median, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Median, copy, METH_VARARGS),
            DECLARE_METHOD(t_Median, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Median, getEstimationType, METH_NOARGS),
            DECLARE_METHOD(t_Median, getKthSelector, METH_NOARGS),
            DECLARE_METHOD(t_Median, getNaNStrategy, METH_NOARGS),
            DECLARE_METHOD(t_Median, withEstimationType, METH_O),
            DECLARE_METHOD(t_Median, withKthSelector, METH_O),
            DECLARE_METHOD(t_Median, withNaNStrategy, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Median)[] = {
            { Py_tp_methods, t_Median__methods_ },
            { Py_tp_init, (void *) t_Median_init_ },
            { Py_tp_getset, t_Median__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Median)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Median, t_Median, Median);

          void t_Median::install(PyObject *module)
          {
            installType(&PY_TYPE(Median), &PY_TYPE_DEF(Median), module, "Median", 0);
          }

          void t_Median::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Median), "class_", make_descriptor(Median::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Median), "wrapfn_", make_descriptor(t_Median::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Median), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Median_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Median::initializeClass, 1)))
              return NULL;
            return t_Median::wrap_Object(Median(((t_Median *) arg)->object.this$));
          }
          static PyObject *t_Median_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Median::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Median_init_(t_Median *self, PyObject *args, PyObject *kwds)
          {
            Median object((jobject) NULL);

            INT_CALL(object = Median());
            self->object = object;

            return 0;
          }

          static PyObject *t_Median_copy(t_Median *self, PyObject *args)
          {
            Median result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Median::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Median), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Median_evaluate(t_Median *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Median), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Median_getEstimationType(t_Median *self)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getEstimationType());
            return ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::wrap_Object(result);
          }

          static PyObject *t_Median_getKthSelector(t_Median *self)
          {
            ::org::hipparchus::util::KthSelector result((jobject) NULL);
            OBJ_CALL(result = self->object.getKthSelector());
            return ::org::hipparchus::util::t_KthSelector::wrap_Object(result);
          }

          static PyObject *t_Median_getNaNStrategy(t_Median *self)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy result((jobject) NULL);
            OBJ_CALL(result = self->object.getNaNStrategy());
            return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(result);
          }

          static PyObject *t_Median_withEstimationType(t_Median *self, PyObject *arg)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType a0((jobject) NULL);
            PyTypeObject **p0;
            Median result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::parameters_))
            {
              OBJ_CALL(result = self->object.withEstimationType(a0));
              return t_Median::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withEstimationType", arg);
            return NULL;
          }

          static PyObject *t_Median_withKthSelector(t_Median *self, PyObject *arg)
          {
            ::org::hipparchus::util::KthSelector a0((jobject) NULL);
            Median result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::util::KthSelector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withKthSelector(a0));
              return t_Median::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withKthSelector", arg);
            return NULL;
          }

          static PyObject *t_Median_withNaNStrategy(t_Median *self, PyObject *arg)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
            PyTypeObject **p0;
            Median result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_))
            {
              OBJ_CALL(result = self->object.withNaNStrategy(a0));
              return t_Median::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withNaNStrategy", arg);
            return NULL;
          }

          static PyObject *t_Median_get__estimationType(t_Median *self, void *data)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getEstimationType());
            return ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::wrap_Object(value);
          }

          static PyObject *t_Median_get__kthSelector(t_Median *self, void *data)
          {
            ::org::hipparchus::util::KthSelector value((jobject) NULL);
            OBJ_CALL(value = self->object.getKthSelector());
            return ::org::hipparchus::util::t_KthSelector::wrap_Object(value);
          }

          static PyObject *t_Median_get__naNStrategy(t_Median *self, void *data)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy value((jobject) NULL);
            OBJ_CALL(value = self->object.getNaNStrategy());
            return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *UnivariateInterpolator::class$ = NULL;
        jmethodID *UnivariateInterpolator::mids$ = NULL;
        bool UnivariateInterpolator::live$ = false;

        jclass UnivariateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/UnivariateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_892e3f95ace99810] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::UnivariateFunction UnivariateInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::UnivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_892e3f95ace99810], a0.this$, a1.this$));
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
        static PyObject *t_UnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateInterpolator_interpolate(t_UnivariateInterpolator *self, PyObject *args);

        static PyMethodDef t_UnivariateInterpolator__methods_[] = {
          DECLARE_METHOD(t_UnivariateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateInterpolator)[] = {
          { Py_tp_methods, t_UnivariateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateInterpolator, t_UnivariateInterpolator, UnivariateInterpolator);

        void t_UnivariateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateInterpolator), &PY_TYPE_DEF(UnivariateInterpolator), module, "UnivariateInterpolator", 0);
        }

        void t_UnivariateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateInterpolator), "class_", make_descriptor(UnivariateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateInterpolator), "wrapfn_", make_descriptor(t_UnivariateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateInterpolator::initializeClass, 1)))
            return NULL;
          return t_UnivariateInterpolator::wrap_Object(UnivariateInterpolator(((t_UnivariateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateInterpolator_interpolate(t_UnivariateInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
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
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CombinedObservationData::class$ = NULL;
          jmethodID *CombinedObservationData::mids$ = NULL;
          bool CombinedObservationData::live$ = false;

          jclass CombinedObservationData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CombinedObservationData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_361391244955dd59] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/CombinationType;Lorg/orekit/gnss/MeasurementType;DDLjava/util/List;)V");
              mids$[mid_getCombinationType_7e335f1c8cfa47c5] = env->getMethodID(cls, "getCombinationType", "()Lorg/orekit/estimation/measurements/gnss/CombinationType;");
              mids$[mid_getCombinedMHzFrequency_456d9a2f64d6b28d] = env->getMethodID(cls, "getCombinedMHzFrequency", "()D");
              mids$[mid_getMeasurementType_4399f03fd512a2dc] = env->getMethodID(cls, "getMeasurementType", "()Lorg/orekit/gnss/MeasurementType;");
              mids$[mid_getUsedObservationData_a6156df500549a58] = env->getMethodID(cls, "getUsedObservationData", "()Ljava/util/List;");
              mids$[mid_getValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getValue", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CombinedObservationData::CombinedObservationData(const ::org::orekit::estimation::measurements::gnss::CombinationType & a0, const ::org::orekit::gnss::MeasurementType & a1, jdouble a2, jdouble a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_361391244955dd59, a0.this$, a1.this$, a2, a3, a4.this$)) {}

          ::org::orekit::estimation::measurements::gnss::CombinationType CombinedObservationData::getCombinationType() const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinationType(env->callObjectMethod(this$, mids$[mid_getCombinationType_7e335f1c8cfa47c5]));
          }

          jdouble CombinedObservationData::getCombinedMHzFrequency() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCombinedMHzFrequency_456d9a2f64d6b28d]);
          }

          ::org::orekit::gnss::MeasurementType CombinedObservationData::getMeasurementType() const
          {
            return ::org::orekit::gnss::MeasurementType(env->callObjectMethod(this$, mids$[mid_getMeasurementType_4399f03fd512a2dc]));
          }

          ::java::util::List CombinedObservationData::getUsedObservationData() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUsedObservationData_a6156df500549a58]));
          }

          jdouble CombinedObservationData::getValue() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getValue_456d9a2f64d6b28d]);
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
          static PyObject *t_CombinedObservationData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinedObservationData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CombinedObservationData_init_(t_CombinedObservationData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CombinedObservationData_getCombinationType(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getCombinedMHzFrequency(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getMeasurementType(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getUsedObservationData(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getValue(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_get__combinationType(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__combinedMHzFrequency(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__measurementType(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__usedObservationData(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__value(t_CombinedObservationData *self, void *data);
          static PyGetSetDef t_CombinedObservationData__fields_[] = {
            DECLARE_GET_FIELD(t_CombinedObservationData, combinationType),
            DECLARE_GET_FIELD(t_CombinedObservationData, combinedMHzFrequency),
            DECLARE_GET_FIELD(t_CombinedObservationData, measurementType),
            DECLARE_GET_FIELD(t_CombinedObservationData, usedObservationData),
            DECLARE_GET_FIELD(t_CombinedObservationData, value),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CombinedObservationData__methods_[] = {
            DECLARE_METHOD(t_CombinedObservationData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationData, getCombinationType, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getCombinedMHzFrequency, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getMeasurementType, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getUsedObservationData, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getValue, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CombinedObservationData)[] = {
            { Py_tp_methods, t_CombinedObservationData__methods_ },
            { Py_tp_init, (void *) t_CombinedObservationData_init_ },
            { Py_tp_getset, t_CombinedObservationData__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CombinedObservationData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CombinedObservationData, t_CombinedObservationData, CombinedObservationData);

          void t_CombinedObservationData::install(PyObject *module)
          {
            installType(&PY_TYPE(CombinedObservationData), &PY_TYPE_DEF(CombinedObservationData), module, "CombinedObservationData", 0);
          }

          void t_CombinedObservationData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationData), "class_", make_descriptor(CombinedObservationData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationData), "wrapfn_", make_descriptor(t_CombinedObservationData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationData), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CombinedObservationData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CombinedObservationData::initializeClass, 1)))
              return NULL;
            return t_CombinedObservationData::wrap_Object(CombinedObservationData(((t_CombinedObservationData *) arg)->object.this$));
          }
          static PyObject *t_CombinedObservationData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CombinedObservationData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CombinedObservationData_init_(t_CombinedObservationData *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::MeasurementType a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jdouble a3;
            ::java::util::List a4((jobject) NULL);
            PyTypeObject **p4;
            CombinedObservationData object((jobject) NULL);

            if (!parseArgs(args, "KKDDK", ::org::orekit::estimation::measurements::gnss::CombinationType::initializeClass, ::org::orekit::gnss::MeasurementType::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::gnss::t_CombinationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_MeasurementType::parameters_, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = CombinedObservationData(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CombinedObservationData_getCombinationType(t_CombinedObservationData *self)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getCombinationType());
            return ::org::orekit::estimation::measurements::gnss::t_CombinationType::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationData_getCombinedMHzFrequency(t_CombinedObservationData *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCombinedMHzFrequency());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CombinedObservationData_getMeasurementType(t_CombinedObservationData *self)
          {
            ::org::orekit::gnss::MeasurementType result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeasurementType());
            return ::org::orekit::gnss::t_MeasurementType::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationData_getUsedObservationData(t_CombinedObservationData *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getUsedObservationData());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ObservationData));
          }

          static PyObject *t_CombinedObservationData_getValue(t_CombinedObservationData *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CombinedObservationData_get__combinationType(t_CombinedObservationData *self, void *data)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getCombinationType());
            return ::org::orekit::estimation::measurements::gnss::t_CombinationType::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationData_get__combinedMHzFrequency(t_CombinedObservationData *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCombinedMHzFrequency());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CombinedObservationData_get__measurementType(t_CombinedObservationData *self, void *data)
          {
            ::org::orekit::gnss::MeasurementType value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeasurementType());
            return ::org::orekit::gnss::t_MeasurementType::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationData_get__usedObservationData(t_CombinedObservationData *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getUsedObservationData());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationData_get__value(t_CombinedObservationData *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getValue());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/NarrowLaneCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *NarrowLaneCombination::class$ = NULL;
          jmethodID *NarrowLaneCombination::mids$ = NULL;
          bool NarrowLaneCombination::live$ = false;

          jclass NarrowLaneCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/NarrowLaneCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_17aea80d13f83b81] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_f4c99548ccdd1967] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

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

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_NarrowLaneCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NarrowLaneCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_NarrowLaneCombination__methods_[] = {
            DECLARE_METHOD(t_NarrowLaneCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NarrowLaneCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NarrowLaneCombination)[] = {
            { Py_tp_methods, t_NarrowLaneCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NarrowLaneCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(NarrowLaneCombination, t_NarrowLaneCombination, NarrowLaneCombination);

          void t_NarrowLaneCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(NarrowLaneCombination), &PY_TYPE_DEF(NarrowLaneCombination), module, "NarrowLaneCombination", 0);
          }

          void t_NarrowLaneCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NarrowLaneCombination), "class_", make_descriptor(NarrowLaneCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NarrowLaneCombination), "wrapfn_", make_descriptor(t_NarrowLaneCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NarrowLaneCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NarrowLaneCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NarrowLaneCombination::initializeClass, 1)))
              return NULL;
            return t_NarrowLaneCombination::wrap_Object(NarrowLaneCombination(((t_NarrowLaneCombination *) arg)->object.this$));
          }
          static PyObject *t_NarrowLaneCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NarrowLaneCombination::initializeClass, 0))
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
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *UnivariateFunction::class$ = NULL;
      jmethodID *UnivariateFunction::mids$ = NULL;
      bool UnivariateFunction::live$ = false;

      jclass UnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/UnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble UnivariateFunction::value(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
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
      static PyObject *t_UnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnivariateFunction_value(t_UnivariateFunction *self, PyObject *arg);

      static PyMethodDef t_UnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_UnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnivariateFunction)[] = {
        { Py_tp_methods, t_UnivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnivariateFunction, t_UnivariateFunction, UnivariateFunction);

      void t_UnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(UnivariateFunction), &PY_TYPE_DEF(UnivariateFunction), module, "UnivariateFunction", 0);
      }

      void t_UnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunction), "class_", make_descriptor(UnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunction), "wrapfn_", make_descriptor(t_UnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_UnivariateFunction::wrap_Object(UnivariateFunction(((t_UnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_UnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnivariateFunction_value(t_UnivariateFunction *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/IonosphereBaseMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereBaseMessage::class$ = NULL;
          jmethodID *IonosphereBaseMessage::mids$ = NULL;
          bool IonosphereBaseMessage::live$ = false;

          jclass IonosphereBaseMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereBaseMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_70c1a5d645cab07e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getTransmitTime_aaa854c403487cf3] = env->getMethodID(cls, "getTransmitTime", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_setTransmitTime_e82d68cd9f886886] = env->getMethodID(cls, "setTransmitTime", "(Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereBaseMessage::IonosphereBaseMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::TypeSvMessage(env->newObject(initializeClass, &mids$, mid_init$_70c1a5d645cab07e, a0.this$, a1, a2.this$)) {}

          ::org::orekit::time::AbsoluteDate IonosphereBaseMessage::getTransmitTime() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTransmitTime_aaa854c403487cf3]));
          }

          void IonosphereBaseMessage::setTransmitTime(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTransmitTime_e82d68cd9f886886], a0.this$);
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
          static PyObject *t_IonosphereBaseMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereBaseMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereBaseMessage_init_(t_IonosphereBaseMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereBaseMessage_getTransmitTime(t_IonosphereBaseMessage *self);
          static PyObject *t_IonosphereBaseMessage_setTransmitTime(t_IonosphereBaseMessage *self, PyObject *arg);
          static PyObject *t_IonosphereBaseMessage_get__transmitTime(t_IonosphereBaseMessage *self, void *data);
          static int t_IonosphereBaseMessage_set__transmitTime(t_IonosphereBaseMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_IonosphereBaseMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_IonosphereBaseMessage, transmitTime),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereBaseMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereBaseMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBaseMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBaseMessage, getTransmitTime, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereBaseMessage, setTransmitTime, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereBaseMessage)[] = {
            { Py_tp_methods, t_IonosphereBaseMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereBaseMessage_init_ },
            { Py_tp_getset, t_IonosphereBaseMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereBaseMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::TypeSvMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereBaseMessage, t_IonosphereBaseMessage, IonosphereBaseMessage);

          void t_IonosphereBaseMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereBaseMessage), &PY_TYPE_DEF(IonosphereBaseMessage), module, "IonosphereBaseMessage", 0);
          }

          void t_IonosphereBaseMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBaseMessage), "class_", make_descriptor(IonosphereBaseMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBaseMessage), "wrapfn_", make_descriptor(t_IonosphereBaseMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBaseMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphereBaseMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereBaseMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereBaseMessage::wrap_Object(IonosphereBaseMessage(((t_IonosphereBaseMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereBaseMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereBaseMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereBaseMessage_init_(t_IonosphereBaseMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereBaseMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereBaseMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereBaseMessage_getTransmitTime(t_IonosphereBaseMessage *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getTransmitTime());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_IonosphereBaseMessage_setTransmitTime(t_IonosphereBaseMessage *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTransmitTime(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTransmitTime", arg);
            return NULL;
          }

          static PyObject *t_IonosphereBaseMessage_get__transmitTime(t_IonosphereBaseMessage *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getTransmitTime());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_IonosphereBaseMessage_set__transmitTime(t_IonosphereBaseMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setTransmitTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "transmitTime", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/UpperBounds.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *UpperBounds::class$ = NULL;
            jmethodID *UpperBounds::mids$ = NULL;
            bool UpperBounds::live$ = false;

            jclass UpperBounds::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/UpperBounds");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getDnl_c0f6183da10a32d4] = env->getStaticMethodID(cls, "getDnl", "(DDII)D");
                mids$[mid_getDnl_9124e5d33dcf61da] = env->getStaticMethodID(cls, "getDnl", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getRnml_4854f81e14d8a486] = env->getStaticMethodID(cls, "getRnml", "(DIIIII)D");
                mids$[mid_getRnml_3bcc8dafc6ec2456] = env->getStaticMethodID(cls, "getRnml", "(Lorg/hipparchus/CalculusFieldElement;IIIII)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble UpperBounds::getDnl(jdouble a0, jdouble a1, jint a2, jint a3)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getDnl_c0f6183da10a32d4], a0, a1, a2, a3);
            }

            ::org::hipparchus::CalculusFieldElement UpperBounds::getDnl(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, jint a2, jint a3)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_getDnl_9124e5d33dcf61da], a0.this$, a1.this$, a2, a3));
            }

            jdouble UpperBounds::getRnml(jdouble a0, jint a1, jint a2, jint a3, jint a4, jint a5)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getRnml_4854f81e14d8a486], a0, a1, a2, a3, a4, a5);
            }

            ::org::hipparchus::CalculusFieldElement UpperBounds::getRnml(const ::org::hipparchus::CalculusFieldElement & a0, jint a1, jint a2, jint a3, jint a4, jint a5)
            {
              jclass cls = env->getClass(initializeClass);
              return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_getRnml_3bcc8dafc6ec2456], a0.this$, a1, a2, a3, a4, a5));
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
            static PyObject *t_UpperBounds_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UpperBounds_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_UpperBounds_getDnl(PyTypeObject *type, PyObject *args);
            static PyObject *t_UpperBounds_getRnml(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_UpperBounds__methods_[] = {
              DECLARE_METHOD(t_UpperBounds, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UpperBounds, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_UpperBounds, getDnl, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_UpperBounds, getRnml, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(UpperBounds)[] = {
              { Py_tp_methods, t_UpperBounds__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(UpperBounds)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(UpperBounds, t_UpperBounds, UpperBounds);

            void t_UpperBounds::install(PyObject *module)
            {
              installType(&PY_TYPE(UpperBounds), &PY_TYPE_DEF(UpperBounds), module, "UpperBounds", 0);
            }

            void t_UpperBounds::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(UpperBounds), "class_", make_descriptor(UpperBounds::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UpperBounds), "wrapfn_", make_descriptor(t_UpperBounds::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(UpperBounds), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_UpperBounds_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, UpperBounds::initializeClass, 1)))
                return NULL;
              return t_UpperBounds::wrap_Object(UpperBounds(((t_UpperBounds *) arg)->object.this$));
            }
            static PyObject *t_UpperBounds_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, UpperBounds::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_UpperBounds_getDnl(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 4:
                {
                  jdouble a0;
                  jdouble a1;
                  jint a2;
                  jint a3;
                  jdouble result;

                  if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::UpperBounds::getDnl(a0, a1, a2, a3));
                    return PyFloat_FromDouble((double) result);
                  }
                }
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                  PyTypeObject **p1;
                  jint a2;
                  jint a3;
                  ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                  if (!parseArgs(args, "KKII", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::UpperBounds::getDnl(a0, a1, a2, a3));
                    return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "getDnl", args);
              return NULL;
            }

            static PyObject *t_UpperBounds_getRnml(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 6:
                {
                  jdouble a0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jint a5;
                  jdouble result;

                  if (!parseArgs(args, "DIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::UpperBounds::getRnml(a0, a1, a2, a3, a4, a5));
                    return PyFloat_FromDouble((double) result);
                  }
                }
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  jint a1;
                  jint a2;
                  jint a3;
                  jint a4;
                  jint a5;
                  ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                  if (!parseArgs(args, "KIIIII", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &a3, &a4, &a5))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::UpperBounds::getRnml(a0, a1, a2, a3, a4, a5));
                    return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError(type, "getRnml", args);
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
#include "org/hipparchus/stat/StatUtils.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *StatUtils::class$ = NULL;
      jmethodID *StatUtils::mids$ = NULL;
      bool StatUtils::live$ = false;

      jclass StatUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/StatUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_geometricMean_f05cb8c6dfd5e0b9] = env->getStaticMethodID(cls, "geometricMean", "([D)D");
          mids$[mid_geometricMean_0a7ff474793a505a] = env->getStaticMethodID(cls, "geometricMean", "([DII)D");
          mids$[mid_max_f05cb8c6dfd5e0b9] = env->getStaticMethodID(cls, "max", "([D)D");
          mids$[mid_max_0a7ff474793a505a] = env->getStaticMethodID(cls, "max", "([DII)D");
          mids$[mid_mean_f05cb8c6dfd5e0b9] = env->getStaticMethodID(cls, "mean", "([D)D");
          mids$[mid_mean_0a7ff474793a505a] = env->getStaticMethodID(cls, "mean", "([DII)D");
          mids$[mid_meanDifference_1ce76fb6ff382da9] = env->getStaticMethodID(cls, "meanDifference", "([D[D)D");
          mids$[mid_min_f05cb8c6dfd5e0b9] = env->getStaticMethodID(cls, "min", "([D)D");
          mids$[mid_min_0a7ff474793a505a] = env->getStaticMethodID(cls, "min", "([DII)D");
          mids$[mid_mode_4b742fe429c22ba8] = env->getStaticMethodID(cls, "mode", "([D)[D");
          mids$[mid_mode_27a40d66e0497a45] = env->getStaticMethodID(cls, "mode", "([DII)[D");
          mids$[mid_normalize_4b742fe429c22ba8] = env->getStaticMethodID(cls, "normalize", "([D)[D");
          mids$[mid_percentile_926a8b9763aa0b21] = env->getStaticMethodID(cls, "percentile", "([DD)D");
          mids$[mid_percentile_346318efe67d9ca8] = env->getStaticMethodID(cls, "percentile", "([DIID)D");
          mids$[mid_populationVariance_f05cb8c6dfd5e0b9] = env->getStaticMethodID(cls, "populationVariance", "([D)D");
          mids$[mid_populationVariance_926a8b9763aa0b21] = env->getStaticMethodID(cls, "populationVariance", "([DD)D");
          mids$[mid_populationVariance_0a7ff474793a505a] = env->getStaticMethodID(cls, "populationVariance", "([DII)D");
          mids$[mid_populationVariance_431214b6e4f01f3c] = env->getStaticMethodID(cls, "populationVariance", "([DDII)D");
          mids$[mid_product_f05cb8c6dfd5e0b9] = env->getStaticMethodID(cls, "product", "([D)D");
          mids$[mid_product_0a7ff474793a505a] = env->getStaticMethodID(cls, "product", "([DII)D");
          mids$[mid_sum_f05cb8c6dfd5e0b9] = env->getStaticMethodID(cls, "sum", "([D)D");
          mids$[mid_sum_0a7ff474793a505a] = env->getStaticMethodID(cls, "sum", "([DII)D");
          mids$[mid_sumDifference_1ce76fb6ff382da9] = env->getStaticMethodID(cls, "sumDifference", "([D[D)D");
          mids$[mid_sumLog_f05cb8c6dfd5e0b9] = env->getStaticMethodID(cls, "sumLog", "([D)D");
          mids$[mid_sumLog_0a7ff474793a505a] = env->getStaticMethodID(cls, "sumLog", "([DII)D");
          mids$[mid_sumSq_f05cb8c6dfd5e0b9] = env->getStaticMethodID(cls, "sumSq", "([D)D");
          mids$[mid_sumSq_0a7ff474793a505a] = env->getStaticMethodID(cls, "sumSq", "([DII)D");
          mids$[mid_variance_f05cb8c6dfd5e0b9] = env->getStaticMethodID(cls, "variance", "([D)D");
          mids$[mid_variance_926a8b9763aa0b21] = env->getStaticMethodID(cls, "variance", "([DD)D");
          mids$[mid_variance_0a7ff474793a505a] = env->getStaticMethodID(cls, "variance", "([DII)D");
          mids$[mid_variance_431214b6e4f01f3c] = env->getStaticMethodID(cls, "variance", "([DDII)D");
          mids$[mid_varianceDifference_568f42d2326d41b5] = env->getStaticMethodID(cls, "varianceDifference", "([D[DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble StatUtils::geometricMean(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_geometricMean_f05cb8c6dfd5e0b9], a0.this$);
      }

      jdouble StatUtils::geometricMean(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_geometricMean_0a7ff474793a505a], a0.this$, a1, a2);
      }

      jdouble StatUtils::max$(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_max_f05cb8c6dfd5e0b9], a0.this$);
      }

      jdouble StatUtils::max$(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_max_0a7ff474793a505a], a0.this$, a1, a2);
      }

      jdouble StatUtils::mean$(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_mean_f05cb8c6dfd5e0b9], a0.this$);
      }

      jdouble StatUtils::mean$(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_mean_0a7ff474793a505a], a0.this$, a1, a2);
      }

      jdouble StatUtils::meanDifference(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_meanDifference_1ce76fb6ff382da9], a0.this$, a1.this$);
      }

      jdouble StatUtils::min$(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_min_f05cb8c6dfd5e0b9], a0.this$);
      }

      jdouble StatUtils::min$(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_min_0a7ff474793a505a], a0.this$, a1, a2);
      }

      JArray< jdouble > StatUtils::mode(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_mode_4b742fe429c22ba8], a0.this$));
      }

      JArray< jdouble > StatUtils::mode(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_mode_27a40d66e0497a45], a0.this$, a1, a2));
      }

      JArray< jdouble > StatUtils::normalize(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_normalize_4b742fe429c22ba8], a0.this$));
      }

      jdouble StatUtils::percentile(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_percentile_926a8b9763aa0b21], a0.this$, a1);
      }

      jdouble StatUtils::percentile(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_percentile_346318efe67d9ca8], a0.this$, a1, a2, a3);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_f05cb8c6dfd5e0b9], a0.this$);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_926a8b9763aa0b21], a0.this$, a1);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_0a7ff474793a505a], a0.this$, a1, a2);
      }

      jdouble StatUtils::populationVariance(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_populationVariance_431214b6e4f01f3c], a0.this$, a1, a2, a3);
      }

      jdouble StatUtils::product(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_product_f05cb8c6dfd5e0b9], a0.this$);
      }

      jdouble StatUtils::product(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_product_0a7ff474793a505a], a0.this$, a1, a2);
      }

      jdouble StatUtils::sum(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sum_f05cb8c6dfd5e0b9], a0.this$);
      }

      jdouble StatUtils::sum(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sum_0a7ff474793a505a], a0.this$, a1, a2);
      }

      jdouble StatUtils::sumDifference(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumDifference_1ce76fb6ff382da9], a0.this$, a1.this$);
      }

      jdouble StatUtils::sumLog(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumLog_f05cb8c6dfd5e0b9], a0.this$);
      }

      jdouble StatUtils::sumLog(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumLog_0a7ff474793a505a], a0.this$, a1, a2);
      }

      jdouble StatUtils::sumSq(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumSq_f05cb8c6dfd5e0b9], a0.this$);
      }

      jdouble StatUtils::sumSq(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_sumSq_0a7ff474793a505a], a0.this$, a1, a2);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_f05cb8c6dfd5e0b9], a0.this$);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_926a8b9763aa0b21], a0.this$, a1);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_0a7ff474793a505a], a0.this$, a1, a2);
      }

      jdouble StatUtils::variance(const JArray< jdouble > & a0, jdouble a1, jint a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_variance_431214b6e4f01f3c], a0.this$, a1, a2, a3);
      }

      jdouble StatUtils::varianceDifference(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_varianceDifference_568f42d2326d41b5], a0.this$, a1.this$, a2);
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
      static PyObject *t_StatUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StatUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StatUtils_geometricMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_max(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_mean(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_meanDifference(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_min(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_mode(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_normalize(PyTypeObject *type, PyObject *arg);
      static PyObject *t_StatUtils_percentile(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_populationVariance(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_product(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sum(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sumDifference(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sumLog(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_sumSq(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_variance(PyTypeObject *type, PyObject *args);
      static PyObject *t_StatUtils_varianceDifference(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_StatUtils__methods_[] = {
        DECLARE_METHOD(t_StatUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, geometricMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, max, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, mean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, meanDifference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, min, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, mode, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, normalize, METH_O | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, percentile, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, populationVariance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, product, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sum, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sumDifference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sumLog, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, sumSq, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, variance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_StatUtils, varianceDifference, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(StatUtils)[] = {
        { Py_tp_methods, t_StatUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(StatUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(StatUtils, t_StatUtils, StatUtils);

      void t_StatUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(StatUtils), &PY_TYPE_DEF(StatUtils), module, "StatUtils", 0);
      }

      void t_StatUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(StatUtils), "class_", make_descriptor(StatUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StatUtils), "wrapfn_", make_descriptor(t_StatUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(StatUtils), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_StatUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, StatUtils::initializeClass, 1)))
          return NULL;
        return t_StatUtils::wrap_Object(StatUtils(((t_StatUtils *) arg)->object.this$));
      }
      static PyObject *t_StatUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, StatUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_StatUtils_geometricMean(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::geometricMean(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::geometricMean(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "geometricMean", args);
        return NULL;
      }

      static PyObject *t_StatUtils_max(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::max$(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::max$(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "max", args);
        return NULL;
      }

      static PyObject *t_StatUtils_mean(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mean$(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mean$(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "mean", args);
        return NULL;
      }

      static PyObject *t_StatUtils_meanDifference(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::meanDifference(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "meanDifference", args);
        return NULL;
      }

      static PyObject *t_StatUtils_min(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::min$(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::min$(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "min", args);
        return NULL;
      }

      static PyObject *t_StatUtils_mode(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mode(a0));
              return result.wrap();
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::mode(a0, a1, a2));
              return result.wrap();
            }
          }
        }

        PyErr_SetArgsError(type, "mode", args);
        return NULL;
      }

      static PyObject *t_StatUtils_normalize(PyTypeObject *type, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::normalize(a0));
          return result.wrap();
        }

        PyErr_SetArgsError(type, "normalize", arg);
        return NULL;
      }

      static PyObject *t_StatUtils_percentile(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::percentile(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble a3;
            jdouble result;

            if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::percentile(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "percentile", args);
        return NULL;
      }

      static PyObject *t_StatUtils_populationVariance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jint a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::populationVariance(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "populationVariance", args);
        return NULL;
      }

      static PyObject *t_StatUtils_product(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::product(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::product(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "product", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sum(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sum(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sum(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sumDifference(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble result;

        if (!parseArgs(args, "[D[D", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumDifference(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "sumDifference", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sumLog(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumLog(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumLog(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "sumLog", args);
        return NULL;
      }

      static PyObject *t_StatUtils_sumSq(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumSq(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::sumSq(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "sumSq", args);
        return NULL;
      }

      static PyObject *t_StatUtils_variance(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jint a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "[DDII", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::variance(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "variance", args);
        return NULL;
      }

      static PyObject *t_StatUtils_varianceDifference(PyTypeObject *type, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::StatUtils::varianceDifference(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "varianceDifference", args);
        return NULL;
      }
    }
  }
}
