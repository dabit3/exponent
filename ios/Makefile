ROOT = ../
IMAGE_NAME = gcr.io/exponentjs/ios-base
DOCKERFILE = ios/Dockerfile

build:
	gtar -C ${ROOT} \
		--exclude-from=./.dockerignore \
		-zcf - \
		package.json \
		${DOCKERFILE} \
		template-files \
		shellAppBase-builds \
		tools-public \
		../node_modules-tarballs \
		../.npmrc \
		tools | \
		docker build -t ${IMAGE_NAME}:${IMAGE_TAG} -f ${DOCKERFILE} -

.PHONY: build push
